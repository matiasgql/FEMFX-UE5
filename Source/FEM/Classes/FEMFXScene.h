//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FEMFXMeshComponent.h"
#include <vector>
#include "FEMCommon.h"
#include "PreProcessedMesh.h"
//ThirdParty/FEM/FEMFXBeta/amd_femfx/inc/
#include "FEMFXScene.generated.h"


class AFEMFXRigidBodyScene;
class AFEMActor;

UCLASS(BlueprintType, Blueprintable, config = Engine, meta = (ShortTooltip = "FEMScene is required to create FEM Meshes. Manages the Buffer data."))
class AFEMFXScene : public AActor
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	bool bIsMultiThreaded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxTetMeshBuffers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxTetMeshes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxRigidBodies;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxDistanceContacts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxFractureContacts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxVolumeContacts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxVolumeContactVerts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxObjectPairTriPairs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxObjectPairVolContactVerts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxGlueConstraints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxPlaneConstraints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxRigidBodyAngleConstraints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxDeformationConstraints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxBroadPhasePairs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxUserBroadPhasePairs;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxVerts;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup Parameters")
	int MaxJacobianSubmats;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setup Parameters")
	int NumWorkerThreads;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	bool bAllowTick;

	/** BEGIN AACTOR INTERFACE */
	virtual void Destroyed();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;
	/** END AACTOR INTERFACE */ 

	bool IsInitialized() { return bIsInitialized; }

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void Initialize();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	bool AllocateNewMesh(UFEMFXMeshComponent* meshComponent);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	TArray<UFEMFXMeshComponent*> m_ComponentsAllocated;

	AMD::FmScene* GetSceneBuffer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	AFEMFXRigidBodyScene* RigidBodyScene;

    //UFUNCTION(BlueprintCallable, Category = "FEM")
    void AddRigidBodyToScene(AMD::FmRigidBody* inRigidBody);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void AddToResetList(AActor* actor);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	TArray<AFEMActor*> FEMActors;

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void RemoveActor(AFEMActor* actor);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	float MaxSteps;
	
	void FreeComponent(UFEMFXMeshComponent* comp);

    UFUNCTION(BlueprintCallable, Category = "FEM")
    void SetAllSleeping();

    UFUNCTION(BlueprintCallable, Category = "FEM")
    void CreateSleepingGroup(const TArray<AActor*>& Actors);

    UFUNCTION(BlueprintCallable, Category = "FEM")
    void SetGroupsCanCollide(int i, int j, bool canCollide);

    UFUNCTION(BlueprintNativeEvent, CallInEditor, BlueprintCallable, Category = "FEM")
	void ResetScene();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		FVector minPlaneConstraint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
		FVector maxPlaneConstraint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMCollision")
		float MaxCollisionDistanceContacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMCollision")
		float MaxDistanceContactsPerObjectPair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMCollision")
		float MaxCollisionVolumeContacts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMCollision")
		float MaxVolumeContactsPerObjectPair;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMCollision")
		float MinContactRelativeVelocity;


	/*bool IsProcessed(FString name);*/

	/*PreProcessedMesh& AddPreProcessedMesh(FString name, PreProcessedMesh mesh);

	PreProcessedMesh& GetPreProcessedMesh(FString name);

	TMap<FString, PreProcessedMesh> FEMPreProcessedMeshes;*/

    TSet<FString> ConditionCheckedMeshes;

    void AddConditionCheckedMesh(FString name);

    bool IsConditionChecked(FString name);

private:
	
	bool bIsInitialized;

	size_t SceneBufferNumBytes;
	uint8_t* SceneBufferMemory;

	AMD::FmScene* AMDFXSceneBuffer;

	

	/** Brought Over from Eric's FEMFXScene Actor */
	float frameTime;
	float timeElapsed;
    float lastTimestep;

	unsigned int maxTriangles;
	
	void FreeScene();
	/*void UpdateDebugTetMesh();*/
    void UpdateRenderingDataFromFracture();
	void UpdateSimData();
	/** END Brought over from Eric's FEMFXScene Actor */

};