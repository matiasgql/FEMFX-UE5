//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "EditorFramework/AssetImportData.h"
#include "Factories/Factory.h"

#include "FEMMeshFactory.generated.h"


UCLASS(config = EditorPerProjectUserSettings, MinimalAPI)
class UFEMMeshImportData : public UAssetImportData
{
public:

	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (InlineEditCoditionToggle))
	bool bProceduralGenerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	bool Randomize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	int NumCubesX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	int NumCubesY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	int NumCubesZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	float CubeX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	float CubeY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	float CubeZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	float Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bProceduralGenerate"))
	bool IsWoodPanel;

	void CopyFrom(UFEMMeshImportData* Other);
	void SaveOptions();

	void LoadOptions();

};



UCLASS()
class UFEMMeshFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;


	uint32 GetMenuCategories() const override;
	bool ShouldShowInNewMenu() const override;
};