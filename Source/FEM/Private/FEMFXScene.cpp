//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#include "FEMFXScene.h"
#include "AMD_FEMFX.h"
#include "FEMFXMathConversion.h"
#include "FEMMesh.h"
#include "FEMActor.h"
#include "FEMCommon.h"
#include "sample_task_system.h"
#include "IFEM.h"

void* FmAlignedMalloc(size_t size, size_t alignment)
{
    return _aligned_malloc(size, alignment);
}

void FmAlignedFree(void* ptr)
{
    _aligned_free(ptr);
}

AFEMFXScene::AFEMFXScene(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bIsInitialized = false;

	MaxTetMeshBuffers = MAX_MESH_BUFFERS;
	MaxTetMeshes = MAX_MESHES;
	MaxRigidBodies = MAX_RIGID_BODIES;
	MaxDistanceContacts = MAX_DISTANCE_CONTACTS;
	MaxFractureContacts = MAX_FRACTURE_CONTACTS;
	MaxVolumeContacts = MAX_VOLUME_CONTACTS;
	MaxVolumeContactVerts = MAX_VOLUME_CONTACT_VERTS;
	MaxObjectPairTriPairs = MAX_VERTS_PER_MESH_BUFFER * 2;
	MaxObjectPairVolContactVerts = MAX_VERTS_PER_MESH_BUFFER * 2;
	MaxGlueConstraints = MAX_GLUE_CONSTRAINTS;
	MaxPlaneConstraints = MAX_PLANE_CONSTRAINTS;
	MaxRigidBodyAngleConstraints = MAX_RIGID_BODY_ANGLE_CONSTRAINTS;
	MaxDeformationConstraints = MAX_MESH_BUFFERS * 64;
	MaxBroadPhasePairs = MAX_BROAD_PHASE_PAIRS;
	MaxUserBroadPhasePairs = MAX_BROAD_PHASE_PAIRS;
	MaxVerts = MAX_VERTS_PER_MESH_BUFFER * MAX_MESH_BUFFERS;
	MaxJacobianSubmats = MAX_CONTACTS * 8;
	NumWorkerThreads = 1;

	bAllowTick = true;
    lastTimestep = 1.0f / 60.0f;

	frameTime = 1.0f/60.0f;
	timeElapsed = 0.0f;

	PrimaryActorTick.bCanEverTick = true;

	MaxCollisionDistanceContacts = 100;
	MaxDistanceContactsPerObjectPair = 2;
	MaxCollisionVolumeContacts = 0;
	MaxVolumeContactsPerObjectPair = 0;
	MinContactRelativeVelocity = 1.0;

	//AddToRoot();

}


//bool AFEMFXScene::IsProcessed(FString name)
//{
//	return FEMPreProcessedMeshes.Contains(name);
//}

//PreProcessedMesh& AFEMFXScene::AddPreProcessedMesh(FString name, PreProcessedMesh mesh)
//{
//	return FEMPreProcessedMeshes.Add(name, mesh);
//}
//
//PreProcessedMesh& AFEMFXScene::GetPreProcessedMesh(FString name)
//{
//	return FEMPreProcessedMeshes[name];
//}

void AFEMFXScene::ResetScene_Implementation()
{

}

bool AFEMFXScene::AllocateNewMesh(UFEMFXMeshComponent* meshComponent)
{
	if (!bIsInitialized)
	{
		Initialize();
	}

	if (!meshComponent->GetTetMeshBuffer())
	{
		return false;
	}

	AMD::uint BufferId = AMD::FmAddTetMeshBufferToScene(AMDFXSceneBuffer, meshComponent->GetTetMeshBuffer());

	if (BufferId == FM_INVALID_ID)
	{
		return false;
	}

	m_ComponentsAllocated.Push(meshComponent);

	meshComponent->SceneBufferIndex = m_ComponentsAllocated.Num() - 1;

	UpdateSimData();

	return true;
}

void AFEMFXScene::Initialize()
{

	if (bIsInitialized)
		return;

	AMD::SampleInitTaskSystem(NumWorkerThreads);
	NumWorkerThreads = AMD::SampleGetTaskSystemNumThreads();

	AMD::FmSceneSetupParams sceneParams;
	sceneParams.maxTetMeshBuffers = MaxTetMeshBuffers;
	sceneParams.maxTetMeshes = MaxTetMeshes;
	sceneParams.maxRigidBodies = MaxRigidBodies;
	sceneParams.maxDistanceContacts = MaxDistanceContacts;
	sceneParams.maxVolumeContacts = MaxVolumeContacts;
	sceneParams.maxVolumeContactVerts = MaxVolumeContactVerts;
	sceneParams.maxGlueConstraints = MaxGlueConstraints;
	sceneParams.maxPlaneConstraints = MaxPlaneConstraints;
	sceneParams.maxRigidBodyAngleConstraints = MaxRigidBodyAngleConstraints;
	sceneParams.maxDeformationConstraints = MaxDeformationConstraints;
	sceneParams.maxBroadPhasePairs = MaxBroadPhasePairs;
	sceneParams.maxRigidBodyBroadPhasePairs = MaxUserBroadPhasePairs;
	sceneParams.maxSceneVerts = MaxVerts;
    sceneParams.maxTetMeshBufferFeatures = 16384;
	sceneParams.numWorkerThreads = NumWorkerThreads;  // Must match number of threads used by task scheduler

    sceneParams.maxConstraintSolverDataSize = 100000000;

	AMDFXSceneBuffer = AMD::FmCreateScene(sceneParams);

    AMD::FmTaskSystemCallbacks taskSystemCallbacks;

    taskSystemCallbacks.SetCallbacks(
        AMD::SampleGetTaskSystemNumThreads,
        AMD::SampleGetTaskSystemWorkerIndex,
        AMD::SampleAsyncTask,
        AMD::SampleCreateSyncEvent,
        AMD::SampleDestroySyncEvent,
        AMD::SampleWaitForSyncEvent,
        AMD::SampleTriggerSyncEvent
#if !FM_ASYNC_THREADING
        SampleCreateTaskWaitCounter,
        SampleWaitForTaskWaitCounter,
        SampleDestroyTaskWaitCounter,
        SampleSubmitTask,
        SampleParallelFor
#endif
    );

    if (minPlaneConstraint.X == 0.0f && minPlaneConstraint.Y == 0.0f && minPlaneConstraint.Z == 0.0f
        && maxPlaneConstraint.X == 0.0f && maxPlaneConstraint.Y == 0.0f && maxPlaneConstraint.Z == 0.0f)
    {
        // Set default to large space
        minPlaneConstraint.X = -1000.0f;
        minPlaneConstraint.Y = 0.0f;
        minPlaneConstraint.Z = -1000.0f;
        maxPlaneConstraint.X = 1000.0f;
        maxPlaneConstraint.Y = 1000.0f;
        maxPlaneConstraint.Z = 1000.0f;
    }

	AMD::FmVector3 min = ConvertUnrealToFEMFXVector(minPlaneConstraint) / 100;
	AMD::FmVector3 max = ConvertUnrealToFEMFXVector(maxPlaneConstraint) / 100;

	AMD::FmSceneCollisionPlanes collisionPlanes;
	collisionPlanes.minX = minPlaneConstraint.X;//41.0f;
	collisionPlanes.minY = minPlaneConstraint.Y;//-0.2f;
	collisionPlanes.minZ = minPlaneConstraint.Z;//-17.0f;
	collisionPlanes.maxX = maxPlaneConstraint.X;//121.1f;
	collisionPlanes.maxY = maxPlaneConstraint.Y;//13.0f;
	collisionPlanes.maxZ = maxPlaneConstraint.Z;//22.5f;

    AMD::FmSceneControlParams params;
	params.collisionPlanes = collisionPlanes;

    params.rigidBodiesExternal = false;

    // Currently hard-coded for all scenes
    // rigid bodies have collision group 1 by default
    AMD::FmSetGroupsCanCollide(AMDFXSceneBuffer, 1, 1, false); // no collisions between rigid bodies
    AMD::FmSetGroupsCanCollide(AMDFXSceneBuffer, 0, 3, true);
    AMD::FmSetGroupsCanCollide(AMDFXSceneBuffer, 2, 3, true);

	AMD::FmCollisionReportDistanceContact* contactBuffer = new AMD::FmCollisionReportDistanceContact[MaxCollisionDistanceContacts];

	AMD::FmCollisionReport& collisionReport = FmGetSceneCollisionReportRef(AMDFXSceneBuffer);
	collisionReport.maxDistanceContacts = MaxCollisionDistanceContacts;
	collisionReport.distanceContactBuffer = contactBuffer;
	collisionReport.maxDistanceContactsPerObjectPair = MaxDistanceContactsPerObjectPair;
	collisionReport.maxVolumeContacts = MaxCollisionVolumeContacts;
	collisionReport.maxVolumeContactsPerObjectPair = MaxVolumeContactsPerObjectPair;;
	collisionReport.minContactRelVel = MinContactRelativeVelocity;
	collisionReport.volumeContactBuffer = NULL;

    AMD::FmSetSceneControlParams(AMDFXSceneBuffer, params);
    AMD::FmSetSceneTaskSystemCallbacks(AMDFXSceneBuffer, taskSystemCallbacks);

	bIsInitialized = true;
}

void AFEMFXScene::RemoveActor(AFEMActor* actor)
{
	for (int i = 0; i < actor->MeshComponents.Num(); i++)
	{
		FreeComponent(Cast<UFEMFXMeshComponent>(actor->MeshComponents[i]));
	}

	actor->MeshComponents.Reset();

	FEMActors.Remove(actor);
}


void AFEMFXScene::FreeComponent(UFEMFXMeshComponent* comp)
{
	if (AMDFXSceneBuffer)
	{
		if (IsValid(comp))
		{
			AMD::FmRemoveTetMeshBufferFromScene(AMDFXSceneBuffer, comp->GetBufferId());

			if (comp->GetTetMeshBuffer())
			{
                FmDestroyTetMeshBuffer(comp->GetTetMeshBuffer());
			}
		}
	}
	if (comp) {
		m_ComponentsAllocated.Remove(comp);
	}
}

void AFEMFXScene::SetAllSleeping()
{
    if (AMDFXSceneBuffer)
    {
        AMD::FmSetAllSceneObjectsSleeping(AMDFXSceneBuffer);
    }
}

void AFEMFXScene::CreateSleepingGroup(const TArray<AActor*>& Actors)
{
    if (AMDFXSceneBuffer)
    {
        TArray<uint32> TetMeshIds;
        TArray<uint32> RigidBodyIds;

        int NumActors = Actors.Num();
        for (int ActorIdx = 0; ActorIdx < NumActors; ++ActorIdx)
        {
            if (Actors[ActorIdx]->IsA(AFEMActor::StaticClass()))
            {
                AFEMActor* FEMActor = Cast<AFEMActor>(Actors[ActorIdx]);
                
                if (FEMActor->Scene->GetSceneBuffer() == AMDFXSceneBuffer)
                {
                    FEMActor->AddObjectIds(TetMeshIds, RigidBodyIds);
                }
            }
        }

        AMD::FmCreateSleepingIsland(AMDFXSceneBuffer, TetMeshIds.GetData(), TetMeshIds.Num(), RigidBodyIds.GetData(), RigidBodyIds.Num());
    }
}

void AFEMFXScene::SetGroupsCanCollide(int i, int j, bool canCollide)
{
    if (AMDFXSceneBuffer)
    {
        AMD::FmSetGroupsCanCollide(AMDFXSceneBuffer, (AMD::uint)i, (AMD::uint)j, canCollide);
    }
}

void AFEMFXScene::AddToResetList(AActor* actor)
{
	//FEMActors.Add(actor);
}

void AFEMFXScene::AddRigidBodyToScene(AMD::FmRigidBody* inRigidBody)
{
    AMD::FmAddRigidBodyToScene(AMDFXSceneBuffer, inRigidBody);
}

void AFEMFXScene::FreeScene()
{
	if (AMDFXSceneBuffer)
	{
		for (int i = 0; i < m_ComponentsAllocated.Num(); ++i)
		{
			UFEMFXMeshComponent* comp = m_ComponentsAllocated[i];

			if (comp && comp->GetTetMeshBuffer())
			{
                FmDestroyTetMeshBuffer(comp->GetTetMeshBuffer());
			}
		}

        FmDestroyScene(AMDFXSceneBuffer);

		AMDFXSceneBuffer = NULL;
	}
}

void AFEMFXScene::Destroyed()
{
	Super::Destroyed();

	FreeScene();
}

// Called when the game starts or when spawned
void AFEMFXScene::BeginPlay()
{
	Super::BeginPlay();
}

void AFEMFXScene::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	FreeScene();
	//RemoveFromRoot();
}

void AFEMFXScene::Tick(float DeltaTime)
{

	QUICK_SCOPE_CYCLE_COUNTER(STAT_FEMScene_Tick);

	Super::Tick(DeltaTime);

	if (!bAllowTick)
		return;

	if (!bIsInitialized)
		Initialize();

	timeElapsed += DeltaTime;

	if (timeElapsed < frameTime)
	{
		return;
	}
	
	float timestep = 1.0f / 60.0f;
    int numSteps = 1;

    numSteps = timeElapsed / timestep;

    timeElapsed -= numSteps * timestep;

    if (numSteps > 2)  // limit maximum steps to avoid feedback loop
    {
        numSteps = 2;
        timeElapsed = 0.0f;
    }

	QUICK_SCOPE_CYCLE_COUNTER(STAT_FEMScene_UpdateScene);
	for (int stepIdx = 0; stepIdx < numSteps; stepIdx++)
	{
        FmUpdateScene(AMDFXSceneBuffer, timestep);

        for (int i = 0; i < FEMActors.Num(); ++i)
        {
            if (IsValid(FEMActors[i]))
            {
                FEMActors[i]->UpdateConstraints();
            }
        }

        UpdateRenderingDataFromFracture();
	}

	QUICK_SCOPE_CYCLE_COUNTER(STAT_FEMScene_UpdateSimData);
	UpdateSimData();

	QUICK_SCOPE_CYCLE_COUNTER(STAT_FEMScene_CollisionCallback);
    AMD::FmCollisionReport& CollisionReport = FmGetSceneCollisionReportRef(AMDFXSceneBuffer);
	if (CollisionReport.numDistanceContacts.val > 0)
	{
		for (AMD::uint i = 0; i < CollisionReport.numDistanceContacts.val; ++i)
		{
			FEMCollision colA;
			FEMCollision colB;

			UFEMFXMeshComponent* compA = nullptr;
			UFEMFXMeshComponent* compB = nullptr;

			for (int j = 0; j < m_ComponentsAllocated.Num(); ++j)
			{
				AMD::FmTetMesh* tetMeshA = AMD::FmGetTetMesh(*AMDFXSceneBuffer, CollisionReport.distanceContactBuffer[i].objectIdA);
				AMD::FmTetMesh* tetMeshB = AMD::FmGetTetMesh(*AMDFXSceneBuffer, CollisionReport.distanceContactBuffer[i].objectIdB);
				
				if (tetMeshA == nullptr || tetMeshB == nullptr)
					continue;

				if (m_ComponentsAllocated[j]->GetBufferId() == FmGetTetMeshBufferId(*tetMeshA))
				{
					compA = m_ComponentsAllocated[j];
					AMD::FmVector3 temp = CollisionReport.distanceContactBuffer[i].normal;

					uint32 tetId = CollisionReport.distanceContactBuffer[i].tetIdA;
                    AMD::FmTetVertIds tetVertIds = FmGetTetVertIds(*tetMeshA, tetId);
					AMD::FmVector3 tempPos1 = FmGetVertPosition(*tetMeshA, tetVertIds.ids[0]);
					AMD::FmVector3 tempPos2 = FmGetVertPosition(*tetMeshA, tetVertIds.ids[1]);
					AMD::FmVector3 tempPos3 = FmGetVertPosition(*tetMeshA, tetVertIds.ids[2]);
					AMD::FmVector3 tempPos4 = FmGetVertPosition(*tetMeshA, tetVertIds.ids[3]);

					float* baryPos = CollisionReport.distanceContactBuffer[i].posBaryA;

					AMD::FmVector3 tempPos = tempPos1 * baryPos[0] + tempPos2 * baryPos[1] + tempPos3 * baryPos[2] + tempPos4 * baryPos[3];

					colA.Normal = ConvertFEMFXVectorToUnreal(temp);
					colA.Position = ConvertFEMFXVectorToUnreal(tempPos) * 100;
					colA.TetInfo = CreateTetInfo(tetMeshA, tetId);
					colA.BarCentricPositions.AddDefaulted(4);
					colA.BarCentricPositions[0] = baryPos[0];
					colA.BarCentricPositions[1] = baryPos[1];
					colA.BarCentricPositions[2] = baryPos[2];
					colA.BarCentricPositions[3] = baryPos[3];
				}
				else if (m_ComponentsAllocated[j]->GetBufferId() == FmGetTetMeshBufferId(*tetMeshB))
				{
					compB = m_ComponentsAllocated[j];
					AMD::FmVector3 temp = CollisionReport.distanceContactBuffer[i].normal;
					
					uint32 tetId = CollisionReport.distanceContactBuffer[i].tetIdB;
                    AMD::FmTetVertIds tetVertIds = FmGetTetVertIds(*tetMeshB, tetId);
                    AMD::FmVector3 tempPos1 = FmGetVertPosition(*tetMeshB, tetVertIds.ids[0]);
                    AMD::FmVector3 tempPos2 = FmGetVertPosition(*tetMeshB, tetVertIds.ids[1]);
                    AMD::FmVector3 tempPos3 = FmGetVertPosition(*tetMeshB, tetVertIds.ids[2]);
                    AMD::FmVector3 tempPos4 = FmGetVertPosition(*tetMeshB, tetVertIds.ids[3]);

					float* baryPos = CollisionReport.distanceContactBuffer[i].posBaryB;

					AMD::FmVector3 tempPos = tempPos1 * baryPos[0] + tempPos2 * baryPos[1] + tempPos3 * baryPos[2] + tempPos4 * baryPos[3];

					colB.Normal = ConvertFEMFXVectorToUnreal(temp);
					colB.Position = (ConvertFEMFXVectorToUnreal(tempPos) * 100);
					colB.TetInfo = CreateTetInfo(tetMeshB, tetId);
					colB.BarCentricPositions.AddDefaulted(4);
					colB.BarCentricPositions[0] = baryPos[0];
					colB.BarCentricPositions[1] = baryPos[1];
					colB.BarCentricPositions[2] = baryPos[2];
					colB.BarCentricPositions[3] = baryPos[3];
				}
				if (compA != nullptr && compB != nullptr)
					break;
			}
			if (compA != nullptr) 
			{
				colA.OtherComponent = compB;
				compA->OnHit(colA);
				compA->CollisionEvent.Broadcast(colA);
			}
			if (compB != nullptr)
			{
				colB.OtherComponent = compA;
				compB->OnHit(colB);
				compB->CollisionEvent.Broadcast(colB);
			}
		}
	}

	//timeElapsed -= timestep;
}


AMD::FmScene* AFEMFXScene::GetSceneBuffer()
{
	if (!bIsInitialized)
		Initialize();

	return AMDFXSceneBuffer;
}

void AFEMFXScene::UpdateRenderingDataFromFracture()
{
	UWorld* World = GetWorld();

	if (World)
	{
		AMD::uint NumTetMeshBuffers = m_ComponentsAllocated.Num();

		for (AMD::uint i = 0; i < NumTetMeshBuffers; i++)
		{
			if (i >= (AMD::uint)m_ComponentsAllocated.Num())
			{
				continue;
			}
			if (!m_ComponentsAllocated[i]->IsPendingKill())
			{
				if (!IsValid(m_ComponentsAllocated[i]->FEMMesh))
					continue;

				m_ComponentsAllocated[i]->UpdateRenderingDataFromFracture();
			}
		}
	}
}

void AFEMFXScene::UpdateSimData()
{
	UWorld* World = GetWorld();

	if (World)
	{
		AMD::uint NumTetMeshBuffers = m_ComponentsAllocated.Num();

		for (AMD::uint i = 0; i < NumTetMeshBuffers; i++)
		{
			if (i >= (AMD::uint)m_ComponentsAllocated.Num())
			{
				continue;
			}
			if (!m_ComponentsAllocated[i]->IsPendingKill())
			{

				AMD::FmTetMeshBuffer* TetMeshBuffer = m_ComponentsAllocated[i]->GetTetMeshBuffer();// SimResource->TetMeshBuffer;
				UFEMFXMeshComponent* FEMMeshComponent = m_ComponentsAllocated[i];

				if (IsValid(FEMMeshComponent))
				{
					FEMMeshComponent->UpdateSceneProxy();

					if (FEMMeshComponent->FractureEnabled)
					{
						FEMMeshComponent->UpdateSceneProxyFromFracture();
					}
				}
				
			}
		}
	}
}

void AFEMFXScene::AddConditionCheckedMesh(FString name)
{
    ConditionCheckedMeshes.Add(name);
}

bool AFEMFXScene::IsConditionChecked(FString name)
{
    return ConditionCheckedMeshes.Contains(name);
}
