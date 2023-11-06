// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMActor.h"
#include "FEMResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMActor();
	FEM_API UClass* Z_Construct_UClass_AFEMActor_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMFXMeshComponent_NoRegister();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FActorResource();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FAngleConstraintInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FComponentResources();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMMatrix();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FGlueConstraintInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraintInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneInfo();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMMatrix;
class UScriptStruct* FFEMMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMMatrix, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_FEMMatrix.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMMatrix>()
{
	return FFEMMatrix::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMMatrix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_col0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_col0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_col1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_col1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_col2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_col2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMMatrix_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMMatrix>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col0_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col0 = { "col0", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMMatrix, col0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col0_MetaData), Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col1_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col1 = { "col1", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMMatrix, col1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col1_MetaData), Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col2_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col2 = { "col2", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMMatrix, col2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col2_MetaData), Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewProp_col2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMMatrix",
		Z_Construct_UScriptStruct_FFEMMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::PropPointers),
		sizeof(FFEMMatrix),
		alignof(FFEMMatrix),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMMatrix_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMMatrix_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMMatrix()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMMatrix.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMMatrix.InnerSingleton, Z_Construct_UScriptStruct_FFEMMatrix_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMMatrix.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AngleConstraintInfo;
class UScriptStruct* FAngleConstraintInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AngleConstraintInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AngleConstraintInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngleConstraintInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("AngleConstraintInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AngleConstraintInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FAngleConstraintInfo>()
{
	return FAngleConstraintInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConstraintName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContactId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContactId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectIdA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectIdB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectIdB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisBodySpaceA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisBodySpaceA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisBodySpaceB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisBodySpaceB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrictionCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kVelCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kVelCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kPosCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kPosCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngleConstraintInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, ConstraintId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintId_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintName_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, ConstraintName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintName_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ContactId_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ContactId = { "ContactId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, ContactId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ContactId_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ContactId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdA = { "ObjectIdA", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, ObjectIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdA_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdB = { "ObjectIdB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, ObjectIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdB_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceA = { "AxisBodySpaceA", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, AxisBodySpaceA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceA_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceB = { "AxisBodySpaceB", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, AxisBodySpaceB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceB_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_FrictionCoeff_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_FrictionCoeff = { "FrictionCoeff", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, FrictionCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_FrictionCoeff_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_FrictionCoeff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kVelCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kVelCorrection = { "kVelCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, kVelCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kVelCorrection_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kVelCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kPosCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kPosCorrection = { "kPosCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, kPosCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kPosCorrection_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kPosCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraintInfo, Type), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_Type_MetaData), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_Type_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ConstraintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ContactId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_ObjectIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_AxisBodySpaceB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_FrictionCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kVelCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_kPosCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"AngleConstraintInfo",
		Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::PropPointers),
		sizeof(FAngleConstraintInfo),
		alignof(FAngleConstraintInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAngleConstraintInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AngleConstraintInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AngleConstraintInfo.InnerSingleton, Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AngleConstraintInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlueConstraintInfo;
class UScriptStruct* FGlueConstraintInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlueConstraintInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlueConstraintInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlueConstraintInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("GlueConstraintInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GlueConstraintInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FGlueConstraintInfo>()
{
	return FGlueConstraintInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConstraintName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferIdA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferIdB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferIdB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferTetIdA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferTetIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferTetIdB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferTetIdB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PosBaryA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBaryA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PosBaryA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PosBaryB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBaryB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PosBaryB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LambdaX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LambdaX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LambdaY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LambdaY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LambdaZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LambdaZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kVelCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kVelCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kPosCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kPosCorrection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlueConstraintInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, ConstraintId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintId_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintName_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, ConstraintName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintName_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdA = { "BufferIdA", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, BufferIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdA_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdB = { "BufferIdB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, BufferIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdB_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdA = { "BufferTetIdA", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, BufferTetIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdB = { "BufferTetIdB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, BufferTetIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA_Inner = { "PosBaryA", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA = { "PosBaryA", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, PosBaryA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB_Inner = { "PosBaryB", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB = { "PosBaryB", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, PosBaryB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaX_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaX = { "LambdaX", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, LambdaX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaX_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaY_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaY = { "LambdaY", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, LambdaY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaY_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaZ_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaZ = { "LambdaZ", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, LambdaZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaZ_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kVelCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kVelCorrection = { "kVelCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, kVelCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kVelCorrection_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kVelCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kPosCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kPosCorrection = { "kPosCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraintInfo, kPosCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kPosCorrection_MetaData), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kPosCorrection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_ConstraintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_BufferTetIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_PosBaryB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_LambdaZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kVelCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewProp_kPosCorrection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"GlueConstraintInfo",
		Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::PropPointers),
		sizeof(FGlueConstraintInfo),
		alignof(FGlueConstraintInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGlueConstraintInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GlueConstraintInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlueConstraintInfo.InnerSingleton, Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlueConstraintInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneInfo;
class UScriptStruct* FPlaneInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("PlaneInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FPlaneInfo>()
{
	return FPlaneInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneInfo, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Normal_MetaData), Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Normal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneInfo, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Bias_MetaData), Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Bias_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewProp_Bias,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"PlaneInfo",
		Z_Construct_UScriptStruct_FPlaneInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneInfo_Statics::PropPointers),
		sizeof(FPlaneInfo),
		alignof(FPlaneInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlaneInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneConstraintInfo;
class UScriptStruct* FPlaneConstraintInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneConstraintInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("PlaneConstraintInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FPlaneConstraintInfo>()
{
	return FPlaneConstraintInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConstraintName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferIdA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferIdB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferIdB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferTetIdA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferTetIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferTetIdB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferTetIdB;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PosBaryA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBaryA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PosBaryA;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PosBaryB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBaryB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PosBaryB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Planes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kVelCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kVelCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_kPosCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_kPosCorrection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneConstraintInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintId_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintId = { "ConstraintId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, ConstraintId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintId_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintName_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, ConstraintName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintName_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdA = { "BufferIdA", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, BufferIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdA_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdB = { "BufferIdB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, BufferIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdB_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdA = { "BufferTetIdA", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, BufferTetIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdB = { "BufferTetIdB", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, BufferTetIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdB_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA_Inner = { "PosBaryA", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA = { "PosBaryA", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, PosBaryA), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB_Inner = { "PosBaryB", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB = { "PosBaryB", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, PosBaryB), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlaneInfo, METADATA_PARAMS(0, nullptr) }; // 2630581814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, Planes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes_MetaData) }; // 2630581814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kVelCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kVelCorrection = { "kVelCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, kVelCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kVelCorrection_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kVelCorrection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kPosCorrection_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kPosCorrection = { "kPosCorrection", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraintInfo, kPosCorrection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kPosCorrection_MetaData), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kPosCorrection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_ConstraintName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_BufferTetIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_PosBaryB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_Planes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kVelCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewProp_kPosCorrection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"PlaneConstraintInfo",
		Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::PropPointers),
		sizeof(FPlaneConstraintInfo),
		alignof(FPlaneConstraintInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraintInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneConstraintInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(AFEMActor::execUpdatePlaneConstraint)
	{
		P_GET_STRUCT(FPlaneConstraintInfo,Z_Param_info);
		P_GET_UBOOL(Z_Param_ShouldDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlaneConstraint(Z_Param_info,Z_Param_ShouldDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execUpdateGlueConstraint)
	{
		P_GET_STRUCT(FGlueConstraintInfo,Z_Param_info);
		P_GET_UBOOL(Z_Param_ShouldDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateGlueConstraint(Z_Param_info,Z_Param_ShouldDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execUpdateAngleConstraint)
	{
		P_GET_STRUCT(FAngleConstraintInfo,Z_Param_info);
		P_GET_UBOOL(Z_Param_ShouldDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAngleConstraint(Z_Param_info,Z_Param_ShouldDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetPlaneConstraintByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlaneConstraintInfo*)Z_Param__Result=P_THIS->GetPlaneConstraintByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetPlaneConstraintsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPlaneConstraintInfo>*)Z_Param__Result=P_THIS->GetPlaneConstraintsByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetGlueConstraintByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGlueConstraintInfo*)Z_Param__Result=P_THIS->GetGlueConstraintByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetGlueConstraintsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGlueConstraintInfo>*)Z_Param__Result=P_THIS->GetGlueConstraintsByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetAngleConstraintByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAngleConstraintInfo*)Z_Param__Result=P_THIS->GetAngleConstraintByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetAngleConstraintsByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FAngleConstraintInfo>*)Z_Param__Result=P_THIS->GetAngleConstraintsByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execGetComponentByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFEMFXMeshComponent**)Z_Param__Result=P_THIS->GetComponentByName(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execResetMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetMaterial_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execPostFEMLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostFEMLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execFEMLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FEMLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execPreFEMLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreFEMLoad_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execUpdateConstraints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateConstraints_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execSetupConstraints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupConstraints_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execSetupRigidBodies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupRigidBodies_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Destroyed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMActor::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	static FName NAME_AFEMActor_FEMLoad = FName(TEXT("FEMLoad"));
	void AFEMActor::FEMLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_FEMLoad),NULL);
	}
	static FName NAME_AFEMActor_PostFEMLoad = FName(TEXT("PostFEMLoad"));
	void AFEMActor::PostFEMLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_PostFEMLoad),NULL);
	}
	static FName NAME_AFEMActor_PreFEMLoad = FName(TEXT("PreFEMLoad"));
	void AFEMActor::PreFEMLoad()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_PreFEMLoad),NULL);
	}
	static FName NAME_AFEMActor_ResetMaterial = FName(TEXT("ResetMaterial"));
	void AFEMActor::ResetMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_ResetMaterial),NULL);
	}
	static FName NAME_AFEMActor_SetupConstraints = FName(TEXT("SetupConstraints"));
	void AFEMActor::SetupConstraints()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_SetupConstraints),NULL);
	}
	static FName NAME_AFEMActor_SetupRigidBodies = FName(TEXT("SetupRigidBodies"));
	void AFEMActor::SetupRigidBodies()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_SetupRigidBodies),NULL);
	}
	static FName NAME_AFEMActor_UpdateConstraints = FName(TEXT("UpdateConstraints"));
	void AFEMActor::UpdateConstraints()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMActor_UpdateConstraints),NULL);
	}
	void AFEMActor::StaticRegisterNativesAFEMActor()
	{
		UClass* Class = AFEMActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AFEMActor::execBeginPlay },
			{ "Destroyed", &AFEMActor::execDestroyed },
			{ "FEMLoad", &AFEMActor::execFEMLoad },
			{ "GetAngleConstraintByIndex", &AFEMActor::execGetAngleConstraintByIndex },
			{ "GetAngleConstraintsByName", &AFEMActor::execGetAngleConstraintsByName },
			{ "GetComponentByName", &AFEMActor::execGetComponentByName },
			{ "GetGlueConstraintByIndex", &AFEMActor::execGetGlueConstraintByIndex },
			{ "GetGlueConstraintsByName", &AFEMActor::execGetGlueConstraintsByName },
			{ "GetPlaneConstraintByIndex", &AFEMActor::execGetPlaneConstraintByIndex },
			{ "GetPlaneConstraintsByName", &AFEMActor::execGetPlaneConstraintsByName },
			{ "PostFEMLoad", &AFEMActor::execPostFEMLoad },
			{ "PreFEMLoad", &AFEMActor::execPreFEMLoad },
			{ "ResetMaterial", &AFEMActor::execResetMaterial },
			{ "SetupConstraints", &AFEMActor::execSetupConstraints },
			{ "SetupRigidBodies", &AFEMActor::execSetupRigidBodies },
			{ "UpdateAngleConstraint", &AFEMActor::execUpdateAngleConstraint },
			{ "UpdateConstraints", &AFEMActor::execUpdateConstraints },
			{ "UpdateGlueConstraint", &AFEMActor::execUpdateGlueConstraint },
			{ "UpdatePlaneConstraint", &AFEMActor::execUpdatePlaneConstraint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFEMActor_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* AActor Interface */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AActor Interface" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_BeginPlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_Destroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_Destroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_Destroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "Destroyed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_Destroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_Destroyed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_Destroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_Destroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_FEMLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_FEMLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_FEMLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "FEMLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_FEMLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_FEMLoad_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_FEMLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_FEMLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics
	{
		struct FEMActor_eventGetAngleConstraintByIndex_Parms
		{
			int32 Index;
			FAngleConstraintInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetAngleConstraintByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetAngleConstraintByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FAngleConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 3392347695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetAngleConstraintByIndex", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::FEMActor_eventGetAngleConstraintByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::FEMActor_eventGetAngleConstraintByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics
	{
		struct FEMActor_eventGetAngleConstraintsByName_Parms
		{
			FString Name;
			TArray<FAngleConstraintInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetAngleConstraintsByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAngleConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 3392347695
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetAngleConstraintsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3392347695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetAngleConstraintsByName", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::FEMActor_eventGetAngleConstraintsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::FEMActor_eventGetAngleConstraintsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics
	{
		struct FEMActor_eventGetComponentByName_Parms
		{
			FString Name;
			UFEMFXMeshComponent* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetComponentByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetComponentByName_Parms, ReturnValue), Z_Construct_UClass_UFEMFXMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetComponentByName", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::FEMActor_eventGetComponentByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::FEMActor_eventGetComponentByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetComponentByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetComponentByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics
	{
		struct FEMActor_eventGetGlueConstraintByIndex_Parms
		{
			int32 Index;
			FGlueConstraintInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetGlueConstraintByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetGlueConstraintByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FGlueConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 4005558588
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetGlueConstraintByIndex", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::FEMActor_eventGetGlueConstraintByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::FEMActor_eventGetGlueConstraintByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics
	{
		struct FEMActor_eventGetGlueConstraintsByName_Parms
		{
			FString Name;
			TArray<FGlueConstraintInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetGlueConstraintsByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGlueConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 4005558588
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetGlueConstraintsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4005558588
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetGlueConstraintsByName", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::FEMActor_eventGetGlueConstraintsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::FEMActor_eventGetGlueConstraintsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics
	{
		struct FEMActor_eventGetPlaneConstraintByIndex_Parms
		{
			int32 Index;
			FPlaneConstraintInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetPlaneConstraintByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetPlaneConstraintByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlaneConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 2160221206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetPlaneConstraintByIndex", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::FEMActor_eventGetPlaneConstraintByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::FEMActor_eventGetPlaneConstraintByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics
	{
		struct FEMActor_eventGetPlaneConstraintsByName_Parms
		{
			FString Name;
			TArray<FPlaneConstraintInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetPlaneConstraintsByName_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlaneConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 2160221206
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventGetPlaneConstraintsByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2160221206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "GetPlaneConstraintsByName", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::FEMActor_eventGetPlaneConstraintsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::FEMActor_eventGetPlaneConstraintsByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "PostFEMLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_PostFEMLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_PostFEMLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "PreFEMLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_PreFEMLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_PreFEMLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "ResetMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_ResetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_ResetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "SetupConstraints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_SetupConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_SetupConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*******/" },
#endif
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "SetupRigidBodies", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_SetupRigidBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_SetupRigidBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics
	{
		struct FEMActor_eventUpdateAngleConstraint_Parms
		{
			FAngleConstraintInfo info;
			bool ShouldDisable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static void NewProp_ShouldDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventUpdateAngleConstraint_Parms, info), Z_Construct_UScriptStruct_FAngleConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 3392347695
	void Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_ShouldDisable_SetBit(void* Obj)
	{
		((FEMActor_eventUpdateAngleConstraint_Parms*)Obj)->ShouldDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_ShouldDisable = { "ShouldDisable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMActor_eventUpdateAngleConstraint_Parms), &Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_ShouldDisable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::NewProp_ShouldDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "UpdateAngleConstraint", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::FEMActor_eventUpdateAngleConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::FEMActor_eventUpdateAngleConstraint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "UpdateConstraints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMActor_UpdateConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_UpdateConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics
	{
		struct FEMActor_eventUpdateGlueConstraint_Parms
		{
			FGlueConstraintInfo info;
			bool ShouldDisable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static void NewProp_ShouldDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventUpdateGlueConstraint_Parms, info), Z_Construct_UScriptStruct_FGlueConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 4005558588
	void Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_ShouldDisable_SetBit(void* Obj)
	{
		((FEMActor_eventUpdateGlueConstraint_Parms*)Obj)->ShouldDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_ShouldDisable = { "ShouldDisable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMActor_eventUpdateGlueConstraint_Parms), &Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_ShouldDisable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::NewProp_ShouldDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "UpdateGlueConstraint", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::FEMActor_eventUpdateGlueConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::FEMActor_eventUpdateGlueConstraint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics
	{
		struct FEMActor_eventUpdatePlaneConstraint_Parms
		{
			FPlaneConstraintInfo info;
			bool ShouldDisable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_info;
		static void NewProp_ShouldDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMActor_eventUpdatePlaneConstraint_Parms, info), Z_Construct_UScriptStruct_FPlaneConstraintInfo, METADATA_PARAMS(0, nullptr) }; // 2160221206
	void Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_ShouldDisable_SetBit(void* Obj)
	{
		((FEMActor_eventUpdatePlaneConstraint_Parms*)Obj)->ShouldDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_ShouldDisable = { "ShouldDisable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMActor_eventUpdatePlaneConstraint_Parms), &Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_ShouldDisable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_info,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::NewProp_ShouldDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMActor, nullptr, "UpdatePlaneConstraint", nullptr, nullptr, Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::FEMActor_eventUpdatePlaneConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::FEMActor_eventUpdatePlaneConstraint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFEMActor);
	UClass* Z_Construct_UClass_AFEMActor_NoRegister()
	{
		return AFEMActor::StaticClass();
	}
	struct Z_Construct_UClass_AFEMActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FEMScene_MetaData[];
#endif
		static void NewProp_bOverride_FEMScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FEMScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SceneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMResource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMResource;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentResources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFEMActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFEMActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFEMActor_BeginPlay, "BeginPlay" }, // 443050991
		{ &Z_Construct_UFunction_AFEMActor_Destroyed, "Destroyed" }, // 899836979
		{ &Z_Construct_UFunction_AFEMActor_FEMLoad, "FEMLoad" }, // 3444509493
		{ &Z_Construct_UFunction_AFEMActor_GetAngleConstraintByIndex, "GetAngleConstraintByIndex" }, // 3422763013
		{ &Z_Construct_UFunction_AFEMActor_GetAngleConstraintsByName, "GetAngleConstraintsByName" }, // 1381085721
		{ &Z_Construct_UFunction_AFEMActor_GetComponentByName, "GetComponentByName" }, // 368513666
		{ &Z_Construct_UFunction_AFEMActor_GetGlueConstraintByIndex, "GetGlueConstraintByIndex" }, // 4119491659
		{ &Z_Construct_UFunction_AFEMActor_GetGlueConstraintsByName, "GetGlueConstraintsByName" }, // 1740144562
		{ &Z_Construct_UFunction_AFEMActor_GetPlaneConstraintByIndex, "GetPlaneConstraintByIndex" }, // 4188299468
		{ &Z_Construct_UFunction_AFEMActor_GetPlaneConstraintsByName, "GetPlaneConstraintsByName" }, // 1340120884
		{ &Z_Construct_UFunction_AFEMActor_PostFEMLoad, "PostFEMLoad" }, // 1764519720
		{ &Z_Construct_UFunction_AFEMActor_PreFEMLoad, "PreFEMLoad" }, // 1855920041
		{ &Z_Construct_UFunction_AFEMActor_ResetMaterial, "ResetMaterial" }, // 1452999499
		{ &Z_Construct_UFunction_AFEMActor_SetupConstraints, "SetupConstraints" }, // 3435185455
		{ &Z_Construct_UFunction_AFEMActor_SetupRigidBodies, "SetupRigidBodies" }, // 3985910193
		{ &Z_Construct_UFunction_AFEMActor_UpdateAngleConstraint, "UpdateAngleConstraint" }, // 3419961689
		{ &Z_Construct_UFunction_AFEMActor_UpdateConstraints, "UpdateConstraints" }, // 2764882152
		{ &Z_Construct_UFunction_AFEMActor_UpdateGlueConstraint, "UpdateGlueConstraint" }, // 1552773960
		{ &Z_Construct_UFunction_AFEMActor_UpdatePlaneConstraint, "UpdatePlaneConstraint" }, // 3636397332
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMActor.h" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* FEM */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FEM" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMActor, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene_MetaData[] = {
		{ "Category", "FEM" },
		{ "InlineEditCoditionToggle", "" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	void Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene_SetBit(void* Obj)
	{
		((AFEMActor*)Obj)->bOverride_FEMScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene = { "bOverride_FEMScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFEMActor), &Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bOverride_FEMScene" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMActor, Scene), Z_Construct_UClass_AFEMFXScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_Scene_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_Scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_SceneName_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bOverride_FEMScene" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_SceneName = { "SceneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMActor, SceneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_SceneName_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_SceneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_FEMResource_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_FEMResource = { "FEMResource", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMActor, FEMResource), Z_Construct_UScriptStruct_FActorResource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_FEMResource_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_FEMResource_MetaData) }; // 1019099657
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources_Inner = { "ComponentResources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentResources, METADATA_PARAMS(0, nullptr) }; // 3468610073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources = { "ComponentResources", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMActor, ComponentResources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources_MetaData), Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources_MetaData) }; // 3468610073
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFEMActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_MeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_bOverride_FEMScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_SceneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_FEMResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMActor_Statics::NewProp_ComponentResources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFEMActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFEMActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFEMActor_Statics::ClassParams = {
		&AFEMActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFEMActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFEMActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFEMActor()
	{
		if (!Z_Registration_Info_UClass_AFEMActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFEMActor.OuterSingleton, Z_Construct_UClass_AFEMActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFEMActor.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<AFEMActor>()
	{
		return AFEMActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFEMActor);
	AFEMActor::~AFEMActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ScriptStructInfo[] = {
		{ FFEMMatrix::StaticStruct, Z_Construct_UScriptStruct_FFEMMatrix_Statics::NewStructOps, TEXT("FEMMatrix"), &Z_Registration_Info_UScriptStruct_FEMMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMMatrix), 1705878728U) },
		{ FAngleConstraintInfo::StaticStruct, Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics::NewStructOps, TEXT("AngleConstraintInfo"), &Z_Registration_Info_UScriptStruct_AngleConstraintInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAngleConstraintInfo), 3392347695U) },
		{ FGlueConstraintInfo::StaticStruct, Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics::NewStructOps, TEXT("GlueConstraintInfo"), &Z_Registration_Info_UScriptStruct_GlueConstraintInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlueConstraintInfo), 4005558588U) },
		{ FPlaneInfo::StaticStruct, Z_Construct_UScriptStruct_FPlaneInfo_Statics::NewStructOps, TEXT("PlaneInfo"), &Z_Registration_Info_UScriptStruct_PlaneInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneInfo), 2630581814U) },
		{ FPlaneConstraintInfo::StaticStruct, Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics::NewStructOps, TEXT("PlaneConstraintInfo"), &Z_Registration_Info_UScriptStruct_PlaneConstraintInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneConstraintInfo), 2160221206U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFEMActor, AFEMActor::StaticClass, TEXT("AFEMActor"), &Z_Registration_Info_UClass_AFEMActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFEMActor), 966462410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_80643165(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
