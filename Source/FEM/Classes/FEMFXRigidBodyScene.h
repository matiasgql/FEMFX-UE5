//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "FEMFXRigidBodyScene.generated.h"

namespace AMD
{
	struct ExampleRigidBodiesScene;
	struct FmRigidBody;
}

class AFEMFXScene;

USTRUCT(Blueprintable)
struct FConstraintsSetupParams
{
	GENERATED_USTRUCT_BODY()

	FConstraintsSetupParams()
	{
		MaxDistanceContacts = 0;
		MaxFractureContacts = 0;
		MaxVolumeContacts = 0;
		MaxVolumeContactVerts = 0;
		MaxGlueConstraints = 0;
		MaxPlaneConstraints = 0;
		MaxRigidBodyAngleConstraints = 0;
		MaxBroadPhasePairs = 0;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxDistanceContacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxFractureContacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxVolumeContacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxVolumeContactVerts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxGlueConstraints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxPlaneConstraints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxRigidBodyAngleConstraints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		int MaxBroadPhasePairs;
};

UCLASS(BlueprintType, Blueprintable)
class AFEMFXRigidBodyScene : public AActor
{
	GENERATED_UCLASS_BODY()

	bool bIsInitialized;

	void Initialize();

public:

	UFUNCTION(BlueprintCallable, Category = "FEM")
		void ResetScene();

	//UFUNCTION(BlueprintCallable, Category = "FEM")
	//AMD::ExampleRigidBodiesScene* GetRigidBodyScene();

	//UFUNCTION(BlueprintCallable, Category = "FEM")
	//AMD::FmRigidBody* AddRigidBodyToScene(AFEMFXScene* scene, const AMD::FmRigidBody& inRigidBody);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	int NumberOfRigidBodies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	int	MaxObjectPairTriPairs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	int MaxObjectPairVolContactVerts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	int MaxJacobianSubmats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FConstraintsSetupParams RigidConstraintsSetupParams;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FConstraintsSetupParams RigidFEMConstraintsSetupParams;

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void UpdateSceneRB(AFEMFXScene* scene, float timeStep);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void CleanUpScene();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FString Name;

	/*UPROPERTY(BlueprintCallable, Category = "FEM")
	void RemoveRigidBody(AMD::FmRigidBody* body);*/

private:
	AMD::ExampleRigidBodiesScene* RigidBodyScene;
};