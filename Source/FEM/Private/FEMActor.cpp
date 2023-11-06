//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMActor.h"
#include "FEMFXScene.h"
#include "FEMResource.h"
#include "FEMFXMeshComponent.h"
#include "AMD_FEMFX.h"
#include "FEMFXMathConversion.h"
#include "FEMMesh.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "IFEM.h"

AFEMActor::AFEMActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetActorTickEnabled(true);

	PrimaryActorTick.bCanEverTick = true;

	bOverride_FEMScene = false;
}

void AFEMActor::BeginPlay()
{
	Super::BeginPlay();

	PreFEMLoad();

	FEMLoad();

	PostFEMLoad();

	SetupRigidBodies();

	CreateIdMapping();

	SetupConstraints();
}

void AFEMActor::Destroyed()
{
	Super::Destroyed();

	if (IsValid(Scene))
	{
		Scene->RemoveActor(this);

	}
	for (int i = 0; i < rigidBodies.Num(); ++i)
	{
		AMD::FmRemoveRigidBodyFromScene(Scene->GetSceneBuffer(), FmGetObjectId(*rigidBodies[i]));
        AMD::FmDestroyRigidBody(rigidBodies[i]);
	}
	rigidBodies.Empty();

	for (int i = 0; i < AngleConstraints.Num(); ++i)
	{
		AMD::FmRemoveRigidBodyAngleConstraintFromScene(Scene->GetSceneBuffer(), AngleConstraints[i].Value);
	}
	AngleConstraints.Empty();
	for (int i = 0; i < GlueConstraints.Num(); ++i)
	{
		AMD::FmRemoveGlueConstraintFromScene(Scene->GetSceneBuffer(), GlueConstraints[i].Value);
	}
	GlueConstraints.Empty();
	for (int i = 0; i < PlaneConstraints.Num(); ++i)
	{
		AMD::FmRemovePlaneConstraintFromScene(Scene->GetSceneBuffer(), PlaneConstraints[i].Value);
	}
	PlaneConstraints.Empty();

}

void AFEMActor::PreFEMLoad_Implementation()
{
	FAttachmentTransformRules rules(EAttachmentRule::KeepWorld, false);
	FTransform trans = FTransform::Identity;

	MeshComponents = K2_GetComponentsByClass(UFEMFXMeshComponent::StaticClass());

	TArray<AActor*> ActorsFound;
	UGameplayStatics::GetAllActorsOfClass(this, AFEMFXScene::StaticClass(), ActorsFound);

	if (ActorsFound.Num() > 0)
	{
		for (int i = 0; i < ActorsFound.Num(); ++i)
		{
			if (!bOverride_FEMScene)
			{
				if (Cast<AFEMFXScene>(ActorsFound[i])->Name == "Default")
				{
					Scene = Cast<AFEMFXScene>(ActorsFound[i]);
					break;
				}
			}
			else
			{
				if (Cast<AFEMFXScene>(ActorsFound[i])->Name == SceneName)
				{
					Scene = Cast<AFEMFXScene>(ActorsFound[i]);
					break;
				}
			}
		}
	}

	for (int i = 0; i < MeshComponents.Num(); ++i)
	{
		if(Cast<UFEMFXMeshComponent>(MeshComponents[i])->AddToSimulation)
			Cast<UFEMFXMeshComponent>(MeshComponents[i])->Scene = Cast<AFEMFXScene>(Scene);
	}

	if(IsValid(Scene))
		Scene->FEMActors.Add(this);
}

void AFEMActor::FEMLoad_Implementation()
{
	for (int i = 0; i < MeshComponents.Num(); ++i)
	{
		if (Cast<UFEMFXMeshComponent>(MeshComponents[i])->AddToSimulation)
			Cast<UFEMFXMeshComponent>(MeshComponents[i])->LoadResource();
	}
}

void AFEMActor::PostFEMLoad_Implementation()
{
	FTransform trans = FTransform::Identity;

	for (int i = 0; i < MeshComponents.Num(); ++i)
	{
		UFEMFXMeshComponent* comp = Cast<UFEMFXMeshComponent>(MeshComponents[i]);
		if (comp->AddToSimulation) 
		{
			comp->LoadSimObject();

			if (IsValid(Scene))
			{
				Scene->AllocateNewMesh(Cast<UFEMFXMeshComponent>(MeshComponents[i]));
			}
			else
			{
				UE_LOG(FEMLog, Error, TEXT("No Valid Scene."));
			}

			comp->SetWorldTransform(trans);

			comp->UpdateSceneProxy();

			if (comp->FractureEnabled)
				comp->UpdateSceneProxyFromFracture();

			comp->CleanResources();

			TArray<FTetInfo> tags = comp->GetTetsByTag("kinematic");

			for (int j = 0; j < tags.Num(); ++j)
			{
				comp->SetTetKinematic(tags[j].TetId, true, false, FVector(0.0, 0.0, 0.0));
			}
		}
	}
}

void AFEMActor::SetupRigidBodies_Implementation()
{
    if (!IsValid(Scene))
        return;
    
	AMD::FmQuat quat = ConvertUnrealQuaternionToFEM(GetTransform().GetRotation());
	AMD::FmMatrix3 rotation = AMD::FmMatrix3(quat);
	AMD::FmVector3 pos = ConvertUnrealToFEMFXVector(GetTransform().GetLocation()) / 100;

	rigidBodies.AddUninitialized(FEMResource.RigidBodies.Num());

	for (int i = 0; i < FEMResource.RigidBodies.Num(); ++i)
	{
		AMD::FmRigidBodySetupParams bodyParams;
		bodyParams.collisionGroup = 1;

		FRigidBody temp = FEMResource.RigidBodies[i];

		bodyParams.state.pos = AMD::FmInitVector3(temp.Position.X, temp.Position.Y, temp.Position.Z);
		bodyParams.state.quat = AMD::FmInitQuat(temp.Rotation.X, temp.Rotation.Y, temp.Rotation.Z, temp.Rotation.W);
		bodyParams.state.vel = AMD::FmInitVector3(0.0f, 0.0f, 0.0f);
		bodyParams.state.angVel = AMD::FmInitVector3(0.0f, 0.0f, 0.0f);

		bodyParams.halfDimX = temp.Dimensions.X;
		bodyParams.halfDimY = temp.Dimensions.Y;
		bodyParams.halfDimZ = temp.Dimensions.Z;

		bodyParams.mass = temp.mass;

		AMD::FmVector3 col1 = AMD::FmInitVector3(temp.BodyInertiaTensor[0], temp.BodyInertiaTensor[1], temp.BodyInertiaTensor[2]);
		AMD::FmVector3 col2 = AMD::FmInitVector3(temp.BodyInertiaTensor[3], temp.BodyInertiaTensor[4], temp.BodyInertiaTensor[5]);
		AMD::FmVector3 col3 = AMD::FmInitVector3(temp.BodyInertiaTensor[6], temp.BodyInertiaTensor[7], temp.BodyInertiaTensor[8]);

		bodyParams.bodyInertiaTensor = AMD::FmInitMatrix3(col1, col2, col3);

		bodyParams.state.pos = pos + mul(rotation, bodyParams.state.pos);
		bodyParams.state.quat = mul(quat, bodyParams.state.quat);

        rigidBodies[i] = AMD::FmCreateRigidBody(bodyParams);
        Scene->AddRigidBodyToScene(rigidBodies[i]);
	}
}

void AFEMActor::CreateIdMapping()
{
	for (int i = 0; i < ComponentResources.Num(); i++)
	{
		FComponentResources compResource = ComponentResources[i];
		UFEMFXMeshComponent* comp = GetComponentByName(compResource.Name);

		if (comp != nullptr && comp->AddToSimulation)
			resourceIdToBufferId.Add(i, comp->GetBufferId());
		else
			resourceIdToBufferId.Add(i, i);
	}
}

UFEMFXMeshComponent* AFEMActor::GetComponentByName(FString name)
{
	UFEMFXMeshComponent* comp = nullptr;

	for (auto it = MeshComponents.CreateIterator(); it; it++)
	{
		comp = Cast<UFEMFXMeshComponent>(*it);
		if (comp->FEMMesh->GetComponentResource().Name == name)
			return comp;
	}

	return nullptr;
} 

void AFEMActor::SetupConstraints_Implementation()
{

	for (auto it = FEMResource.AngleConstraints.CreateIterator(); it; it++)
	{
		AMD::FmRigidBodyAngleConstraintSetupParams constraint;
		constraint.kVelCorrection = 1.0f;
		constraint.kPosCorrection = 1.0f;
		constraint.frictionCoeff = 0.6f;

		constraint.objectIdA = AMD::FmGetObjectId(*rigidBodies[it->BodyA]);
		constraint.objectIdB = AMD::FmGetObjectId(*rigidBodies[it->BodyB]);

		constraint.axisBodySpaceA = AMD::FmInitVector3(it->AxisBodySpaceA.X, it->AxisBodySpaceA.Y, it->AxisBodySpaceA.Z);
		constraint.axisBodySpaceB = AMD::FmInitVector3(it->AxisBodySpaceB.X, it->AxisBodySpaceB.Y, it->AxisBodySpaceB.Z);

		unsigned int id = AMD::FmAddRigidBodyAngleConstraintToScene(Scene->GetSceneBuffer(), constraint);
		if(id == FM_INVALID_ID)
		{
			UE_LOG(FEMLog, Error, TEXT("Angle Constrain has invalid Id"));
		}
		FString Name = it->Name;
		if (Name.IsEmpty())
		{
			Name = "NoName";
		}
		AngleConstraints.Add(TPair<FString, unsigned int>(Name, id));
	}

	for (auto it = FEMResource.GlueConstraints.CreateIterator(); it; it++)
	{
		bool AddToSimulation = true;
		if (!it->IsRigidBodyA && (GetComponentByName(ComponentResources[it->BodyA].Name)->AddToSimulation == false))
		{
			AddToSimulation = false;
		}

		if (!it->IsRigidBodyB && (GetComponentByName(ComponentResources[it->BodyB].Name)->AddToSimulation == false))
		{
			AddToSimulation = false;
		}

		if (AddToSimulation)
		{
			AMD::FmGlueConstraintSetupParams constraint;

			constraint.kVelCorrection = 1.0f;
			constraint.kPosCorrection = 1.0f;

			constraint.bufferIdA = (it->IsRigidBodyA) ? FmGetObjectId(*rigidBodies[it->BodyA]) : resourceIdToBufferId[it->BodyA];
			constraint.bufferIdB = (it->IsRigidBodyB) ? FmGetObjectId(*rigidBodies[it->BodyB]) : resourceIdToBufferId[it->BodyB];

			constraint.bufferTetIdA = it->TetIdA;
			constraint.bufferTetIdB = it->TetIdB;

			constraint.posBodySpaceA[0] = it->PosBodySpaceA.X;
			constraint.posBodySpaceA[1] = it->PosBodySpaceA.Y;
			constraint.posBodySpaceA[2] = it->PosBodySpaceA.Z;
			constraint.posBodySpaceA[3] = it->PosBodySpaceA.W;

			constraint.posBodySpaceB[0] = it->PosBodySpaceB.X;
			constraint.posBodySpaceB[1] = it->PosBodySpaceB.Y;
			constraint.posBodySpaceB[2] = it->PosBodySpaceB.Z;
			constraint.posBodySpaceB[3] = it->PosBodySpaceB.W;

			constraint.breakThreshold = it->BreakThreshold;
			constraint.minGlueConstraints = it->MinGlueConstraints;

			unsigned int id = AMD::FmAddGlueConstraintToScene(Scene->GetSceneBuffer(), constraint);
			if (id == FM_INVALID_ID)
			{
				UE_LOG(FEMLog, Error, TEXT("Glue Constrain has invalid Id"));
			}

			FString Name = it->Name;
			if (Name.IsEmpty())
			{
				Name = "NoName";
			}
			GlueConstraints.Add(TPair<FString, unsigned int>(Name, id));
		}
	}

	for (auto it = FEMResource.PlaneConstraints.CreateIterator(); it; it++)
	{
		bool AddToSimulation = true;
		if (!it->IsRigidBodyA && (GetComponentByName(ComponentResources[it->BodyA].Name)->AddToSimulation == false))
		{
			AddToSimulation = false;
		}

		if (!it->IsRigidBodyB && (GetComponentByName(ComponentResources[it->BodyB].Name)->AddToSimulation == false))
		{
			AddToSimulation = false;
		}

		if (AddToSimulation)
		{
			AMD::FmPlaneConstraintSetupParams constraint;

			constraint.kVelCorrection = 1.0f;
			constraint.kPosCorrection = 1.0f;

			constraint.bufferIdA = (it->IsRigidBodyA) ? FmGetObjectId(*rigidBodies[it->BodyA]) : resourceIdToBufferId[it->BodyA];
			constraint.bufferIdB = (it->IsRigidBodyB) ? FmGetObjectId(*rigidBodies[it->BodyB]) : resourceIdToBufferId[it->BodyB];

			constraint.bufferTetIdA = it->TetIdA;
			constraint.bufferTetIdB = it->TetIdB;

			constraint.posBodySpaceA[0] = it->PosBodySpaceA.X;
			constraint.posBodySpaceA[1] = it->PosBodySpaceA.Y;
			constraint.posBodySpaceA[2] = it->PosBodySpaceA.Z;
			constraint.posBodySpaceA[3] = it->PosBodySpaceA.W;

			constraint.posBodySpaceB[0] = it->PosBodySpaceB.X;
			constraint.posBodySpaceB[1] = it->PosBodySpaceB.Y;
			constraint.posBodySpaceB[2] = it->PosBodySpaceB.Z;
			constraint.posBodySpaceB[3] = it->PosBodySpaceB.W;

            constraint.numDimensions = it->NumberOfPlanes;

			for (int i = 0; i < it->Planes.Num(); i++)
			{
				float bias = it->Planes[i].Bias;
				AMD::FmVector3 vec = AMD::FmInitVector3(it->Planes[i].PlaneNormal.X, it->Planes[i].PlaneNormal.Y, it->Planes[i].PlaneNormal.Z);
				bool nonNeg = it->Planes[i].NonNegative;

				switch (i)
				{
				case(0):
					constraint.bias0 = bias;
					constraint.planeNormal0 = vec;
                    constraint.nonNeg0 = nonNeg;  // TODO: this should be independent for each axis
					break;
				case(1):
					constraint.bias1 = bias;
					constraint.planeNormal1 = vec;
                    constraint.nonNeg1 = nonNeg;  // TODO: this should be independent for each axis
					break;
				case(2):
					constraint.bias2 = bias;
					constraint.planeNormal2 = vec;
                    constraint.nonNeg2 = nonNeg;  // TODO: this should be independent for each axis
					break;
				}
			}

			unsigned int id = AMD::FmAddPlaneConstraintToScene(Scene->GetSceneBuffer(), constraint);
			if (id == FM_INVALID_ID)
			{
				UE_LOG(FEMLog, Error, TEXT("Plane Constrain has invalid Id"));
			}

			FString Name = it->Name;
			if (Name.IsEmpty())
			{
				Name = "NoName";
			}
			PlaneConstraints.Add(TPair<FString, unsigned int>(Name, id));
		}
	}
}

void AFEMActor::UpdateConstraints_Implementation()
{
    // Temporary until can be converted to blueprints
    if (GetName().Contains(FString("Car")))
    {
        if (PlaneConstraints.Num() > 0)
        {
            AMD::uint constraintId = PlaneConstraints[0].Value;

            AMD::FmPlaneConstraintSetupParams planeConstraint = AMD::FmGetPlaneConstraintParams(*Scene->GetSceneBuffer(), PlaneConstraints[0].Value);

            {
                AMD::FmTetMeshBuffer* bodyMeshBuffer = AMD::FmGetTetMeshBuffer(*Scene->GetSceneBuffer(), planeConstraint.bufferIdB);

                AMD::uint tetId, subMeshIdx;
                AMD::FmTetMesh* tetMesh = FmGetTetMeshContainingTet(&tetId, &subMeshIdx, *bodyMeshBuffer, planeConstraint.bufferTetIdB);

                AMD::FmVector3 planeNormal0 = mul(FmGetTetRotation(*tetMesh, tetId), AMD::FmInitVector3(0.0f, 1.0f, 0.0f));
                FmSetPlaneConstraintNormals(Scene->GetSceneBuffer(), constraintId, planeNormal0, planeNormal0, planeNormal0);
            }
        }
    }
}

TArray<FAngleConstraintInfo> AFEMActor::GetAngleConstraintsByName(FString Name)
{
	TArray<FAngleConstraintInfo> constraintInfos;

	for (int i = 0; i < AngleConstraints.Num(); ++i)
	{
		if (AngleConstraints[i].Key == Name)
		{
			FAngleConstraintInfo info = FAngleConstraintInfo::FromAMDType(AMD::FmGetRigidBodyAngleConstraintParams(*Scene->GetSceneBuffer(), AngleConstraints[i].Value));
			info.ConstraintName = Name;
			info.ConstraintId = AngleConstraints[i].Value;

			constraintInfos.Add(info);
		}
	}

	return constraintInfos;
}

FAngleConstraintInfo AFEMActor::GetAngleConstraintByIndex(int Index)
{
	FAngleConstraintInfo info;

	if (Index > AngleConstraints.Num())
	{
		UE_LOG(FEMLog, Error, TEXT("Angle Constrain Index out of bounds."));
	}

	info = FAngleConstraintInfo::FromAMDType(AMD::FmGetRigidBodyAngleConstraintParams(*Scene->GetSceneBuffer(), AngleConstraints[Index].Value));
	info.ConstraintId = AngleConstraints[Index].Value;
	info.ConstraintName = AngleConstraints[Index].Key;

	return info;
}

TArray<FGlueConstraintInfo> AFEMActor::GetGlueConstraintsByName(FString Name)
{
	TArray<FGlueConstraintInfo> constraintInfos;

	for (int i = 0; i < GlueConstraints.Num(); ++i)
	{
		if (GlueConstraints[i].Key == Name)
		{
			FGlueConstraintInfo info = FGlueConstraintInfo::FromAMDType(
                AMD::FmGetGlueConstraintParams(*Scene->GetSceneBuffer(), GlueConstraints[i].Value),
                AMD::FmGetGlueConstraintImpulse(*Scene->GetSceneBuffer(), GlueConstraints[i].Value));
			info.ConstraintId = GlueConstraints[i].Value;
			info.ConstraintName = GlueConstraints[i].Key;

			constraintInfos.Add(info);
		}
	}

	return constraintInfos;
}

FGlueConstraintInfo AFEMActor::GetGlueConstraintByIndex(int Index)
{
	FGlueConstraintInfo info;

	if (Index > GlueConstraints.Num())
	{
		UE_LOG(FEMLog, Error, TEXT("Glue Constrain Index out of bounds."));
	}

	info = FGlueConstraintInfo::FromAMDType(
        AMD::FmGetGlueConstraintParams(*Scene->GetSceneBuffer(), GlueConstraints[Index].Value),
        AMD::FmGetGlueConstraintImpulse(*Scene->GetSceneBuffer(), GlueConstraints[Index].Value));
	info.ConstraintId = GlueConstraints[Index].Value;
	info.ConstraintName = GlueConstraints[Index].Key;

	return info;
}

TArray<FPlaneConstraintInfo> AFEMActor::GetPlaneConstraintsByName(FString Name)
{
	TArray<FPlaneConstraintInfo> constraintInfos;

	for (int i = 0; i < PlaneConstraints.Num(); ++i)
	{
		if (PlaneConstraints[i].Key == Name)
		{
			FPlaneConstraintInfo info = FPlaneConstraintInfo::FromAMDType(AMD::FmGetPlaneConstraintParams(*Scene->GetSceneBuffer(), PlaneConstraints[i].Value));
			info.ConstraintId = PlaneConstraints[i].Value;
			info.ConstraintName = PlaneConstraints[i].Key;

			constraintInfos.Add(info);
		}
	}

	return constraintInfos;
}

FPlaneConstraintInfo AFEMActor::GetPlaneConstraintByIndex(int Index)
{
	FPlaneConstraintInfo info;

	if (Index > PlaneConstraints.Num())
	{
		UE_LOG(FEMLog, Error, TEXT("Plane Constrain Index out of bounds."));
	}

	info = FPlaneConstraintInfo::FromAMDType(AMD::FmGetPlaneConstraintParams(*Scene->GetSceneBuffer(), PlaneConstraints[Index].Value));
	info.ConstraintId = PlaneConstraints[Index].Value;
	info.ConstraintName = PlaneConstraints[Index].Key;

	return info;
}

void AFEMActor::UpdateAngleConstraint(FAngleConstraintInfo info, bool ShouldDisable)
{
    AMD::FmSetRigidBodyAngleConstraintFrictionCoeff(Scene->GetSceneBuffer(), info.ConstraintId, info.FrictionCoeff);

    if (ShouldDisable)
    {
        AMD::FmEnableRigidBodyAngleConstraint(Scene->GetSceneBuffer(), info.ConstraintId, false);
    }
}

void AFEMActor::UpdateGlueConstraint(FGlueConstraintInfo info, bool ShouldDisable)
{
    if (ShouldDisable)
    {
        AMD::FmEnableGlueConstraint(Scene->GetSceneBuffer(), info.ConstraintId, false);
    }
}

void AFEMActor::UpdatePlaneConstraint(FPlaneConstraintInfo info, bool ShouldDisable)
{
    if (ShouldDisable)
    {
        AMD::FmEnablePlaneConstraint(Scene->GetSceneBuffer(), info.ConstraintId, false);
    }
}

void AFEMActor::ResetMaterial_Implementation()
{

}

FFEMMatrix FFEMMatrix::FromAMDType(AMD::FmMatrix3* mat)
{
	FFEMMatrix matrix;
	matrix.col0 = FVector(mat->col0.x, mat->col0.y, mat->col0.z);
	matrix.col1 = FVector(mat->col1.x, mat->col1.y, mat->col1.z);
	matrix.col2 = FVector(mat->col2.x, mat->col2.y, mat->col2.z);
	return matrix;
}

FAngleConstraintInfo FAngleConstraintInfo::FromAMDType(const AMD::FmRigidBodyAngleConstraintSetupParams& constraint)
{
	FAngleConstraintInfo info;
	info.ObjectIdA = constraint.objectIdA;
	info.ObjectIdB = constraint.objectIdB;

	info.AxisBodySpaceA = FVector(constraint.axisBodySpaceA.x, constraint.axisBodySpaceA.y, constraint.axisBodySpaceA.z);
	info.AxisBodySpaceB = FVector(constraint.axisBodySpaceB.x, constraint.axisBodySpaceB.y, constraint.axisBodySpaceB.z);

	info.FrictionCoeff = constraint.frictionCoeff;
	info.kVelCorrection = constraint.kVelCorrection;
	info.kPosCorrection = constraint.kPosCorrection;
	info.Type = constraint.type;

	return info;
}

FGlueConstraintInfo FGlueConstraintInfo::FromAMDType(
    const AMD::FmGlueConstraintSetupParams& constraint,
    const AMD::FmVector3& impulse)
{
	FGlueConstraintInfo info;

	info.BufferIdA = constraint.bufferIdA;
	info.BufferIdB = constraint.bufferIdB;
	info.BufferTetIdA = constraint.bufferTetIdA;
	info.BufferTetIdB = constraint.bufferTetIdB;

	info.PosBaryA.AddDefaulted(4);
	info.PosBaryA[0] = constraint.posBaryA[0];
	info.PosBaryA[1] = constraint.posBaryA[1];
	info.PosBaryA[2] = constraint.posBaryA[2];
	info.PosBaryA[3] = constraint.posBaryA[3];

	info.PosBaryB.AddDefaulted(4);
	info.PosBaryB[0] = constraint.posBaryB[0];
	info.PosBaryB[1] = constraint.posBaryB[1];
	info.PosBaryB[2] = constraint.posBaryB[2];
	info.PosBaryB[3] = constraint.posBaryB[3];

	info.LambdaX = impulse.x;
	info.LambdaY = impulse.y;
	info.LambdaZ = impulse.z;

	info.kVelCorrection = constraint.kVelCorrection;
	info.kPosCorrection = constraint.kPosCorrection;

	return info;
}

FPlaneConstraintInfo FPlaneConstraintInfo::FromAMDType(const AMD::FmPlaneConstraintSetupParams& constraint)
{
	FPlaneConstraintInfo info;

	info.BufferIdA = constraint.bufferIdA;
	info.BufferIdB = constraint.bufferIdB;
	info.BufferTetIdA = constraint.bufferTetIdA;
	info.BufferTetIdB = constraint.bufferTetIdB;

	info.PosBaryA.AddDefaulted(4);
	info.PosBaryA[0] = constraint.posBaryA[0];
	info.PosBaryA[1] = constraint.posBaryA[1];
	info.PosBaryA[2] = constraint.posBaryA[2];
	info.PosBaryA[3] = constraint.posBaryA[3];

	info.PosBaryB.AddDefaulted(4);
	info.PosBaryB[0] = constraint.posBaryB[0];
	info.PosBaryB[1] = constraint.posBaryB[1];
	info.PosBaryB[2] = constraint.posBaryB[2];
	info.PosBaryB[3] = constraint.posBaryB[3];

	info.kVelCorrection = constraint.kVelCorrection;
	info.kPosCorrection = constraint.kPosCorrection;

	FPlaneInfo planeInfo1;
	planeInfo1.Bias = constraint.bias0;
	planeInfo1.Normal = FVector(constraint.planeNormal0.x, constraint.planeNormal0.y, constraint.planeNormal0.z);
	info.Planes.Add(planeInfo1);
	if (constraint.numDimensions >= 2)
	{
		FPlaneInfo planeInfo;
		planeInfo.Bias = constraint.bias1;
		planeInfo.Normal = FVector(constraint.planeNormal1.x, constraint.planeNormal1.y, constraint.planeNormal1.z);
		info.Planes.Add(planeInfo);
	}
	if (constraint.numDimensions == 3)
	{
		FPlaneInfo planeInfo;
		planeInfo.Bias = constraint.bias2;
		planeInfo.Normal = FVector(constraint.planeNormal2.x, constraint.planeNormal2.y, constraint.planeNormal2.z);
		info.Planes.Add(planeInfo);
	}

	return info;
}

void AFEMActor::AddObjectIds(TArray<uint32>& TetMeshIds, TArray<uint32>& RigidBodyIds)
{
    for (int i = 0; i < MeshComponents.Num(); ++i)
    {
        if (MeshComponents[i])
        {
            AMD::FmTetMeshBuffer* TetMeshBuffer = Cast<UFEMFXMeshComponent>(MeshComponents[i])->GetTetMeshBuffer();
            int NumTetMeshes = FmGetNumTetMeshes(*TetMeshBuffer);
            for (int MeshIdx = 0; MeshIdx < NumTetMeshes; MeshIdx++)
            {
                AMD::FmTetMesh* TetMesh = FmGetTetMesh(*TetMeshBuffer, MeshIdx);
                TetMeshIds.Add(FmGetObjectId(*TetMesh));
            }

            int NumRigidBodies = rigidBodies.Num();
            for (int RBIdx = 0; RBIdx < NumRigidBodies; RBIdx++)
            {
                RigidBodyIds.Add(FmGetObjectId(*rigidBodies[i]));
            }
        }
    }
}
