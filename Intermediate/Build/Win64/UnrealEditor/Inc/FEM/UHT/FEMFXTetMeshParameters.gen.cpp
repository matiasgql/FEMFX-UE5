// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMFXTetMeshParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMFXTetMeshParameters() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FEM_API UClass* Z_Construct_UClass_UFEMFXTetMeshParameters();
	FEM_API UClass* Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister();
	FEM_API UEnum* Z_Construct_UEnum_FEM_ETetParameterType();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETetParameterType;
	static UEnum* ETetParameterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETetParameterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETetParameterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FEM_ETetParameterType, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ETetParameterType"));
		}
		return Z_Registration_Info_UEnum_ETetParameterType.OuterSingleton;
	}
	template<> FEM_API UEnum* StaticEnum<ETetParameterType>()
	{
		return ETetParameterType_StaticEnum();
	}
	struct Z_Construct_UEnum_FEM_ETetParameterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enumerators[] = {
		{ "ETetParameterType::FEM_None", (int64)ETetParameterType::FEM_None },
		{ "ETetParameterType::FEM_Wood", (int64)ETetParameterType::FEM_Wood },
		{ "ETetParameterType::FEM_Metal", (int64)ETetParameterType::FEM_Metal },
		{ "ETetParameterType::FEM_Stone", (int64)ETetParameterType::FEM_Stone },
		{ "ETetParameterType::FEM_Rubber", (int64)ETetParameterType::FEM_Rubber },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FEM_Metal.DisplayName", "Metal" },
		{ "FEM_Metal.Name", "ETetParameterType::FEM_Metal" },
		{ "FEM_None.DisplayName", "None" },
		{ "FEM_None.Name", "ETetParameterType::FEM_None" },
		{ "FEM_Rubber.DisplayName", "Rubber" },
		{ "FEM_Rubber.Name", "ETetParameterType::FEM_Rubber" },
		{ "FEM_Stone.DisplayName", "Stone" },
		{ "FEM_Stone.Name", "ETetParameterType::FEM_Stone" },
		{ "FEM_Wood.DisplayName", "Wood" },
		{ "FEM_Wood.Name", "ETetParameterType::FEM_Wood" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FEM_ETetParameterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		"ETetParameterType",
		"ETetParameterType",
		Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FEM_ETetParameterType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FEM_ETetParameterType()
	{
		if (!Z_Registration_Info_UEnum_ETetParameterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETetParameterType.InnerSingleton, Z_Construct_UEnum_FEM_ETetParameterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETetParameterType.InnerSingleton;
	}
	void UFEMFXTetMeshParameters::StaticRegisterNativesUFEMFXTetMeshParameters()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMFXTetMeshParameters);
	UClass* Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister()
	{
		return UFEMFXTetMeshParameters::StaticClass();
	}
	struct Z_Construct_UClass_UFEMFXTetMeshParameters_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_restDensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_restDensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_youngsModulus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_youngsModulus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_poissonsRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_poissonsRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plasticYieldThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_plasticYieldThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plasticCreep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_plasticCreep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plasticMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_plasticMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_plasticMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_plasticMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fractureStressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fractureStressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxUnconstrainedSolveIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_maxUnconstrainedSolveIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lowerDeformationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lowerDeformationLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_upperDeformationLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_upperDeformationLimit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_physicalMaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physicalMaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_physicalMaterialType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FEMFXTetMeshParameters.h" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_restDensity_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "20.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Density at rest" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_restDensity = { "restDensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, restDensity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_restDensity_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_restDensity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_youngsModulus_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "1.0e5" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Greater values will increase stiffness of material" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_youngsModulus = { "youngsModulus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, youngsModulus), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_youngsModulus_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_youngsModulus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_poissonsRatio_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMax", "0.45" },
		{ "ClampMin", "0.0" },
		{ "MakeStructureDefaultValue", "0.3" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
		{ "Tootip", "Defines how much material bulges when compressed, with 0 causing none.  Values closer to 0.5 worsen conditioning and require more iterations." },
		{ "UIMax", "0.45" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_poissonsRatio = { "poissonsRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, poissonsRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_poissonsRatio_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_poissonsRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticYieldThreshold_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Threshold for stress magnitude where plastic deformation starts." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticYieldThreshold = { "plasticYieldThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, plasticYieldThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticYieldThreshold_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticYieldThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticCreep_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Portion of elastic deformation converted to plastic is creep * (stress_mag - yield)/stress_mag" },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticCreep = { "plasticCreep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, plasticCreep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticCreep_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticCreep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMin_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.1" },
		{ "MakeStructureDefaultValue", "0.1" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Minimum scale of compression from plastic deformation.  Smaller values allow greater plastic deformation but may worsen conditioning." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMin = { "plasticMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, plasticMin), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMin_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMin_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMax_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMin", "1.0" },
		{ "MakeStructureDefaultValue", "4.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
		{ "Tootip", "Maximum scale of stretch from plastic deformation.   Larger values allow greater plastic deformation but may worsen conditioning." },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMax = { "plasticMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, plasticMax), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMax_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMax_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_fractureStressThreshold_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value >= 1.  \n" },
#endif
		{ "MakeStructureDefaultValue", "5.0e3" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value >= 1." },
#endif
		{ "Tootip", "Threshold for stress max eigenvalue where fracture occurs" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_fractureStressThreshold = { "fractureStressThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, fractureStressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_fractureStressThreshold_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_fractureStressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_maxUnconstrainedSolveIterations_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "60" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Maximum number of CG iterations to use with this material" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_maxUnconstrainedSolveIterations = { "maxUnconstrainedSolveIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, maxUnconstrainedSolveIterations), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_maxUnconstrainedSolveIterations_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_maxUnconstrainedSolveIterations_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_lowerDeformationLimit_MetaData[] = {
		{ "Category", "FEM" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Constrains minimum scale of deformation." },
#endif
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_lowerDeformationLimit = { "lowerDeformationLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, lowerDeformationLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_lowerDeformationLimit_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_lowerDeformationLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_upperDeformationLimit_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "0.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Constrains maximum scale of deformation." },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_upperDeformationLimit = { "upperDeformationLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, upperDeformationLimit), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_upperDeformationLimit_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_upperDeformationLimit_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType_MetaData[] = {
		{ "Category", "FEM" },
		{ "MakeStructureDefaultValue", "1.0" },
		{ "ModuleRelativePath", "Classes/FEMFXTetMeshParameters.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Used for collision sound and visual effects." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType = { "physicalMaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXTetMeshParameters, physicalMaterialType), Z_Construct_UEnum_FEM_ETetParameterType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType_MetaData), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType_MetaData) }; // 708513585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_restDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_youngsModulus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_poissonsRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticYieldThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticCreep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_plasticMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_fractureStressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_maxUnconstrainedSolveIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_lowerDeformationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_upperDeformationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::NewProp_physicalMaterialType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMFXTetMeshParameters>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::ClassParams = {
		&UFEMFXTetMeshParameters::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMFXTetMeshParameters()
	{
		if (!Z_Registration_Info_UClass_UFEMFXTetMeshParameters.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMFXTetMeshParameters.OuterSingleton, Z_Construct_UClass_UFEMFXTetMeshParameters_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMFXTetMeshParameters.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMFXTetMeshParameters>()
	{
		return UFEMFXTetMeshParameters::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMFXTetMeshParameters);
	UFEMFXTetMeshParameters::~UFEMFXTetMeshParameters() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::EnumInfo[] = {
		{ ETetParameterType_StaticEnum, TEXT("ETetParameterType"), &Z_Registration_Info_UEnum_ETetParameterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 708513585U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMFXTetMeshParameters, UFEMFXTetMeshParameters::StaticClass, TEXT("UFEMFXTetMeshParameters"), &Z_Registration_Info_UClass_UFEMFXTetMeshParameters, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMFXTetMeshParameters), 3842794174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_197930349(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
