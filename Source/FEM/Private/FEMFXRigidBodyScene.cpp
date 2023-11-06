//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMFXRigidBodyScene.h"
#include "FEMFXScene.h"
//#include "ExampleRigidBodies.h"

AFEMFXRigidBodyScene::AFEMFXRigidBodyScene(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//NumberOfRigidBodies = 0;
	//MaxObjectPairTriPairs = 0;
	//MaxObjectPairVolContactVerts = 0;
	//MaxJacobianSubmats = 0;

	//RigidConstraintsSetupParams = FConstraintsSetupParams();
	//RigidFEMConstraintsSetupParams = FConstraintsSetupParams();

	//bIsInitialized = false;
}

void AFEMFXRigidBodyScene::Initialize()
{
	//if (bIsInitialized)
	//	return;

	//AMD::ExampleRigidBodiesSceneSetupParams rbSceneParams;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxDistanceContacts = RigidConstraintsSetupParams.MaxDistanceContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxFractureContacts = RigidConstraintsSetupParams.MaxFractureContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxVolumeContacts = RigidConstraintsSetupParams.MaxVolumeContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxVolumeContactVerts = RigidConstraintsSetupParams.MaxVolumeContactVerts;;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxGlueConstraints = RigidConstraintsSetupParams.MaxGlueConstraints;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxBroadPhasePairs = RigidConstraintsSetupParams.MaxBroadPhasePairs;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxDistanceContacts = RigidFEMConstraintsSetupParams.MaxDistanceContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxFractureContacts = RigidFEMConstraintsSetupParams.MaxFractureContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxVolumeContacts = RigidFEMConstraintsSetupParams.MaxVolumeContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxVolumeContactVerts = RigidFEMConstraintsSetupParams.MaxVolumeContactVerts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxGlueConstraints = RigidFEMConstraintsSetupParams.MaxGlueConstraints;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxBroadPhasePairs = RigidFEMConstraintsSetupParams.MaxBroadPhasePairs;
	//rbSceneParams.maxObjectPairTriPairs = MaxObjectPairTriPairs;
	//rbSceneParams.maxObjectPairVolContactVerts = MaxObjectPairVolContactVerts;
	//rbSceneParams.maxJacobianSubmats = MaxJacobianSubmats;
	//rbSceneParams.maxRigidBodies = NumberOfRigidBodies;

	//RigidBodyScene = new AMD::ExampleRigidBodiesScene(rbSceneParams);

	//bIsInitialized = true;
}

//AMD::ExampleRigidBodiesScene* AFEMFXRigidBodyScene::GetRigidBodyScene()
//{
//	Initialize();
//	return RigidBodyScene;
//}

void AFEMFXRigidBodyScene::ResetScene()
{
	//delete RigidBodyScene;

	//AMD::ExampleRigidBodiesSceneSetupParams rbSceneParams;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxDistanceContacts = RigidConstraintsSetupParams.MaxDistanceContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxFractureContacts = RigidConstraintsSetupParams.MaxFractureContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxVolumeContacts = RigidConstraintsSetupParams.MaxVolumeContacts;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxVolumeContactVerts = RigidConstraintsSetupParams.MaxVolumeContactVerts;;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxGlueConstraints = RigidConstraintsSetupParams.MaxGlueConstraints;
	//rbSceneParams.rigidRigidConstraintsSetupParams.maxBroadPhasePairs = RigidConstraintsSetupParams.MaxBroadPhasePairs;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxDistanceContacts = RigidFEMConstraintsSetupParams.MaxDistanceContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxFractureContacts = RigidFEMConstraintsSetupParams.MaxFractureContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxVolumeContacts = RigidFEMConstraintsSetupParams.MaxVolumeContacts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxVolumeContactVerts = RigidFEMConstraintsSetupParams.MaxVolumeContactVerts;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxGlueConstraints = RigidFEMConstraintsSetupParams.MaxGlueConstraints;
	//rbSceneParams.rigidFEMConstraintsSetupParams.maxBroadPhasePairs = RigidFEMConstraintsSetupParams.MaxBroadPhasePairs;
	//rbSceneParams.maxObjectPairTriPairs = MaxObjectPairTriPairs;
	//rbSceneParams.maxObjectPairVolContactVerts = MaxObjectPairVolContactVerts;
	//rbSceneParams.maxJacobianSubmats = MaxJacobianSubmats;
	//rbSceneParams.maxRigidBodies = NumberOfRigidBodies;


	//RigidBodyScene = new AMD::ExampleRigidBodiesScene(rbSceneParams);

}

//AMD::FmRigidBody* AFEMFXRigidBodyScene::AddRigidBodyToScene(AFEMFXScene* scene, const AMD::FmRigidBody& inRigidBody)
//{
//	AMD::uint rbId = AMD::AddRigidBodyToScenes(GetRigidBodyScene(), scene->GetSceneBuffer(), inRigidBody);
//	return AMD::GetRigidBody(*scene->GetSceneBuffer(), rbId);
//}

void AFEMFXRigidBodyScene::UpdateSceneRB(AFEMFXScene* scene, float timeStep)
{
	//AMD::UpdateSceneRB(GetRigidBodyScene(), scene->GetSceneBuffer(), timeStep);
}

void AFEMFXRigidBodyScene::CleanUpScene()
{
	//delete RigidBodyScene;
	//bIsInitialized = false;
}

//void AFEMFXRigidBodyScene::RemoveRigidBody(AMD::FmRigidBody* body)
//{
//	
//
//}