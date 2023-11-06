// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMFXMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "FEMMeshTypes.h"
#include "FEMResource.h"
#include "TetBlueprintHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMFXMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene_NoRegister();
	FEM_API UClass* Z_Construct_UClass_APreProcessedMeshHelper_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMFXMeshComponent();
	FEM_API UClass* Z_Construct_UClass_UFEMFXMeshComponent_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMMesh_NoRegister();
	FEM_API UFunction* Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature();
	FEM_API UFunction* Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FEMCollision();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFracture();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FNameIndexMap();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetQueryData();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetVertex();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetQueryData;
class UScriptStruct* FTetQueryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetQueryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetQueryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetQueryData, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetQueryData"));
	}
	return Z_Registration_Info_UScriptStruct_TetQueryData.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetQueryData>()
{
	return FTetQueryData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetQueryData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numTets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numTets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_deltas;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tetIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tetIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMeshId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubMeshId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetQueryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetQueryData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_numTets_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_numTets = { "numTets", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetQueryData, numTets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_numTets_MetaData), Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_numTets_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas_Inner = { "deltas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas = { "deltas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetQueryData, deltas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas_MetaData), Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds_Inner = { "tetIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds = { "tetIds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetQueryData, tetIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds_MetaData), Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "FEM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetQueryData, Owner), Z_Construct_UClass_UFEMFXMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_Owner_MetaData), Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_Owner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_SubMeshId_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_SubMeshId = { "SubMeshId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetQueryData, SubMeshId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_SubMeshId_MetaData), Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_SubMeshId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetQueryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_numTets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_deltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_tetIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetQueryData_Statics::NewProp_SubMeshId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetQueryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetQueryData",
		Z_Construct_UScriptStruct_FTetQueryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::PropPointers),
		sizeof(FTetQueryData),
		alignof(FTetQueryData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetQueryData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetQueryData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetQueryData()
	{
		if (!Z_Registration_Info_UScriptStruct_TetQueryData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetQueryData.InnerSingleton, Z_Construct_UScriptStruct_FTetQueryData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetQueryData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EMCollision;
class UScriptStruct* FEMCollision::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EMCollision.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EMCollision.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEMCollision, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("EMCollision"));
	}
	return Z_Registration_Info_UScriptStruct_EMCollision.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FEMCollision>()
{
	return FEMCollision::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEMCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetInfo;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarCentricPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarCentricPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BarCentricPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEMCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEMCollision>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "Category", "FEM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMCollision, OtherComponent), Z_Construct_UClass_UFEMFXMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_OtherComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMCollision, Normal), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Normal_MetaData), Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Normal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMCollision, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_TetInfo_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_TetInfo = { "TetInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMCollision, TetInfo), Z_Construct_UScriptStruct_FTetInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_TetInfo_MetaData), Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_TetInfo_MetaData) }; // 3256456161
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions_Inner = { "BarCentricPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions = { "BarCentricPositions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMCollision, BarCentricPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions_MetaData), Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEMCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_TetInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEMCollision_Statics::NewProp_BarCentricPositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEMCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"EMCollision",
		Z_Construct_UScriptStruct_FEMCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::PropPointers),
		sizeof(FEMCollision),
		alignof(FEMCollision),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEMCollision_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEMCollision_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEMCollision()
	{
		if (!Z_Registration_Info_UScriptStruct_EMCollision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EMCollision.InnerSingleton, Z_Construct_UScriptStruct_FEMCollision_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EMCollision.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics
	{
		struct _Script_FEM_eventOnFEMCollision_Parms
		{
			FEMCollision Collision;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FEM_eventOnFEMCollision_Parms, Collision), Z_Construct_UScriptStruct_FEMCollision, METADATA_PARAMS(0, nullptr) }; // 2775429177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::NewProp_Collision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FEM, nullptr, "OnFEMCollision__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::_Script_FEM_eventOnFEMCollision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::_Script_FEM_eventOnFEMCollision_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFEMCollision_DelegateWrapper(const FMulticastScriptDelegate& OnFEMCollision, FEMCollision Collision)
{
	struct _Script_FEM_eventOnFEMCollision_Parms
	{
		FEMCollision Collision;
	};
	_Script_FEM_eventOnFEMCollision_Parms Parms;
	Parms.Collision=Collision;
	OnFEMCollision.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFracture;
class UScriptStruct* FFEMFracture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFracture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFracture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFracture, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFracture"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFracture.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFracture>()
{
	return FFEMFracture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFracture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubMeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubMeshIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFracture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFracture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFracture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_TetInfo_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_TetInfo = { "TetInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFracture, TetInfo), Z_Construct_UScriptStruct_FTetInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_TetInfo_MetaData), Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_TetInfo_MetaData) }; // 3256456161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_SubMeshIndex_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_SubMeshIndex = { "SubMeshIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFracture, SubMeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_SubMeshIndex_MetaData), Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_SubMeshIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFracture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_TetInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFracture_Statics::NewProp_SubMeshIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFracture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFracture",
		Z_Construct_UScriptStruct_FFEMFracture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFracture_Statics::PropPointers),
		sizeof(FFEMFracture),
		alignof(FFEMFracture),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFracture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFracture_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFracture_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFracture()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFracture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFracture.InnerSingleton, Z_Construct_UScriptStruct_FFEMFracture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFracture.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics
	{
		struct _Script_FEM_eventOnFEMFracture_Parms
		{
			TArray<FFEMFracture> Fracture;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fracture_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fracture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::NewProp_Fracture_Inner = { "Fracture", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFracture, METADATA_PARAMS(0, nullptr) }; // 3448967927
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::NewProp_Fracture = { "Fracture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_FEM_eventOnFEMFracture_Parms, Fracture), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3448967927
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::NewProp_Fracture_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::NewProp_Fracture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FEM, nullptr, "OnFEMFracture__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::_Script_FEM_eventOnFEMFracture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::_Script_FEM_eventOnFEMFracture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnFEMFracture_DelegateWrapper(const FMulticastScriptDelegate& OnFEMFracture, const TArray<FFEMFracture>& Fracture)
{
	struct _Script_FEM_eventOnFEMFracture_Parms
	{
		TArray<FFEMFracture> Fracture;
	};
	_Script_FEM_eventOnFEMFracture_Parms Parms;
	Parms.Fracture=Fracture;
	OnFEMFracture.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execLoadSimObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSimObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execPostEditSceneProxyUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostEditSceneProxyUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execResetFromRestPosition)
	{
		P_GET_STRUCT(FTransform,Z_Param_transform);
		P_GET_STRUCT(FVector,Z_Param_velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetFromRestPosition(Z_Param_transform,Z_Param_velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execOnHit)
	{
		P_GET_STRUCT(FEMCollision,Z_Param_otherComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit_Implementation(Z_Param_otherComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execApplyExplosionForce)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_origin);
		P_GET_PROPERTY(FFloatProperty,Z_Param_shokwavePressure0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_shokwaveArea0);
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timestep);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeSinceDetonation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTetQueryData>*)Z_Param__Result=P_THIS->ApplyExplosionForce(Z_Param_Out_origin,Z_Param_shokwavePressure0,Z_Param_shokwaveArea0,Z_Param_speed,Z_Param_timestep,Z_Param_timeSinceDetonation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execUpdateSceneProxy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSceneProxy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetTetKinematic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TetId);
		P_GET_UBOOL(Z_Param_IsKinematic);
		P_GET_UBOOL(Z_Param_IsRemovable);
		P_GET_STRUCT(FVector,Z_Param_KinematicVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTetKinematic(Z_Param_TetId,Z_Param_IsKinematic,Z_Param_IsRemovable,Z_Param_KinematicVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetTetsByTag)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTetInfo>*)Z_Param__Result=P_THIS->GetTetsByTag(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetTagByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FNameIndexMap*)Z_Param__Result=P_THIS->GetTagByName(Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetTetVertById)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_subTetMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTetVertex*)Z_Param__Result=P_THIS->GetTetVertById(Z_Param_id,Z_Param_subTetMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNameIndexMap>*)Z_Param__Result=P_THIS->GetTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execLoadResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadResource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetTetMaterial)
	{
		P_GET_OBJECT(UFEMFXTetMeshParameters,Z_Param_newParameters);
		P_GET_PROPERTY(FIntProperty,Z_Param_TetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTetMaterial(Z_Param_newParameters,Z_Param_TetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetTetMaterial_NoFracture)
	{
		P_GET_OBJECT(UFEMFXTetMeshParameters,Z_Param_newParameters);
		P_GET_PROPERTY(FIntProperty,Z_Param_TetId);
		P_GET_PROPERTY(FIntProperty,Z_Param_NoFractureFaces);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTetMaterial_NoFracture(Z_Param_newParameters,Z_Param_TetId,Z_Param_NoFractureFaces);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetTetMeshMaterial)
	{
		P_GET_OBJECT(UFEMFXTetMeshParameters,Z_Param_newParameters);
		P_GET_PROPERTY(FFloatProperty,Z_Param_plasticAttenuation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTetMeshMaterial(Z_Param_newParameters,Z_Param_plasticAttenuation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetDestructionValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDestructionValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetTetMeshCenterOfMass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_subMeshIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector3f*)Z_Param__Result=P_THIS->GetTetMeshCenterOfMass(Z_Param_subMeshIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execGetVertPositionByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_PROPERTY(FIntProperty,Z_Param_subMeshIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector3f*)Z_Param__Result=P_THIS->GetVertPositionByIndex(Z_Param_index,Z_Param_subMeshIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execUpdateMeshSectionIndices)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(int32,Z_Param_Out_AddedIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSectionIndices(Z_Param_SectionIndex,Z_Param_Out_AddedIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execUpdateMeshSectionVertexBaryPositions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FFEMFXMeshBarycentricPos,Z_Param_Out_VertexBaryPositions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSectionVertexBaryPositions(Z_Param_SectionIndex,Z_Param_Out_VertexBaryPositions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execUpdateMeshSectionVertexBaryPosIds)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(int32,Z_Param_Out_VertexBaryPosIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSectionVertexBaryPosIds(Z_Param_SectionIndex,Z_Param_Out_VertexBaryPosIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execTetMeshRadialQuery)
	{
		P_GET_STRUCT(FVector,Z_Param_Pos);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTetQueryData>*)Z_Param__Result=P_THIS->TetMeshRadialQuery(Z_Param_Pos,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execReset)
	{
		P_GET_STRUCT(FTransform,Z_Param_startTrans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_startTrans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execSetTetMeshPositionAndRotation)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTetMeshPositionAndRotation(Z_Param_position,Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execCreateFEMMeshFromTetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateFEMMeshFromTetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFEMFXMeshComponent::execOnComponentDestroyed)
	{
		P_GET_UBOOL(Z_Param_bDestroyingHierarchy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentDestroyed(Z_Param_bDestroyingHierarchy);
		P_NATIVE_END;
	}
	struct FEMFXMeshComponent_eventOnHit_Parms
	{
		FEMCollision otherComponent;
	};
	static FName NAME_UFEMFXMeshComponent_OnHit = FName(TEXT("OnHit"));
	void UFEMFXMeshComponent::OnHit(FEMCollision otherComponent)
	{
		FEMFXMeshComponent_eventOnHit_Parms Parms;
		Parms.otherComponent=otherComponent;
		ProcessEvent(FindFunctionChecked(NAME_UFEMFXMeshComponent_OnHit),&Parms);
	}
	void UFEMFXMeshComponent::StaticRegisterNativesUFEMFXMeshComponent()
	{
		UClass* Class = UFEMFXMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyExplosionForce", &UFEMFXMeshComponent::execApplyExplosionForce },
			{ "BeginPlay", &UFEMFXMeshComponent::execBeginPlay },
			{ "CreateFEMMeshFromTetMesh", &UFEMFXMeshComponent::execCreateFEMMeshFromTetMesh },
			{ "GetDestructionValue", &UFEMFXMeshComponent::execGetDestructionValue },
			{ "GetTagByName", &UFEMFXMeshComponent::execGetTagByName },
			{ "GetTags", &UFEMFXMeshComponent::execGetTags },
			{ "GetTetMeshCenterOfMass", &UFEMFXMeshComponent::execGetTetMeshCenterOfMass },
			{ "GetTetsByTag", &UFEMFXMeshComponent::execGetTetsByTag },
			{ "GetTetVertById", &UFEMFXMeshComponent::execGetTetVertById },
			{ "GetVertPositionByIndex", &UFEMFXMeshComponent::execGetVertPositionByIndex },
			{ "LoadResource", &UFEMFXMeshComponent::execLoadResource },
			{ "LoadSimObject", &UFEMFXMeshComponent::execLoadSimObject },
			{ "OnComponentDestroyed", &UFEMFXMeshComponent::execOnComponentDestroyed },
			{ "OnHit", &UFEMFXMeshComponent::execOnHit },
			{ "PostEditSceneProxyUpdate", &UFEMFXMeshComponent::execPostEditSceneProxyUpdate },
			{ "Reset", &UFEMFXMeshComponent::execReset },
			{ "ResetFromRestPosition", &UFEMFXMeshComponent::execResetFromRestPosition },
			{ "SetMeshSectionVisible", &UFEMFXMeshComponent::execSetMeshSectionVisible },
			{ "SetTetKinematic", &UFEMFXMeshComponent::execSetTetKinematic },
			{ "SetTetMaterial", &UFEMFXMeshComponent::execSetTetMaterial },
			{ "SetTetMaterial_NoFracture", &UFEMFXMeshComponent::execSetTetMaterial_NoFracture },
			{ "SetTetMeshMaterial", &UFEMFXMeshComponent::execSetTetMeshMaterial },
			{ "SetTetMeshPositionAndRotation", &UFEMFXMeshComponent::execSetTetMeshPositionAndRotation },
			{ "TetMeshRadialQuery", &UFEMFXMeshComponent::execTetMeshRadialQuery },
			{ "UpdateMeshSectionIndices", &UFEMFXMeshComponent::execUpdateMeshSectionIndices },
			{ "UpdateMeshSectionVertexBaryPosIds", &UFEMFXMeshComponent::execUpdateMeshSectionVertexBaryPosIds },
			{ "UpdateMeshSectionVertexBaryPositions", &UFEMFXMeshComponent::execUpdateMeshSectionVertexBaryPositions },
			{ "UpdateSceneProxy", &UFEMFXMeshComponent::execUpdateSceneProxy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics
	{
		struct FEMFXMeshComponent_eventApplyExplosionForce_Parms
		{
			FVector origin;
			float shokwavePressure0;
			float shokwaveArea0;
			float speed;
			float timestep;
			float timeSinceDetonation;
			TArray<FTetQueryData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_shokwavePressure0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_shokwaveArea0;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timestep;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeSinceDetonation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_origin_MetaData), Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_origin_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_shokwavePressure0 = { "shokwavePressure0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, shokwavePressure0), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_shokwaveArea0 = { "shokwaveArea0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, shokwaveArea0), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, speed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_timestep = { "timestep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, timestep), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_timeSinceDetonation = { "timeSinceDetonation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, timeSinceDetonation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTetQueryData, METADATA_PARAMS(0, nullptr) }; // 696650347
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventApplyExplosionForce_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 696650347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_shokwavePressure0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_shokwaveArea0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_timestep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_timeSinceDetonation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "ApplyExplosionForce", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::FEMFXMeshComponent_eventApplyExplosionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::FEMFXMeshComponent_eventApplyExplosionForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "CreateFEMMeshFromTetMesh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics
	{
		struct FEMFXMeshComponent_eventGetDestructionValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetDestructionValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetDestructionValue", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::FEMFXMeshComponent_eventGetDestructionValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::FEMFXMeshComponent_eventGetDestructionValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics
	{
		struct FEMFXMeshComponent_eventGetTagByName_Parms
		{
			FString TagName;
			FNameIndexMap ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTagByName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTagByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FNameIndexMap, METADATA_PARAMS(0, nullptr) }; // 3758901245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::NewProp_TagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetTagByName", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::FEMFXMeshComponent_eventGetTagByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::FEMFXMeshComponent_eventGetTagByName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics
	{
		struct FEMFXMeshComponent_eventGetTags_Parms
		{
			TArray<FNameIndexMap> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNameIndexMap, METADATA_PARAMS(0, nullptr) }; // 3758901245
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3758901245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetTags", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::FEMFXMeshComponent_eventGetTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::FEMFXMeshComponent_eventGetTags_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics
	{
		struct FEMFXMeshComponent_eventGetTetMeshCenterOfMass_Parms
		{
			int32 subMeshIndex;
			FVector3f ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_subMeshIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::NewProp_subMeshIndex = { "subMeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetMeshCenterOfMass_Parms, subMeshIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetMeshCenterOfMass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::NewProp_subMeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetTetMeshCenterOfMass", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::FEMFXMeshComponent_eventGetTetMeshCenterOfMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::FEMFXMeshComponent_eventGetTetMeshCenterOfMass_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics
	{
		struct FEMFXMeshComponent_eventGetTetsByTag_Parms
		{
			FString tag;
			TArray<FTetInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_tag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetsByTag_Parms, tag), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTetInfo, METADATA_PARAMS(0, nullptr) }; // 3256456161
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetsByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3256456161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetTetsByTag", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::FEMFXMeshComponent_eventGetTetsByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::FEMFXMeshComponent_eventGetTetsByTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics
	{
		struct FEMFXMeshComponent_eventGetTetVertById_Parms
		{
			int32 id;
			int32 subTetMesh;
			FTetVertex ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FIntPropertyParams NewProp_subTetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetVertById_Parms, id), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_subTetMesh = { "subTetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetVertById_Parms, subTetMesh), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetTetVertById_Parms, ReturnValue), Z_Construct_UScriptStruct_FTetVertex, METADATA_PARAMS(0, nullptr) }; // 3173397596
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_subTetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetTetVertById", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::FEMFXMeshComponent_eventGetTetVertById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::FEMFXMeshComponent_eventGetTetVertById_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics
	{
		struct FEMFXMeshComponent_eventGetVertPositionByIndex_Parms
		{
			int32 index;
			int32 subMeshIndex;
			FVector3f ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_subMeshIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetVertPositionByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_subMeshIndex = { "subMeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetVertPositionByIndex_Parms, subMeshIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventGetVertPositionByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_subMeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "GetVertPositionByIndex", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::FEMFXMeshComponent_eventGetVertPositionByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::FEMFXMeshComponent_eventGetVertPositionByIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "LoadResource", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "LoadSimObject", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics
	{
		struct FEMFXMeshComponent_eventOnComponentDestroyed_Parms
		{
			bool bDestroyingHierarchy;
		};
		static void NewProp_bDestroyingHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyingHierarchy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::NewProp_bDestroyingHierarchy_SetBit(void* Obj)
	{
		((FEMFXMeshComponent_eventOnComponentDestroyed_Parms*)Obj)->bDestroyingHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::NewProp_bDestroyingHierarchy = { "bDestroyingHierarchy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXMeshComponent_eventOnComponentDestroyed_Parms), &Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::NewProp_bDestroyingHierarchy_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::NewProp_bDestroyingHierarchy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "OnComponentDestroyed", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::FEMFXMeshComponent_eventOnComponentDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::FEMFXMeshComponent_eventOnComponentDestroyed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_otherComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::NewProp_otherComponent = { "otherComponent", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventOnHit_Parms, otherComponent), Z_Construct_UScriptStruct_FEMCollision, METADATA_PARAMS(0, nullptr) }; // 2775429177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::NewProp_otherComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::PropPointers), sizeof(FEMFXMeshComponent_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(FEMFXMeshComponent_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "PostEditSceneProxyUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics
	{
		struct FEMFXMeshComponent_eventReset_Parms
		{
			FTransform startTrans;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_startTrans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::NewProp_startTrans = { "startTrans", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventReset_Parms, startTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::NewProp_startTrans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "Reset", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::FEMFXMeshComponent_eventReset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::FEMFXMeshComponent_eventReset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics
	{
		struct FEMFXMeshComponent_eventResetFromRestPosition_Parms
		{
			FTransform transform;
			FVector velocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventResetFromRestPosition_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventResetFromRestPosition_Parms, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::NewProp_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::NewProp_velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "ResetFromRestPosition", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::FEMFXMeshComponent_eventResetFromRestPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::FEMFXMeshComponent_eventResetFromRestPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics
	{
		struct FEMFXMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((FEMFXMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|FEMFXMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control visibility of a particular section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control visibility of a particular section" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::FEMFXMeshComponent_eventSetMeshSectionVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::FEMFXMeshComponent_eventSetMeshSectionVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics
	{
		struct FEMFXMeshComponent_eventSetTetKinematic_Parms
		{
			int32 TetId;
			bool IsKinematic;
			bool IsRemovable;
			FVector KinematicVelocity;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetId;
		static void NewProp_IsKinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsKinematic;
		static void NewProp_IsRemovable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRemovable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_TetId = { "TetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetKinematic_Parms, TetId), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsKinematic_SetBit(void* Obj)
	{
		((FEMFXMeshComponent_eventSetTetKinematic_Parms*)Obj)->IsKinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsKinematic = { "IsKinematic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXMeshComponent_eventSetTetKinematic_Parms), &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsKinematic_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsRemovable_SetBit(void* Obj)
	{
		((FEMFXMeshComponent_eventSetTetKinematic_Parms*)Obj)->IsRemovable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsRemovable = { "IsRemovable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXMeshComponent_eventSetTetKinematic_Parms), &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsRemovable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_KinematicVelocity = { "KinematicVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetKinematic_Parms, KinematicVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_TetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsKinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_IsRemovable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::NewProp_KinematicVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetTetKinematic", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::FEMFXMeshComponent_eventSetTetKinematic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::FEMFXMeshComponent_eventSetTetKinematic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics
	{
		struct FEMFXMeshComponent_eventSetTetMaterial_Parms
		{
			UFEMFXTetMeshParameters* newParameters;
			int32 TetId;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newParameters;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::NewProp_newParameters = { "newParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMaterial_Parms, newParameters), Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::NewProp_TetId = { "TetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMaterial_Parms, TetId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::NewProp_newParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::NewProp_TetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetTetMaterial", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::FEMFXMeshComponent_eventSetTetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::FEMFXMeshComponent_eventSetTetMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics
	{
		struct FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms
		{
			UFEMFXTetMeshParameters* newParameters;
			int32 TetId;
			int32 NoFractureFaces;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newParameters;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NoFractureFaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_newParameters = { "newParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms, newParameters), Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_TetId = { "TetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms, TetId), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_NoFractureFaces = { "NoFractureFaces", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms, NoFractureFaces), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_newParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_TetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::NewProp_NoFractureFaces,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetTetMaterial_NoFracture", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::FEMFXMeshComponent_eventSetTetMaterial_NoFracture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics
	{
		struct FEMFXMeshComponent_eventSetTetMeshMaterial_Parms
		{
			UFEMFXTetMeshParameters* newParameters;
			float plasticAttenuation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_newParameters;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_plasticAttenuation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::NewProp_newParameters = { "newParameters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMeshMaterial_Parms, newParameters), Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::NewProp_plasticAttenuation = { "plasticAttenuation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMeshMaterial_Parms, plasticAttenuation), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::NewProp_newParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::NewProp_plasticAttenuation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "CPP_Default_plasticAttenuation", "1.000000" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetTetMeshMaterial", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::FEMFXMeshComponent_eventSetTetMeshMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::FEMFXMeshComponent_eventSetTetMeshMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics
	{
		struct FEMFXMeshComponent_eventSetTetMeshPositionAndRotation_Parms
		{
			FVector position;
			FRotator rotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMeshPositionAndRotation_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventSetTetMeshPositionAndRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "SetTetMeshPositionAndRotation", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::FEMFXMeshComponent_eventSetTetMeshPositionAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::FEMFXMeshComponent_eventSetTetMeshPositionAndRotation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics
	{
		struct FEMFXMeshComponent_eventTetMeshRadialQuery_Parms
		{
			FVector Pos;
			FVector Direction;
			float Radius;
			TArray<FTetQueryData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventTetMeshRadialQuery_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventTetMeshRadialQuery_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventTetMeshRadialQuery_Parms, Radius), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTetQueryData, METADATA_PARAMS(0, nullptr) }; // 696650347
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventTetMeshRadialQuery_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 696650347
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//virtual FPrimitiveSceneProxy* CreateSceneProxy() override;\n//~ End UPrimitiveComponent Interface\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "virtual FPrimitiveSceneProxy* CreateSceneProxy() override;" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "TetMeshRadialQuery", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::FEMFXMeshComponent_eventTetMeshRadialQuery_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::FEMFXMeshComponent_eventTetMeshRadialQuery_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics
	{
		struct FEMFXMeshComponent_eventUpdateMeshSectionIndices_Parms
		{
			int32 SectionIndex;
			TArray<int32> AddedIndices;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AddedIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionIndices_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices_Inner = { "AddedIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices = { "AddedIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionIndices_Parms, AddedIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices_MetaData), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::NewProp_AddedIndices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|FEMFXMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "UpdateMeshSectionIndices", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::FEMFXMeshComponent_eventUpdateMeshSectionIndices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::FEMFXMeshComponent_eventUpdateMeshSectionIndices_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics
	{
		struct FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPosIds_Parms
		{
			int32 SectionIndex;
			TArray<int32> VertexBaryPosIds;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexBaryPosIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexBaryPosIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBaryPosIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPosIds_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds_Inner = { "VertexBaryPosIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds = { "VertexBaryPosIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPosIds_Parms, VertexBaryPosIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds_MetaData), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::NewProp_VertexBaryPosIds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|FEMFXMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "UpdateMeshSectionVertexBaryPosIds", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPosIds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPosIds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics
	{
		struct FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPositions_Parms
		{
			int32 SectionIndex;
			TArray<FFEMFXMeshBarycentricPos> VertexBaryPositions;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBaryPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexBaryPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBaryPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPositions_Parms, SectionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions_Inner = { "VertexBaryPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos, METADATA_PARAMS(0, nullptr) }; // 3922102246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions = { "VertexBaryPositions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPositions_Parms, VertexBaryPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions_MetaData), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions_MetaData) }; // 3922102246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::NewProp_VertexBaryPositions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|FEMFXMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "UpdateMeshSectionVertexBaryPositions", nullptr, nullptr, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPositions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::FEMFXMeshComponent_eventUpdateMeshSectionVertexBaryPositions_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMFXMeshComponent, nullptr, "UpdateSceneProxy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMFXMeshComponent);
	UClass* Z_Construct_UClass_UFEMFXMeshComponent_NoRegister()
	{
		return UFEMFXMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFEMFXMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_staticMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_staticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_staticMeshes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnly_MetaData[];
#endif
		static void NewProp_EditorOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EditorOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FEMMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshHelper_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshHelper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_CollisionEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_FractureEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MeshParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepMaxSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepMaxSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepAvgSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SleepAvgSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SleepStableCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SleepStableCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveKinematicVertexStressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemoveKinematicVertexStressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kinematic_MetaData[];
#endif
		static void NewProp_Kinematic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Kinematic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlasticityEnabled_MetaData[];
#endif
		static void NewProp_PlasticityEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlasticityEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractureEnabled_MetaData[];
#endif
		static void NewProp_FractureEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FractureEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddToSimulation_MetaData[];
#endif
		static void NewProp_AddToSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddToSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDebugAsRenderMesh_MetaData[];
#endif
		static void NewProp_bUseDebugAsRenderMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDebugAsRenderMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMFXMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFEMFXMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_ApplyExplosionForce, "ApplyExplosionForce" }, // 1502844221
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_BeginPlay, "BeginPlay" }, // 3671386478
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_CreateFEMMeshFromTetMesh, "CreateFEMMeshFromTetMesh" }, // 2359501389
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetDestructionValue, "GetDestructionValue" }, // 790249009
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetTagByName, "GetTagByName" }, // 2978577940
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetTags, "GetTags" }, // 3524150656
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetTetMeshCenterOfMass, "GetTetMeshCenterOfMass" }, // 2181386775
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetTetsByTag, "GetTetsByTag" }, // 605454267
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetTetVertById, "GetTetVertById" }, // 105207782
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_GetVertPositionByIndex, "GetVertPositionByIndex" }, // 39743567
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_LoadResource, "LoadResource" }, // 804861752
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_LoadSimObject, "LoadSimObject" }, // 1260267129
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_OnComponentDestroyed, "OnComponentDestroyed" }, // 284250438
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_OnHit, "OnHit" }, // 2064867586
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_PostEditSceneProxyUpdate, "PostEditSceneProxyUpdate" }, // 2748260219
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_Reset, "Reset" }, // 1731314835
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_ResetFromRestPosition, "ResetFromRestPosition" }, // 899772596
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 2707772872
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetKinematic, "SetTetKinematic" }, // 2268897213
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial, "SetTetMaterial" }, // 29618156
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMaterial_NoFracture, "SetTetMaterial_NoFracture" }, // 1454993890
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshMaterial, "SetTetMeshMaterial" }, // 2225716583
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_SetTetMeshPositionAndRotation, "SetTetMeshPositionAndRotation" }, // 2705295171
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_TetMeshRadialQuery, "TetMeshRadialQuery" }, // 2386088418
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionIndices, "UpdateMeshSectionIndices" }, // 1445330378
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPosIds, "UpdateMeshSectionVertexBaryPosIds" }, // 3414848167
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_UpdateMeshSectionVertexBaryPositions, "UpdateMeshSectionVertexBaryPositions" }, // 191835663
		{ &Z_Construct_UFunction_UFEMFXMeshComponent_UpdateSceneProxy, "UpdateSceneProxy" }, // 3951756524
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry\n*\x09""Beware! This feature is experimental and may be substantially changed in future releases.\n*/" },
#endif
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "FEMFXMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry\nBeware! This feature is experimental and may be substantially changed in future releases." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes_Inner = { "staticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes_MetaData[] = {
		{ "Category", "FEMMesh" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes = { "staticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, staticMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials_Inner = { "RenderMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials_MetaData[] = {
		{ "Category", "FEMMesh" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials = { "RenderMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, RenderMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\n    *\x09Should be set to false if this component is going to be given simple collision and simulated.\n    */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
#endif
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->EditorOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly = { "EditorOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FEMMesh_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FEMMesh = { "FEMMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, FEMMesh), Z_Construct_UClass_UFEMMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FEMMesh_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FEMMesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(0, nullptr) }; // 2868450482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convex shapes used for simple collision */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convex shapes used for simple collision" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData) }; // 2868450482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local space bounds of mesh */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local space bounds of mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_LocalBounds_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_LocalBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is important that you use the same name across all FEMMeshComponents that share mesh render.\n// This will be used as the key in the map of PreProcessedMeshes in FEMSceneManager\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is important that you use the same name across all FEMMeshComponents that share mesh render.\nThis will be used as the key in the map of PreProcessedMeshes in FEMSceneManager" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshHelper_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshHelper = { "MeshHelper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, MeshHelper), Z_Construct_UClass_APreProcessedMeshHelper_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshHelper_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshHelper_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionEvent_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionEvent = { "CollisionEvent", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, CollisionEvent), Z_Construct_UDelegateFunction_FEM_OnFEMCollision__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionEvent_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionEvent_MetaData) }; // 4160973391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEvent_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEvent = { "FractureEvent", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, FractureEvent), Z_Construct_UDelegateFunction_FEM_OnFEMFracture__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEvent_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEvent_MetaData) }; // 2800142045
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_ValueProp = { "MeshParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UFEMFXTetMeshParameters_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_Key_KeyProp = { "MeshParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters = { "MeshParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, MeshParameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Mass_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, CollisionGroup), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionGroup_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepMaxSpeedThreshold_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepMaxSpeedThreshold = { "SleepMaxSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, SleepMaxSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepMaxSpeedThreshold_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepMaxSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepAvgSpeedThreshold_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max speed must be under this threshold for sleeping \n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max speed must be under this threshold for sleeping" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepAvgSpeedThreshold = { "SleepAvgSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, SleepAvgSpeedThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepAvgSpeedThreshold_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepAvgSpeedThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepStableCount_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Average speed must be under this threshold for sleeping\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Average speed must be under this threshold for sleeping" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepStableCount = { "SleepStableCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, SleepStableCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepStableCount_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepStableCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RemoveKinematicVertexStressThreshold_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Number of steps that speeds must fall under thresholds to initiate sleeping\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of steps that speeds must fall under thresholds to initiate sleeping" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RemoveKinematicVertexStressThreshold = { "RemoveKinematicVertexStressThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, RemoveKinematicVertexStressThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RemoveKinematicVertexStressThreshold_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RemoveKinematicVertexStressThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, Scene), Z_Construct_UClass_AFEMFXScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Scene_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->Kinematic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic = { "Kinematic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->PlasticityEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled = { "PlasticityEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->FractureEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled = { "FractureEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->AddToSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation = { "AddToSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh_SetBit(void* Obj)
	{
		((UFEMFXMeshComponent*)Obj)->bUseDebugAsRenderMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh = { "bUseDebugAsRenderMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMFXMeshComponent), &Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMFXMeshComponent, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_InitialTransform_MetaData), Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_InitialTransform_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMFXMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_staticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RenderMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_EditorOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FEMMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionConvexElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshHelper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_MeshParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_CollisionGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepMaxSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepAvgSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_SleepStableCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_RemoveKinematicVertexStressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_Kinematic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_PlasticityEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_FractureEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_AddToSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_bUseDebugAsRenderMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMFXMeshComponent_Statics::NewProp_InitialTransform,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UFEMFXMeshComponent, IInterface_CollisionDataProvider), false },  // 1511234675
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMFXMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMFXMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMFXMeshComponent_Statics::ClassParams = {
		&UFEMFXMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFEMFXMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMFXMeshComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMFXMeshComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMFXMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UFEMFXMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMFXMeshComponent.OuterSingleton, Z_Construct_UClass_UFEMFXMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMFXMeshComponent.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMFXMeshComponent>()
	{
		return UFEMFXMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMFXMeshComponent);
	UFEMFXMeshComponent::~UFEMFXMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FTetQueryData::StaticStruct, Z_Construct_UScriptStruct_FTetQueryData_Statics::NewStructOps, TEXT("TetQueryData"), &Z_Registration_Info_UScriptStruct_TetQueryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetQueryData), 696650347U) },
		{ FEMCollision::StaticStruct, Z_Construct_UScriptStruct_FEMCollision_Statics::NewStructOps, TEXT("EMCollision"), &Z_Registration_Info_UScriptStruct_EMCollision, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEMCollision), 2775429177U) },
		{ FFEMFracture::StaticStruct, Z_Construct_UScriptStruct_FFEMFracture_Statics::NewStructOps, TEXT("FEMFracture"), &Z_Registration_Info_UScriptStruct_FEMFracture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFracture), 3448967927U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMFXMeshComponent, UFEMFXMeshComponent::StaticClass, TEXT("UFEMFXMeshComponent"), &Z_Registration_Info_UClass_UFEMFXMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMFXMeshComponent), 3846077555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_1226023778(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
