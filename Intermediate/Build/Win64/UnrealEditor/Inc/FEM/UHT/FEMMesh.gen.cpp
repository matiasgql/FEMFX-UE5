// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMMesh.h"
#include "FEMMeshTypes.h"
#include "FEMResource.h"
#include "RenderTetAssignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	FEM_API UClass* Z_Construct_UClass_UFEMMesh();
	FEM_API UClass* Z_Construct_UClass_UFEMMesh_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMMeshResource();
	FEM_API UClass* Z_Construct_UClass_UFEMMeshResource_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMTetMesh();
	FEM_API UClass* Z_Construct_UClass_UFEMTetMesh_NoRegister();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FComponentResources();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshSection();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetRotation();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FShardVertTetAssignments();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	void UFEMTetMesh::StaticRegisterNativesUFEMTetMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMTetMesh);
	UClass* Z_Construct_UClass_UFEMTetMesh_NoRegister()
	{
		return UFEMTetMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFEMTetMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMMeshVertexPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshVertexPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMMeshVertexPositions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMMeshVertexRotations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshVertexRotations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMMeshVertexRotations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMMeshTetVertexIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshTetVertexIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMMeshTetVertexIds;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FEMMeshDeformations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshDeformations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMMeshDeformations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMMeshTetFractureNewRenderFaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshTetFractureNewRenderFaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMMeshTetFractureNewRenderFaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetFractureShardVerticesToUpdate_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetFractureShardVerticesToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TetFractureShardVerticesToUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMMeshInteriorMeshSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FEMMeshInteriorMeshSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMTetMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FEMMesh.h" },
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions_Inner = { "FEMMeshVertexPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*void UpdateTetMeshData_Internal(const TArray<FVector>& NewVertexPositions, const TArray<FFEMFXMeshTetRotation>& NewVertexRotations, bool PadVerticesForFracture);\n\n\x09void UpdateTetVertexIds_Internal(const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds);*/" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void UpdateTetMeshData_Internal(const TArray<FVector>& NewVertexPositions, const TArray<FFEMFXMeshTetRotation>& NewVertexRotations, bool PadVerticesForFracture);\n\n       void UpdateTetVertexIds_Internal(const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds);" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions = { "FEMMeshVertexPositions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshVertexPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations_Inner = { "FEMMeshVertexRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshTetRotation, METADATA_PARAMS(0, nullptr) }; // 2285789718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations = { "FEMMeshVertexRotations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshVertexRotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations_MetaData) }; // 2285789718
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds_Inner = { "FEMMeshTetVertexIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshTetVertexIds, METADATA_PARAMS(0, nullptr) }; // 1438893160
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds = { "FEMMeshTetVertexIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshTetVertexIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds_MetaData) }; // 1438893160
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations_Inner = { "FEMMeshDeformations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations = { "FEMMeshDeformations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshDeformations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces_Inner = { "FEMMeshTetFractureNewRenderFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXTetFractureNewRenderFaces, METADATA_PARAMS(0, nullptr) }; // 1017587454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces = { "FEMMeshTetFractureNewRenderFaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshTetFractureNewRenderFaces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces_MetaData) }; // 1017587454
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate_Inner = { "TetFractureShardVerticesToUpdate", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate, METADATA_PARAMS(0, nullptr) }; // 4204019208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate = { "TetFractureShardVerticesToUpdate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, TetFractureShardVerticesToUpdate), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate_MetaData) }; // 4204019208
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshInteriorMeshSection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshInteriorMeshSection = { "FEMMeshInteriorMeshSection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMTetMesh, FEMMeshInteriorMeshSection), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshInteriorMeshSection_MetaData), Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshInteriorMeshSection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMTetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshVertexRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetVertexIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshDeformations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshTetFractureNewRenderFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_TetFractureShardVerticesToUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMTetMesh_Statics::NewProp_FEMMeshInteriorMeshSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMTetMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMTetMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMTetMesh_Statics::ClassParams = {
		&UFEMTetMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFEMTetMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMTetMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMTetMesh()
	{
		if (!Z_Registration_Info_UClass_UFEMTetMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMTetMesh.OuterSingleton, Z_Construct_UClass_UFEMTetMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMTetMesh.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMTetMesh>()
	{
		return UFEMTetMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMTetMesh);
	UFEMTetMesh::~UFEMTetMesh() {}
	void UFEMMeshResource::StaticRegisterNativesUFEMMeshResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMMeshResource);
	UClass* Z_Construct_UClass_UFEMMeshResource_NoRegister()
	{
		return UFEMMeshResource::StaticClass();
	}
	struct Z_Construct_UClass_UFEMMeshResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FEMFXMeshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMFXMeshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMFXMeshSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMMeshResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshResource_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshResource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FEMMesh.h" },
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections_Inner = { "FEMFXMeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFEMFXMeshSection, METADATA_PARAMS(0, nullptr) }; // 2063112750
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of sections of mesh */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of sections of mesh" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections = { "FEMFXMeshSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshResource, FEMFXMeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections_MetaData), Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections_MetaData) }; // 2063112750
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMMeshResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshResource_Statics::NewProp_FEMFXMeshSections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMMeshResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMMeshResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMMeshResource_Statics::ClassParams = {
		&UFEMMeshResource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFEMMeshResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshResource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshResource_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMMeshResource_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshResource_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMMeshResource()
	{
		if (!Z_Registration_Info_UClass_UFEMMeshResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMMeshResource.OuterSingleton, Z_Construct_UClass_UFEMMeshResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMMeshResource.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMMeshResource>()
	{
		return UFEMMeshResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMMeshResource);
	UFEMMeshResource::~UFEMMeshResource() {}
	DEFINE_FUNCTION(UFEMMesh::execUpdateBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->UpdateBounds();
		P_NATIVE_END;
	}
	void UFEMMesh::StaticRegisterNativesUFEMMesh()
	{
		UClass* Class = UFEMMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateBounds", &UFEMMesh::execUpdateBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics
	{
		struct FEMMesh_eventUpdateBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMMesh_eventUpdateBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFEMMesh, nullptr, "UpdateBounds", nullptr, nullptr, Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::FEMMesh_eventUpdateBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::FEMMesh_eventUpdateBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFEMMesh_UpdateBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFEMMesh_UpdateBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMMesh);
	UClass* Z_Construct_UClass_UFEMMesh_NoRegister()
	{
		return UFEMMesh::StaticClass();
	}
	struct Z_Construct_UClass_UFEMMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWoodPanel_MetaData[];
#endif
		static void NewProp_IsWoodPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWoodPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfCornersPerShard_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCornersPerShard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfShards_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfShards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentResources_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentResources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedResource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImportedResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShardVertTetAssignmentsBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShardVertTetAssignmentsBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShardVertTetAssignmentsBuffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFEMMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFEMMesh_UpdateBounds, "UpdateBounds" }, // 2838939410
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FEMMesh.h" },
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	void Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel_SetBit(void* Obj)
	{
		((UFEMMesh*)Obj)->IsWoodPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel = { "IsWoodPanel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMMesh), &Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfCornersPerShard_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfCornersPerShard = { "NumberOfCornersPerShard", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, NumberOfCornersPerShard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfCornersPerShard_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfCornersPerShard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfShards_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfShards = { "NumberOfShards", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, NumberOfShards), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfShards_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfShards_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_LocalBounds_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_LocalBounds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_ComponentResources_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rendering resources create at import time. */" },
#endif
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rendering resources create at import time." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_ComponentResources = { "ComponentResources", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, ComponentResources), Z_Construct_UScriptStruct_FComponentResources, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_ComponentResources_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_ComponentResources_MetaData) }; // 3468610073
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_ImportedResource_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_ImportedResource = { "ImportedResource", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, ImportedResource), Z_Construct_UClass_UFEMMeshResource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_ImportedResource_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_ImportedResource_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_TetMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_TetMesh = { "TetMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, TetMesh), Z_Construct_UClass_UFEMTetMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_TetMesh_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_TetMesh_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer_Inner = { "ShardVertTetAssignmentsBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShardVertTetAssignments, METADATA_PARAMS(0, nullptr) }; // 2700446765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FEMMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer = { "ShardVertTetAssignmentsBuffer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMesh, ShardVertTetAssignmentsBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer_MetaData), Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer_MetaData) }; // 2700446765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_IsWoodPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfCornersPerShard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_NumberOfShards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_ComponentResources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_ImportedResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_TetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMesh_Statics::NewProp_ShardVertTetAssignmentsBuffer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMMesh_Statics::ClassParams = {
		&UFEMMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFEMMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMMesh_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMesh_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMMesh()
	{
		if (!Z_Registration_Info_UClass_UFEMMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMMesh.OuterSingleton, Z_Construct_UClass_UFEMMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMMesh.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<UFEMMesh>()
	{
		return UFEMMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMMesh);
	UFEMMesh::~UFEMMesh() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMTetMesh, UFEMTetMesh::StaticClass, TEXT("UFEMTetMesh"), &Z_Registration_Info_UClass_UFEMTetMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMTetMesh), 3888021899U) },
		{ Z_Construct_UClass_UFEMMeshResource, UFEMMeshResource::StaticClass, TEXT("UFEMMeshResource"), &Z_Registration_Info_UClass_UFEMMeshResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMMeshResource), 3630735562U) },
		{ Z_Construct_UClass_UFEMMesh, UFEMMesh::StaticClass, TEXT("UFEMMesh"), &Z_Registration_Info_UClass_UFEMMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMMesh), 575150364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMesh_h_4149957808(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
