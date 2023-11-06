//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "FEMFXTetMeshParameters.generated.h"

#define MinMax(a,b,c,d) ClampMin = a, ClampMax = b, UIMin = c, UIMax = d

UENUM(BlueprintType)
enum class ETetParameterType : uint8
{
	FEM_None	UMETA(DisplayName="None"),
	FEM_Wood	UMETA(DisplayName="Wood"),
	FEM_Metal	UMETA(DisplayName="Metal"),
	FEM_Stone	UMETA(DisplayName="Stone"),
	FEM_Rubber	UMETA(DisplayName="Rubber")
};

UCLASS(BlueprintType)
class FEM_API UFEMFXTetMeshParameters : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFEMFXTetMeshParameters();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta=(MakeStructureDefaultValue = "20.0", Tooltip = "Density at rest"))
		float restDensity;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "1.0e5", Tooltip = "Greater values will increase stiffness of material"))
		float youngsModulus;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.3",ClampMin = "0.0", ClampMax = "0.45", UIMin = "0.0",UIMax = "0.45", Tootip = "Defines how much material bulges when compressed, with 0 causing none.  Values closer to 0.5 worsen conditioning and require more iterations."))
		float poissonsRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.0", Tooltip = "Threshold for stress magnitude where plastic deformation starts."))
		float plasticYieldThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.0", ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", Tooltip = "Portion of elastic deformation converted to plastic is creep * (stress_mag - yield)/stress_mag"))
		float plasticCreep;          
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.1", ClampMin = "0.1", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", Tooltip = "Minimum scale of compression from plastic deformation.  Smaller values allow greater plastic deformation but may worsen conditioning."))
		float plasticMin;              
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "4.0", ClampMin = "1.0", UIMin = "1.0", Tootip = "Maximum scale of stretch from plastic deformation.   Larger values allow greater plastic deformation but may worsen conditioning."))
		float plasticMax;               // Value >= 1.  

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "5.0e3", ClampMin = "0.0", UIMin = "0.0", Tootip = "Threshold for stress max eigenvalue where fracture occurs"))
		float fractureStressThreshold;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "60", Tooltip = "Maximum number of CG iterations to use with this material"))
		int  maxUnconstrainedSolveIterations;  // 

                                               // Deformation limits as defined in Perez et al. "Strain Limiting for Soft Finger Contact Simulation".
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.0", ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0", Tooltip = "Constrains minimum scale of deformation."))
		float lowerDeformationLimit;    // Value > 0 and <= 1, or unlimited if = 0.  
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "0.0", Tooltip = "Constrains maximum scale of deformation."))
		float upperDeformationLimit;    // Value >= 1, or unlimited if = 0. 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", Meta = (MakeStructureDefaultValue = "1.0", Tooltip = "Used for collision sound and visual effects."))
		ETetParameterType physicalMaterialType;
};