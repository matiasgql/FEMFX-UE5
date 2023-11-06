// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMResource() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	FEM_API UClass* Z_Construct_UClass_UFEMResource();
	FEM_API UClass* Z_Construct_UClass_UFEMResource_NoRegister();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FActorResource();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FAngleConstraint();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FBVSizes();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FComponent();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FComponentResources();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FEleResource();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMPlane();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FGlueConstraint();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialTetAssignment();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSection();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FNameIndexMap();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FNodeResource();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FRigidBody();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTet();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetIdxToMaterial();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetMeshBufferInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetVertIds();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tet;
class UScriptStruct* FTet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTet, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("Tet"));
	}
	return Z_Registration_Info_UScriptStruct_Tet.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTet>()
{
	return FTet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indicies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indicies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indicies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTet_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class is going to mimick the .fem file structure\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class is going to mimick the .fem file structure" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTet_Statics::NewProp_TetIndex_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTet_Statics::NewProp_TetIndex = { "TetIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTet, TetIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTet_Statics::NewProp_TetIndex_MetaData), Z_Construct_UScriptStruct_FTet_Statics::NewProp_TetIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies_Inner = { "Indicies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies = { "Indicies", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTet, Indicies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies_MetaData), Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTet_Statics::NewProp_TetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTet_Statics::NewProp_Indicies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"Tet",
		Z_Construct_UScriptStruct_FTet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTet_Statics::PropPointers),
		sizeof(FTet),
		alignof(FTet),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTet_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTet_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTet()
	{
		if (!Z_Registration_Info_UScriptStruct_Tet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tet.InnerSingleton, Z_Construct_UScriptStruct_FTet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Tet.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeResource;
class UScriptStruct* FNodeResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeResource, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("NodeResource"));
	}
	return Z_Registration_Info_UScriptStruct_NodeResource.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FNodeResource>()
{
	return FNodeResource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsBoundaryMarker_MetaData[];
#endif
		static void NewProp_IsBoundaryMarker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBoundaryMarker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeResource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeResource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker_SetBit(void* Obj)
	{
		((FNodeResource*)Obj)->IsBoundaryMarker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker = { "IsBoundaryMarker", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNodeResource), &Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker_MetaData), Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumAttributes_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeResource, NumAttributes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumAttributes_MetaData), Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumAttributes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumDimensions_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumDimensions = { "NumDimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeResource, NumDimensions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumDimensions_MetaData), Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumDimensions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumPoints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeResource, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumPoints_MetaData), Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumPoints_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNodeResource, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_IsBoundaryMarker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeResource_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeResource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"NodeResource",
		Z_Construct_UScriptStruct_FNodeResource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::PropPointers),
		sizeof(FNodeResource),
		alignof(FNodeResource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNodeResource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeResource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNodeResource()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeResource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeResource.InnerSingleton, Z_Construct_UScriptStruct_FNodeResource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeResource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EleResource;
class UScriptStruct* FEleResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EleResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EleResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEleResource, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("EleResource"));
	}
	return Z_Registration_Info_UScriptStruct_EleResource.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FEleResource>()
{
	return FEleResource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEleResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRegionAttribute_MetaData[];
#endif
		static void NewProp_IsRegionAttribute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRegionAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumNodesPerTets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumNodesPerTets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTetrahedra_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTetrahedra;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEleResource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEleResource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEleResource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute_SetBit(void* Obj)
	{
		((FEleResource*)Obj)->IsRegionAttribute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute = { "IsRegionAttribute", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEleResource), &Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute_MetaData), Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumNodesPerTets_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumNodesPerTets = { "NumNodesPerTets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEleResource, NumNodesPerTets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumNodesPerTets_MetaData), Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumNodesPerTets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumTetrahedra_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumTetrahedra = { "NumTetrahedra", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEleResource, NumTetrahedra), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumTetrahedra_MetaData), Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumTetrahedra_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTet, METADATA_PARAMS(0, nullptr) }; // 2881059600
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEleResource, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data_MetaData) }; // 2881059600
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEleResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_IsRegionAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumNodesPerTets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_NumTetrahedra,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEleResource_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEleResource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"EleResource",
		Z_Construct_UScriptStruct_FEleResource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::PropPointers),
		sizeof(FEleResource),
		alignof(FEleResource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEleResource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEleResource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FEleResource()
	{
		if (!Z_Registration_Info_UScriptStruct_EleResource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EleResource.InnerSingleton, Z_Construct_UScriptStruct_FEleResource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EleResource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialTetAssignment;
class UScriptStruct* FMaterialTetAssignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialTetAssignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialTetAssignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialTetAssignment, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("MaterialTetAssignment"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialTetAssignment.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FMaterialTetAssignment>()
{
	return FMaterialTetAssignment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TetIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TetIds;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NoFractureFaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoFractureFaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoFractureFaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialTetAssignment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTetAssignment, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds_Inner = { "TetIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds = { "TetIds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTetAssignment, TetIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds_MetaData), Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces_Inner = { "NoFractureFaces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces = { "NoFractureFaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialTetAssignment, NoFractureFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces_MetaData), Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_TetIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewProp_NoFractureFaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"MaterialTetAssignment",
		Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::PropPointers),
		sizeof(FMaterialTetAssignment),
		alignof(FMaterialTetAssignment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialTetAssignment()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialTetAssignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialTetAssignment.InnerSingleton, Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialTetAssignment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameIndexMap;
class UScriptStruct* FNameIndexMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameIndexMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameIndexMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameIndexMap, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("NameIndexMap"));
	}
	return Z_Registration_Info_UScriptStruct_NameIndexMap.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FNameIndexMap>()
{
	return FNameIndexMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNameIndexMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TetIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TetIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameIndexMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameIndexMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameIndexMap, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds_Inner = { "TetIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds = { "TetIds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNameIndexMap, TetIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds_MetaData), Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNameIndexMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewProp_TetIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameIndexMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"NameIndexMap",
		Z_Construct_UScriptStruct_FNameIndexMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameIndexMap_Statics::PropPointers),
		sizeof(FNameIndexMap),
		alignof(FNameIndexMap),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameIndexMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNameIndexMap_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameIndexMap_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNameIndexMap()
	{
		if (!Z_Registration_Info_UScriptStruct_NameIndexMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameIndexMap.InnerSingleton, Z_Construct_UScriptStruct_FNameIndexMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NameIndexMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigidBody;
class UScriptStruct* FRigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigidBody, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("RigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_RigidBody.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FRigidBody>()
{
	return FRigidBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigidBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyInertiaTensor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInertiaTensor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BodyInertiaTensor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigidBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigidBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Dimensions_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Dimensions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, Rotation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_mass_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_mass_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor_Inner = { "BodyInertiaTensor", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor = { "BodyInertiaTensor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigidBody, BodyInertiaTensor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor_MetaData), Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigidBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigidBody_Statics::NewProp_BodyInertiaTensor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigidBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"RigidBody",
		Z_Construct_UScriptStruct_FRigidBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::PropPointers),
		sizeof(FRigidBody),
		alignof(FRigidBody),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigidBody_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigidBody_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRigidBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RigidBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigidBody.InnerSingleton, Z_Construct_UScriptStruct_FRigidBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigidBody.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AngleConstraint;
class UScriptStruct* FAngleConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AngleConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AngleConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAngleConstraint, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("AngleConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_AngleConstraint.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FAngleConstraint>()
{
	return FAngleConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAngleConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyA_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisBodySpaceA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisBodySpaceA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisBodySpaceB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisBodySpaceB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAngleConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyA = { "BodyA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraint, BodyA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyA_MetaData), Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyB = { "BodyB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraint, BodyB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyB_MetaData), Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceA = { "AxisBodySpaceA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraint, AxisBodySpaceA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceA_MetaData), Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceB = { "AxisBodySpaceB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAngleConstraint, AxisBodySpaceB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceB_MetaData), Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAngleConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_BodyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewProp_AxisBodySpaceB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAngleConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"AngleConstraint",
		Z_Construct_UScriptStruct_FAngleConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::PropPointers),
		sizeof(FAngleConstraint),
		alignof(FAngleConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAngleConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAngleConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAngleConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_AngleConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AngleConstraint.InnerSingleton, Z_Construct_UScriptStruct_FAngleConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AngleConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlueConstraint;
class UScriptStruct* FGlueConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlueConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlueConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlueConstraint, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("GlueConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_GlueConstraint.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FGlueConstraint>()
{
	return FGlueConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGlueConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyA_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRigidBodyA_MetaData[];
#endif
		static void NewProp_IsRigidBodyA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRigidBodyA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_BodyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRigidBodyB_MetaData[];
#endif
		static void NewProp_IsRigidBodyB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRigidBodyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBodySpaceA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosBodySpaceA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosBodySpaceB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosBodySpaceB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetIdA_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TetIdA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetIdB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TetIdB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinGlueConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MinGlueConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlueConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyA = { "BodyA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, BodyA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyA_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA_SetBit(void* Obj)
	{
		((FGlueConstraint*)Obj)->IsRigidBodyA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA = { "IsRigidBodyA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGlueConstraint), &Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyB = { "BodyB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, BodyB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyB_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB_SetBit(void* Obj)
	{
		((FGlueConstraint*)Obj)->IsRigidBodyB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB = { "IsRigidBodyB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGlueConstraint), &Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceA = { "PosBodySpaceA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, PosBodySpaceA), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceA_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceB = { "PosBodySpaceB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, PosBodySpaceB), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceB_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdA_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdA = { "TetIdA", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, TetIdA), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdA_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdA_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdB_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdB = { "TetIdB", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, TetIdB), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdB_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BreakThreshold_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BreakThreshold = { "BreakThreshold", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, BreakThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BreakThreshold_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BreakThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_MinGlueConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_MinGlueConstraints = { "MinGlueConstraints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlueConstraint, MinGlueConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_MinGlueConstraints_MetaData), Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_MinGlueConstraints_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlueConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BodyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_IsRigidBodyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_PosBodySpaceB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_TetIdB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_BreakThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewProp_MinGlueConstraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlueConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"GlueConstraint",
		Z_Construct_UScriptStruct_FGlueConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::PropPointers),
		sizeof(FGlueConstraint),
		alignof(FGlueConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlueConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlueConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGlueConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_GlueConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlueConstraint.InnerSingleton, Z_Construct_UScriptStruct_FGlueConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GlueConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMPlane;
class UScriptStruct* FFEMPlane::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMPlane.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMPlane.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMPlane, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMPlane"));
	}
	return Z_Registration_Info_UScriptStruct_FEMPlane.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMPlane>()
{
	return FFEMPlane::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMPlane_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonNegative_MetaData[];
#endif
		static void NewProp_NonNegative_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NonNegative;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMPlane_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMPlane_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMPlane>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_Bias_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMPlane, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_Bias_MetaData), Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_Bias_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative_SetBit(void* Obj)
	{
		((FFEMPlane*)Obj)->NonNegative = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative = { "NonNegative", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFEMPlane), &Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative_MetaData), Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_PlaneNormal_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMPlane, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_PlaneNormal_MetaData), Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_PlaneNormal_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_Bias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_NonNegative,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMPlane_Statics::NewProp_PlaneNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMPlane_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMPlane",
		Z_Construct_UScriptStruct_FFEMPlane_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::PropPointers),
		sizeof(FFEMPlane),
		alignof(FFEMPlane),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMPlane_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMPlane_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMPlane()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMPlane.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMPlane.InnerSingleton, Z_Construct_UScriptStruct_FFEMPlane_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMPlane.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPlaneConstraint>() == std::is_polymorphic<FGlueConstraint>(), "USTRUCT FPlaneConstraint cannot be polymorphic unless super FGlueConstraint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneConstraint;
class UScriptStruct* FPlaneConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneConstraint, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("PlaneConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FPlaneConstraint>()
{
	return FPlaneConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlanes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPlanes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Planes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_NumberOfPlanes_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_NumberOfPlanes = { "NumberOfPlanes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraint, NumberOfPlanes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_NumberOfPlanes_MetaData), Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_NumberOfPlanes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMPlane, METADATA_PARAMS(0, nullptr) }; // 2158324579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaneConstraint, Planes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes_MetaData), Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes_MetaData) }; // 2158324579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaneConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_NumberOfPlanes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewProp_Planes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		Z_Construct_UScriptStruct_FGlueConstraint,
		&NewStructOps,
		"PlaneConstraint",
		Z_Construct_UScriptStruct_FPlaneConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::PropPointers),
		sizeof(FPlaneConstraint),
		alignof(FPlaneConstraint),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSection;
class UScriptStruct* FMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSection, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("MeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSection.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FMeshSection>()
{
	return FMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssignedTetFace_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignedTetFace_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignedTetFace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Barycentrics_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Barycentrics_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Barycentrics;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BarycentricsPosIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricsPosIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BarycentricsPosIds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetAssignment_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetAssignment_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TetAssignment;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexColor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexNormal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexNormal;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexPosition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexPosition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexTangent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexTangent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexTangent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexUVs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexUVs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexUVs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShardVertexIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShardVertexIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShardVertexIds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Centroids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Centroids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Centroids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfShardVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfShardVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSection>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace_Inner = { "AssignedTetFace", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace = { "AssignedTetFace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, AssignedTetFace), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics_Inner = { "Barycentrics", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics = { "Barycentrics", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, Barycentrics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds_Inner = { "BarycentricsPosIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds = { "BarycentricsPosIds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, BarycentricsPosIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment_Inner = { "TetAssignment", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment = { "TetAssignment", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, TetAssignment), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor_Inner = { "VertexColor", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, VertexColor), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal_Inner = { "VertexNormal", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal = { "VertexNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, VertexNormal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition_Inner = { "VertexPosition", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition = { "VertexPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, VertexPosition), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent_Inner = { "VertexTangent", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent = { "VertexTangent", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, VertexTangent), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs_Inner = { "VertexUVs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs = { "VertexUVs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, VertexUVs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds_Inner = { "ShardVertexIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds = { "ShardVertexIds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, ShardVertexIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids_Inner = { "Centroids", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids = { "Centroids", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, Centroids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_NumberOfShardVertices_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_NumberOfShardVertices = { "NumberOfShardVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshSection, NumberOfShardVertices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_NumberOfShardVertices_MetaData), Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_NumberOfShardVertices_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_AssignedTetFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Barycentrics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_BarycentricsPosIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_TetAssignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_VertexUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_ShardVertexIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_Centroids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSection_Statics::NewProp_NumberOfShardVertices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"MeshSection",
		Z_Construct_UScriptStruct_FMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::PropPointers),
		sizeof(FMeshSection),
		alignof(FMeshSection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshSection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSection.InnerSingleton, Z_Construct_UScriptStruct_FMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Component;
class UScriptStruct* FComponent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Component.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Component.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponent, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("Component"));
	}
	return Z_Registration_Info_UScriptStruct_Component.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FComponent>()
{
	return FComponent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCornersPerShard_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCornersPerShard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFracturable_MetaData[];
#endif
		static void NewProp_IsFracturable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFracturable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EleFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EleFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFBXFiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFBXFiles;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FBXFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FBXFiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumberOfCornersPerShard_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumberOfCornersPerShard = { "NumberOfCornersPerShard", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, NumberOfCornersPerShard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumberOfCornersPerShard_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumberOfCornersPerShard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable_SetBit(void* Obj)
	{
		((FComponent*)Obj)->IsFracturable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable = { "IsFracturable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComponent), &Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, CollisionGroup), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_CollisionGroup_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_CollisionGroup_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumTags_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumTags = { "NumTags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, NumTags), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumTags_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumTags_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNameIndexMap, METADATA_PARAMS(0, nullptr) }; // 3758901245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags_MetaData) }; // 3758901245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumMaterials_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumMaterials = { "NumMaterials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, NumMaterials), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumMaterials_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumMaterials_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialTetAssignment, METADATA_PARAMS(0, nullptr) }; // 2626328682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials_MetaData) }; // 2626328682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_EleFile_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_EleFile = { "EleFile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, EleFile), Z_Construct_UScriptStruct_FEleResource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_EleFile_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_EleFile_MetaData) }; // 295555740
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NodeFile_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NodeFile = { "NodeFile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, NodeFile), Z_Construct_UScriptStruct_FNodeResource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NodeFile_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NodeFile_MetaData) }; // 357013027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumFBXFiles_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumFBXFiles = { "NumFBXFiles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, NumFBXFiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumFBXFiles_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumFBXFiles_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles_Inner = { "FBXFiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles = { "FBXFiles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, FBXFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections_Inner = { "MeshSections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshSection, METADATA_PARAMS(0, nullptr) }; // 3297159340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections = { "MeshSections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponent, MeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections_MetaData), Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections_MetaData) }; // 3297159340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumberOfCornersPerShard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_IsFracturable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_CollisionGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_EleFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NodeFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_NumFBXFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_FBXFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponent_Statics::NewProp_MeshSections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"Component",
		Z_Construct_UScriptStruct_FComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::PropPointers),
		sizeof(FComponent),
		alignof(FComponent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComponent()
	{
		if (!Z_Registration_Info_UScriptStruct_Component.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Component.InnerSingleton, Z_Construct_UScriptStruct_FComponent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Component.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetVertIds;
class UScriptStruct* FTetVertIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetVertIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetVertIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetVertIds, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetVertIds"));
	}
	return Z_Registration_Info_UScriptStruct_TetVertIds.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetVertIds>()
{
	return FTetVertIds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetVertIds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ids_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Ids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertIds_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetVertIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetVertIds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertIds_Statics::NewProp_Ids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetVertIds_Statics::NewProp_Ids = { "Ids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(Ids, FTetVertIds), STRUCT_OFFSET(FTetVertIds, Ids), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertIds_Statics::NewProp_Ids_MetaData), Z_Construct_UScriptStruct_FTetVertIds_Statics::NewProp_Ids_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetVertIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertIds_Statics::NewProp_Ids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetVertIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetVertIds",
		Z_Construct_UScriptStruct_FTetVertIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertIds_Statics::PropPointers),
		sizeof(FTetVertIds),
		alignof(FTetVertIds),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetVertIds_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertIds_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetVertIds()
	{
		if (!Z_Registration_Info_UScriptStruct_TetVertIds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetVertIds.InnerSingleton, Z_Construct_UScriptStruct_FTetVertIds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetVertIds.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetIdxToMaterial;
class UScriptStruct* FTetIdxToMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetIdxToMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetIdxToMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetIdxToMaterial, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetIdxToMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_TetIdxToMaterial.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetIdxToMaterial>()
{
	return FTetIdxToMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetIdxToMaterial>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetIdxToMaterial",
		nullptr,
		0,
		sizeof(FTetIdxToMaterial),
		alignof(FTetIdxToMaterial),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetIdxToMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_TetIdxToMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetIdxToMaterial.InnerSingleton, Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetIdxToMaterial.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BVSizes;
class UScriptStruct* FBVSizes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BVSizes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BVSizes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBVSizes, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("BVSizes"));
	}
	return Z_Registration_Info_UScriptStruct_BVSizes.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FBVSizes>()
{
	return FBVSizes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBVSizes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBVSizes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBVSizes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBVSizes>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBVSizes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"BVSizes",
		nullptr,
		0,
		sizeof(FBVSizes),
		alignof(FBVSizes),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBVSizes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBVSizes_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBVSizes()
	{
		if (!Z_Registration_Info_UScriptStruct_BVSizes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BVSizes.InnerSingleton, Z_Construct_UScriptStruct_FBVSizes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BVSizes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetMeshBufferInfo;
class UScriptStruct* FTetMeshBufferInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetMeshBufferInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetMeshBufferInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetMeshBufferInfo>()
{
	return FTetMeshBufferInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pBufferOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_pBufferOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subTetMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_subTetMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subMPCFSolverDataOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_subMPCFSolverDataOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subTetMeshVertOffsetsOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_subTetMeshVertOffsetsOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertReferenceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_vertReferenceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetReferenceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_tetReferenceOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetMeshBufferInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_pBufferOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_pBufferOffset = { "pBufferOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, pBufferOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_pBufferOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_pBufferOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshOffset = { "subTetMeshOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, subTetMeshOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subMPCFSolverDataOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subMPCFSolverDataOffset = { "subMPCFSolverDataOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, subMPCFSolverDataOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subMPCFSolverDataOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subMPCFSolverDataOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshVertOffsetsOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshVertOffsetsOffset = { "subTetMeshVertOffsetsOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, subTetMeshVertOffsetsOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshVertOffsetsOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshVertOffsetsOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_vertReferenceOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_vertReferenceOffset = { "vertReferenceOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, vertReferenceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_vertReferenceOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_vertReferenceOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_tetReferenceOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_tetReferenceOffset = { "tetReferenceOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetMeshBufferInfo, tetReferenceOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_tetReferenceOffset_MetaData), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_tetReferenceOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_pBufferOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subMPCFSolverDataOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_subTetMeshVertOffsetsOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_vertReferenceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewProp_tetReferenceOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetMeshBufferInfo",
		Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::PropPointers),
		sizeof(FTetMeshBufferInfo),
		alignof(FTetMeshBufferInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetMeshBufferInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.InnerSingleton, Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetMeshBufferInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentResources;
class UScriptStruct* FComponentResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentResources, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ComponentResources"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentResources.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FComponentResources>()
{
	return FComponentResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCornersPerShard_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCornersPerShard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFracturable_MetaData[];
#endif
		static void NewProp_IsFracturable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFracturable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionGroup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FBXFiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXFiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FBXFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_minPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_maxPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVerts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_restPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_restPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_restPositions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_tetVertIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetVertIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tetVertIds;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_vertIncidentTets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_vertIncidentTets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_vertIncidentTets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_meshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_meshSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumberOfCornersPerShard_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumberOfCornersPerShard = { "NumberOfCornersPerShard", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, NumberOfCornersPerShard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumberOfCornersPerShard_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumberOfCornersPerShard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable_SetBit(void* Obj)
	{
		((FComponentResources*)Obj)->IsFracturable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable = { "IsFracturable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FComponentResources), &Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_CollisionGroup_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_CollisionGroup = { "CollisionGroup", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, CollisionGroup), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_CollisionGroup_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_CollisionGroup_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNameIndexMap, METADATA_PARAMS(0, nullptr) }; // 3758901245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags_MetaData) }; // 3758901245
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialTetAssignment, METADATA_PARAMS(0, nullptr) }; // 2626328682
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials_MetaData) }; // 2626328682
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles_Inner = { "FBXFiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles = { "FBXFiles", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, FBXFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumVerts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumVerts = { "NumVerts", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, NumVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumVerts_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumTets_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumTets = { "NumTets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, NumTets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumTets_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumTets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_RestVolume_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_RestVolume = { "RestVolume", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, RestVolume), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_RestVolume_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_RestVolume_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_minPos_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_minPos = { "minPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, minPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_minPos_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_minPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_maxPos_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_maxPos = { "maxPos", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, maxPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_maxPos_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_maxPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_MaxVerts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_MaxVerts = { "MaxVerts", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, MaxVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_MaxVerts_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_MaxVerts_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions_Inner = { "restPositions", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions = { "restPositions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, restPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds_Inner = { "tetVertIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds = { "tetVertIds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, tetVertIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds_MetaData) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets_Inner = { "vertIncidentTets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets = { "vertIncidentTets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, vertIncidentTets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices_Inner = { "VertexIndices", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices = { "VertexIndices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, VertexIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections_Inner = { "meshSections", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshSection, METADATA_PARAMS(0, nullptr) }; // 3297159340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections = { "meshSections", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentResources, meshSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections_MetaData), Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections_MetaData) }; // 3297159340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumberOfCornersPerShard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_IsFracturable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_CollisionGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_FBXFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_NumTets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_RestVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_minPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_maxPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_MaxVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_restPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_tetVertIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_vertIncidentTets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_VertexIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentResources_Statics::NewProp_meshSections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ComponentResources",
		Z_Construct_UScriptStruct_FComponentResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::PropPointers),
		sizeof(FComponentResources),
		alignof(FComponentResources),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentResources_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentResources_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComponentResources()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentResources.InnerSingleton, Z_Construct_UScriptStruct_FComponentResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentResources.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorResource;
class UScriptStruct* FActorResource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorResource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorResource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorResource, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ActorResource"));
	}
	return Z_Registration_Info_UScriptStruct_ActorResource.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FActorResource>()
{
	return FActorResource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RigidBodies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngleConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AngleConstraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlueConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlueConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlueConstraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneConstraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaneConstraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorResource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorResource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorResource>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies_Inner = { "RigidBodies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRigidBody, METADATA_PARAMS(0, nullptr) }; // 3408502819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies = { "RigidBodies", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorResource, RigidBodies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies_MetaData), Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies_MetaData) }; // 3408502819
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints_Inner = { "AngleConstraints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAngleConstraint, METADATA_PARAMS(0, nullptr) }; // 1277661224
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints = { "AngleConstraints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorResource, AngleConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints_MetaData), Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints_MetaData) }; // 1277661224
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints_Inner = { "GlueConstraints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGlueConstraint, METADATA_PARAMS(0, nullptr) }; // 1641315052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints = { "GlueConstraints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorResource, GlueConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints_MetaData), Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints_MetaData) }; // 1641315052
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints_Inner = { "PlaneConstraints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlaneConstraint, METADATA_PARAMS(0, nullptr) }; // 243221571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints = { "PlaneConstraints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorResource, PlaneConstraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints_MetaData), Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints_MetaData) }; // 243221571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_RigidBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_AngleConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_GlueConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorResource_Statics::NewProp_PlaneConstraints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorResource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ActorResource",
		Z_Construct_UScriptStruct_FActorResource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::PropPointers),
		sizeof(FActorResource),
		alignof(FActorResource),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorResource_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorResource_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FActorResource()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorResource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorResource.InnerSingleton, Z_Construct_UScriptStruct_FActorResource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorResource.InnerSingleton;
	}
	void UFEMResource::StaticRegisterNativesUFEMResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMResource);
	UClass* Z_Construct_UClass_UFEMResource_NoRegister()
	{
		return UFEMResource::StaticClass();
	}
	struct Z_Construct_UClass_UFEMResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentResources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentResources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorResource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorResource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMResource.h" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMResource_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFEMResource_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMResource, Version), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::NewProp_Version_MetaData), Z_Construct_UClass_UFEMResource_Statics::NewProp_Version_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources_Inner = { "ComponentResources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FComponentResources, METADATA_PARAMS(0, nullptr) }; // 3468610073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources = { "ComponentResources", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMResource, ComponentResources), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources_MetaData), Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources_MetaData) }; // 3468610073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMResource_Statics::NewProp_ActorResource_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMResource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMResource_Statics::NewProp_ActorResource = { "ActorResource", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMResource, ActorResource), Z_Construct_UScriptStruct_FActorResource, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::NewProp_ActorResource_MetaData), Z_Construct_UClass_UFEMResource_Statics::NewProp_ActorResource_MetaData) }; // 1019099657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMResource_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMResource_Statics::NewProp_ComponentResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMResource_Statics::NewProp_ActorResource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMResource_Statics::ClassParams = {
		&UFEMResource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFEMResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMResource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMResource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMResource()
	{
		if (!Z_Registration_Info_UClass_UFEMResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMResource.OuterSingleton, Z_Construct_UClass_UFEMResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMResource.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMResource>()
	{
		return UFEMResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMResource);
	UFEMResource::~UFEMResource() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ScriptStructInfo[] = {
		{ FTet::StaticStruct, Z_Construct_UScriptStruct_FTet_Statics::NewStructOps, TEXT("Tet"), &Z_Registration_Info_UScriptStruct_Tet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTet), 2881059600U) },
		{ FNodeResource::StaticStruct, Z_Construct_UScriptStruct_FNodeResource_Statics::NewStructOps, TEXT("NodeResource"), &Z_Registration_Info_UScriptStruct_NodeResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeResource), 357013027U) },
		{ FEleResource::StaticStruct, Z_Construct_UScriptStruct_FEleResource_Statics::NewStructOps, TEXT("EleResource"), &Z_Registration_Info_UScriptStruct_EleResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEleResource), 295555740U) },
		{ FMaterialTetAssignment::StaticStruct, Z_Construct_UScriptStruct_FMaterialTetAssignment_Statics::NewStructOps, TEXT("MaterialTetAssignment"), &Z_Registration_Info_UScriptStruct_MaterialTetAssignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialTetAssignment), 2626328682U) },
		{ FNameIndexMap::StaticStruct, Z_Construct_UScriptStruct_FNameIndexMap_Statics::NewStructOps, TEXT("NameIndexMap"), &Z_Registration_Info_UScriptStruct_NameIndexMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameIndexMap), 3758901245U) },
		{ FRigidBody::StaticStruct, Z_Construct_UScriptStruct_FRigidBody_Statics::NewStructOps, TEXT("RigidBody"), &Z_Registration_Info_UScriptStruct_RigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigidBody), 3408502819U) },
		{ FAngleConstraint::StaticStruct, Z_Construct_UScriptStruct_FAngleConstraint_Statics::NewStructOps, TEXT("AngleConstraint"), &Z_Registration_Info_UScriptStruct_AngleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAngleConstraint), 1277661224U) },
		{ FGlueConstraint::StaticStruct, Z_Construct_UScriptStruct_FGlueConstraint_Statics::NewStructOps, TEXT("GlueConstraint"), &Z_Registration_Info_UScriptStruct_GlueConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlueConstraint), 1641315052U) },
		{ FFEMPlane::StaticStruct, Z_Construct_UScriptStruct_FFEMPlane_Statics::NewStructOps, TEXT("FEMPlane"), &Z_Registration_Info_UScriptStruct_FEMPlane, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMPlane), 2158324579U) },
		{ FPlaneConstraint::StaticStruct, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewStructOps, TEXT("PlaneConstraint"), &Z_Registration_Info_UScriptStruct_PlaneConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneConstraint), 243221571U) },
		{ FMeshSection::StaticStruct, Z_Construct_UScriptStruct_FMeshSection_Statics::NewStructOps, TEXT("MeshSection"), &Z_Registration_Info_UScriptStruct_MeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSection), 3297159340U) },
		{ FComponent::StaticStruct, Z_Construct_UScriptStruct_FComponent_Statics::NewStructOps, TEXT("Component"), &Z_Registration_Info_UScriptStruct_Component, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponent), 3393784332U) },
		{ FTetVertIds::StaticStruct, Z_Construct_UScriptStruct_FTetVertIds_Statics::NewStructOps, TEXT("TetVertIds"), &Z_Registration_Info_UScriptStruct_TetVertIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetVertIds), 2414148745U) },
		{ FTetIdxToMaterial::StaticStruct, Z_Construct_UScriptStruct_FTetIdxToMaterial_Statics::NewStructOps, TEXT("TetIdxToMaterial"), &Z_Registration_Info_UScriptStruct_TetIdxToMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetIdxToMaterial), 274291724U) },
		{ FBVSizes::StaticStruct, Z_Construct_UScriptStruct_FBVSizes_Statics::NewStructOps, TEXT("BVSizes"), &Z_Registration_Info_UScriptStruct_BVSizes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBVSizes), 4129705570U) },
		{ FTetMeshBufferInfo::StaticStruct, Z_Construct_UScriptStruct_FTetMeshBufferInfo_Statics::NewStructOps, TEXT("TetMeshBufferInfo"), &Z_Registration_Info_UScriptStruct_TetMeshBufferInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetMeshBufferInfo), 884419993U) },
		{ FComponentResources::StaticStruct, Z_Construct_UScriptStruct_FComponentResources_Statics::NewStructOps, TEXT("ComponentResources"), &Z_Registration_Info_UScriptStruct_ComponentResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentResources), 3468610073U) },
		{ FActorResource::StaticStruct, Z_Construct_UScriptStruct_FActorResource_Statics::NewStructOps, TEXT("ActorResource"), &Z_Registration_Info_UScriptStruct_ActorResource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorResource), 1019099657U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMResource, UFEMResource::StaticClass, TEXT("UFEMResource"), &Z_Registration_Info_UClass_UFEMResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMResource), 3059952732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_410365095(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMResource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
