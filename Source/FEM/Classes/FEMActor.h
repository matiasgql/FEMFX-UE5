//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FEMCommon.h"
#include "FEMResource.h"

#include "FEMActor.generated.h"

//class UFEMResource;
class AFEMFXScene;
class UActorComponent;
struct AMD::FmRigidBody;
class UFEMFXMeshComponent;

USTRUCT(BlueprintType)
struct FFEMMatrix
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
	FVector col0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
	FVector col1;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
	FVector col2;

	FFEMMatrix()
	{
		col0 = FVector(0.0f);
		col1 = FVector(0.0f);
		col2 = FVector(0.0f);
	}

	static FFEMMatrix FromAMDType(AMD::FmMatrix3* mat);
};

USTRUCT(BlueprintType)
struct FAngleConstraintInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int ConstraintId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FString ConstraintName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int ContactId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int ObjectIdA;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int ObjectIdB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		FVector AxisBodySpaceA;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		FVector AxisBodySpaceB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float FrictionCoeff;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kVelCorrection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kPosCorrection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		uint8 Type;

	FAngleConstraintInfo()
	{
		AxisBodySpaceA = FVector(0.0f);
		AxisBodySpaceB = FVector(0.0f);
		FrictionCoeff = 0.4f;
		kVelCorrection = 0.1f;
		kPosCorrection = 1.0f;
		Type = 0;
	}

	static FAngleConstraintInfo FromAMDType(const AMD::FmRigidBodyAngleConstraintSetupParams& constraint);
};

USTRUCT(BlueprintType)
struct FGlueConstraintInfo
{
	GENERATED_BODY()

public:

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int ConstraintId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FString ConstraintName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferIdA;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferIdB;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferTetIdA;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferTetIdB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		TArray<int> PosBaryA;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		TArray<int> PosBaryB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float LambdaX;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float LambdaY;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float LambdaZ;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kVelCorrection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kPosCorrection;

	FGlueConstraintInfo()
	{

	}

	static FGlueConstraintInfo FromAMDType(const AMD::FmGlueConstraintSetupParams& constraint, const AMD::FmVector3& impulse);
};

USTRUCT(BlueprintType)
struct FPlaneInfo
{
	GENERATED_BODY()

public:
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		FVector Normal;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float Bias;

	FPlaneInfo()
	{

	}
};

USTRUCT(BlueprintType)
struct FPlaneConstraintInfo
{
	GENERATED_BODY()

public:

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int ConstraintId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FString ConstraintName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferIdA;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferIdB;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferTetIdA;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int BufferTetIdB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		TArray<int> PosBaryA;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		TArray<int> PosBaryB;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		TArray<FPlaneInfo> Planes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kVelCorrection;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
		float kPosCorrection;

	FPlaneConstraintInfo()
	{

	}

	static FPlaneConstraintInfo FromAMDType(const AMD::FmPlaneConstraintSetupParams& constraint);
};



UCLASS()
class FEM_API AFEMActor : public AActor
{
	GENERATED_UCLASS_BODY()


public:

	/* FEM */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "FEM")
	TArray<UActorComponent*> MeshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (InlineEditCoditionToggle))
	bool bOverride_FEMScene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bOverride_FEMScene"))
	AFEMFXScene* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bOverride_FEMScene"))
	FString SceneName;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FActorResource FEMResource;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FComponentResources> ComponentResources;

	/* AActor Interface */
	UFUNCTION(BlueprintCallable, Category = "FEM")
	virtual void BeginPlay();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	virtual void Destroyed() override;
	/*******/

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void SetupRigidBodies();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void SetupConstraints();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void UpdateConstraints();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void PreFEMLoad();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void FEMLoad();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void PostFEMLoad();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "FEM")
	void ResetMaterial();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	UFEMFXMeshComponent* GetComponentByName(FString Name);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FAngleConstraintInfo> GetAngleConstraintsByName(FString Name);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FAngleConstraintInfo GetAngleConstraintByIndex(int Index);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FGlueConstraintInfo>GetGlueConstraintsByName(FString Name);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FGlueConstraintInfo GetGlueConstraintByIndex(int Index);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FPlaneConstraintInfo> GetPlaneConstraintsByName(FString Name);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FPlaneConstraintInfo GetPlaneConstraintByIndex(int Index);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void UpdateAngleConstraint(FAngleConstraintInfo info, bool ShouldDisable);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void UpdateGlueConstraint(FGlueConstraintInfo info, bool ShouldDisable);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void UpdatePlaneConstraint(FPlaneConstraintInfo info, bool ShouldDisable);
	/**/

    void AddObjectIds(TArray<uint32>& TetMeshIds, TArray<uint32>& RigidBodyIds);

private:

	void CreateIdMapping();

	TMap<unsigned int,unsigned int> resourceIdToBufferId;

	TArray<TPair<FString, unsigned int>> AngleConstraints;
	TArray<TPair<FString, unsigned int>> GlueConstraints;
	TArray<TPair<FString, unsigned int>> PlaneConstraints;

	/* FEM Lib Stuff */
	TArray<AMD::FmRigidBody*> rigidBodies;

};