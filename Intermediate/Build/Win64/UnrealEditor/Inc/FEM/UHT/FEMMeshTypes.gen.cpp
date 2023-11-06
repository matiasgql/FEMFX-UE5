// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMMeshTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMMeshTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshSection();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTangent();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetRotation();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshVertex();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces;
class UScriptStruct* FFEMFXTetFractureNewRenderFaces::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXTetFractureNewRenderFaces"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXTetFractureNewRenderFaces>()
{
	return FFEMFXTetFractureNewRenderFaces::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices0;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices2;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Render indices for the interior faces that will be exposed on fracture of each of the four tet faces\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render indices for the interior faces that will be exposed on fracture of each of the four tet faces" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXTetFractureNewRenderFaces>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0_Inner = { "Indices0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0 = { "Indices0", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXTetFractureNewRenderFaces, Indices0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0_MetaData), Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1_Inner = { "Indices1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1 = { "Indices1", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXTetFractureNewRenderFaces, Indices1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1_MetaData), Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2_Inner = { "Indices2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2 = { "Indices2", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXTetFractureNewRenderFaces, Indices2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2_MetaData), Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3_Inner = { "Indices3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3 = { "Indices3", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXTetFractureNewRenderFaces, Indices3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3_MetaData), Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewProp_Indices3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXTetFractureNewRenderFaces",
		Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::PropPointers),
		sizeof(FFEMFXTetFractureNewRenderFaces),
		alignof(FFEMFXTetFractureNewRenderFaces),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds;
class UScriptStruct* FFEMFXMeshTetVertexIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshTetVertexIds"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshTetVertexIds>()
{
	return FFEMFXMeshTetVertexIds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id0_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id3_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indices of tetrahedron's vertices\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices of tetrahedron's vertices" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshTetVertexIds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id0_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id0 = { "Id0", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetVertexIds, Id0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id0_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id1_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id1 = { "Id1", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetVertexIds, Id1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id1_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id2_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id2 = { "Id2", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetVertexIds, Id2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id2_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id3_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id3 = { "Id3", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetVertexIds, Id3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id3_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id3_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewProp_Id3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshTetVertexIds",
		Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::PropPointers),
		sizeof(FFEMFXMeshTetVertexIds),
		alignof(FFEMFXMeshTetVertexIds),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation;
class UScriptStruct* FFEMFXMeshTetRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshTetRotation"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshTetRotation>()
{
	return FFEMFXMeshTetRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Col0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Col1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Col2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Col2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tet rotation matrix\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tet rotation matrix" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshTetRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col0_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col0 = { "Col0", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetRotation, Col0), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col0_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col1_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col1 = { "Col1", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetRotation, Col1), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col1_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col2_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col2 = { "Col2", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTetRotation, Col2), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col2_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewProp_Col2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshTetRotation",
		Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::PropPointers),
		sizeof(FFEMFXMeshTetRotation),
		alignof(FFEMFXMeshTetRotation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshTangent;
class UScriptStruct* FFEMFXMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshTangent, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshTangent>()
{
	return FFEMFXMeshTangent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshTangent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Direction of X tangent for this vertex */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Direction of X tangent for this vertex" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_TangentX_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_TangentX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FFEMFXMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFEMFXMeshTangent), &Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshTangent",
		Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::PropPointers),
		sizeof(FFEMFXMeshTangent),
		alignof(FFEMFXMeshTangent),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTangent()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshTangent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshVertex;
class UScriptStruct* FFEMFXMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshVertex, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshVertex>()
{
	return FFEMFXMeshVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShardId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShardId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaryPosBaseId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaryPosBaseId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex position */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex position" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, Position), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Position_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Position_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex normal */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex normal" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, Normal), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Normal_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Normal_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex tangent */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex tangent" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, Tangent), Z_Construct_UScriptStruct_FFEMFXMeshTangent, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Tangent_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Tangent_MetaData) }; // 3487626534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex color */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex color" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Color_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Color_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex texture co-ordinate */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex texture co-ordinate" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_UV0_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_UV0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_ShardId_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ShardId */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ShardId" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_ShardId = { "ShardId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, ShardId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_ShardId_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_ShardId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_BaryPosBaseId_MetaData[] = {
		{ "Category", "Vertex" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BaryPosBaseId */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BaryPosBaseId" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_BaryPosBaseId = { "BaryPosBaseId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshVertex, BaryPosBaseId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_BaryPosBaseId_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_BaryPosBaseId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_ShardId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewProp_BaryPosBaseId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshVertex",
		Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::PropPointers),
		sizeof(FFEMFXMeshVertex),
		alignof(FFEMFXMeshVertex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos;
class UScriptStruct* FFEMFXMeshBarycentricPos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshBarycentricPos"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshBarycentricPos>()
{
	return FFEMFXMeshBarycentricPos::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricCoord0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarycentricCoord0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricCoord1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarycentricCoord1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricCoord2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarycentricCoord2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricCoord3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarycentricCoord3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Position specified by id of tetrahedron and barycentric weights of four corners.\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Position specified by id of tetrahedron and barycentric weights of four corners." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshBarycentricPos>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord0 = { "BarycentricCoord0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshBarycentricPos, BarycentricCoord0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord0_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord0_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord1 = { "BarycentricCoord1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshBarycentricPos, BarycentricCoord1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord1_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord2 = { "BarycentricCoord2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshBarycentricPos, BarycentricCoord2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord2_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord3 = { "BarycentricCoord3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshBarycentricPos, BarycentricCoord3), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord3_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_TetId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_TetId = { "TetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshBarycentricPos, TetId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_TetId_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_TetId_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_BarycentricCoord3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewProp_TetId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshBarycentricPos",
		Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::PropPointers),
		sizeof(FFEMFXMeshBarycentricPos),
		alignof(FFEMFXMeshBarycentricPos),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEMFXMeshSection;
class UScriptStruct* FFEMFXMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEMFXMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEMFXMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFEMFXMeshSection, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("FEMFXMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_FEMFXMeshSection.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FFEMFXMeshSection>()
{
	return FFEMFXMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BarycentricPosIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricPosIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BarycentricPosIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarycentricPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarycentricPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BarycentricPositions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBuffer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[];
#endif
		static void NewProp_bSectionVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Section of FEM mesh sharing the same material.\n// This is the source/CPU data copied to RHI resources.\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Section of FEM mesh sharing the same material.\nThis is the source/CPU data copied to RHI resources." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFEMFXMeshSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaterialIndex_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaterialIndex_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds_Inner = { "BarycentricPosIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds = { "BarycentricPosIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, BarycentricPosIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions_Inner = { "BarycentricPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos, METADATA_PARAMS(0, nullptr) }; // 3922102246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: rename to BarycentricPosOffsets and re-import\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: rename to BarycentricPosOffsets and re-import" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions = { "BarycentricPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, BarycentricPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions_MetaData) }; // 3922102246
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer_Inner = { "VertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshVertex, METADATA_PARAMS(0, nullptr) }; // 3600226560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertex buffer for this section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertex buffer for this section" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer = { "VertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, VertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer_MetaData) }; // 3600226560
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer_Inner = { "IndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index buffer for this section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index buffer for this section" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer = { "IndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, IndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaxTriIndices_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Maximum number of tri indices, used for padding index buffer */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum number of tri indices, used for padding index buffer" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaxTriIndices = { "MaxTriIndices", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, MaxTriIndices), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaxTriIndices_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaxTriIndices_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_SectionLocalBox_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local bounding box of section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local bounding box of section" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFEMFXMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_SectionLocalBox_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_SectionLocalBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we build collision data for triangles in this section" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FFEMFXMeshSection*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFEMFXMeshSection), &Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Should we display this section */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMeshTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should we display this section" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
	{
		((FFEMFXMeshSection*)Obj)->bSectionVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFEMFXMeshSection), &Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible_MetaData), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPosIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_BarycentricPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_VertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_IndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_MaxTriIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_SectionLocalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewProp_bSectionVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"FEMFXMeshSection",
		Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::PropPointers),
		sizeof(FFEMFXMeshSection),
		alignof(FFEMFXMeshSection),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_FEMFXMeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEMFXMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FEMFXMeshSection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMeshTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMeshTypes_h_Statics::ScriptStructInfo[] = {
		{ FFEMFXTetFractureNewRenderFaces::StaticStruct, Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces_Statics::NewStructOps, TEXT("FEMFXTetFractureNewRenderFaces"), &Z_Registration_Info_UScriptStruct_FEMFXTetFractureNewRenderFaces, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXTetFractureNewRenderFaces), 1017587454U) },
		{ FFEMFXMeshTetVertexIds::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds_Statics::NewStructOps, TEXT("FEMFXMeshTetVertexIds"), &Z_Registration_Info_UScriptStruct_FEMFXMeshTetVertexIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshTetVertexIds), 1438893160U) },
		{ FFEMFXMeshTetRotation::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshTetRotation_Statics::NewStructOps, TEXT("FEMFXMeshTetRotation"), &Z_Registration_Info_UScriptStruct_FEMFXMeshTetRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshTetRotation), 2285789718U) },
		{ FFEMFXMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshTangent_Statics::NewStructOps, TEXT("FEMFXMeshTangent"), &Z_Registration_Info_UScriptStruct_FEMFXMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshTangent), 3487626534U) },
		{ FFEMFXMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshVertex_Statics::NewStructOps, TEXT("FEMFXMeshVertex"), &Z_Registration_Info_UScriptStruct_FEMFXMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshVertex), 3600226560U) },
		{ FFEMFXMeshBarycentricPos::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshBarycentricPos_Statics::NewStructOps, TEXT("FEMFXMeshBarycentricPos"), &Z_Registration_Info_UScriptStruct_FEMFXMeshBarycentricPos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshBarycentricPos), 3922102246U) },
		{ FFEMFXMeshSection::StaticStruct, Z_Construct_UScriptStruct_FFEMFXMeshSection_Statics::NewStructOps, TEXT("FEMFXMeshSection"), &Z_Registration_Info_UScriptStruct_FEMFXMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFEMFXMeshSection), 2063112750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMeshTypes_h_121236173(TEXT("/Script/FEM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMeshTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMeshTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
