// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetBlueprintHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetBlueprintHelpers() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetVertex();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetVertNeighbors();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetVertNeighbors;
class UScriptStruct* FTetVertNeighbors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetVertNeighbors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetVertNeighbors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetVertNeighbors, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetVertNeighbors"));
	}
	return Z_Registration_Info_UScriptStruct_TetVertNeighbors.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetVertNeighbors>()
{
	return FTetVertNeighbors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetVertNeighbors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAdjacentVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAdjacentVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncidentTetsStart_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IncidentTetsStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIncidentTets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIncidentTets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetVertNeighbors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumAdjacentVerts_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FTetVertNeighbors(const AMD::FmVertNeighbors* vertNeighbors);\n" },
#endif
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FTetVertNeighbors(const AMD::FmVertNeighbors* vertNeighbors);" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumAdjacentVerts = { "NumAdjacentVerts", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertNeighbors, NumAdjacentVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumAdjacentVerts_MetaData), Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumAdjacentVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_IncidentTetsStart_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_IncidentTetsStart = { "IncidentTetsStart", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertNeighbors, IncidentTetsStart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_IncidentTetsStart_MetaData), Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_IncidentTetsStart_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumIncidentTets_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumIncidentTets = { "NumIncidentTets", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertNeighbors, NumIncidentTets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumIncidentTets_MetaData), Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumIncidentTets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumAdjacentVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_IncidentTetsStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewProp_NumIncidentTets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetVertNeighbors",
		Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::PropPointers),
		sizeof(FTetVertNeighbors),
		alignof(FTetVertNeighbors),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetVertNeighbors()
	{
		if (!Z_Registration_Info_UScriptStruct_TetVertNeighbors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetVertNeighbors.InnerSingleton, Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetVertNeighbors.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetVertex;
class UScriptStruct* FTetVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetVertex, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetVertex"));
	}
	return Z_Registration_Info_UScriptStruct_TetVertex.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetVertex>()
{
	return FTetVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetVertex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RestPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KinematicVel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KinematicVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neighbors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Neighbors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index0_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index0;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_RestPos_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FTetVertex(const AMD::FmVert* vert);\n" },
#endif
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FTetVertex(const AMD::FmVert* vert);" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_RestPos = { "RestPos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, RestPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_RestPos_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_RestPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Pos_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Pos_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Pos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Velocity_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Velocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_ExtForce_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_ExtForce = { "ExtForce", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, ExtForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_ExtForce_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_ExtForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_KinematicVel_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_KinematicVel = { "KinematicVel", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, KinematicVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_KinematicVel_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_KinematicVel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Neighbors_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Neighbors = { "Neighbors", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, Neighbors), Z_Construct_UScriptStruct_FTetVertNeighbors, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Neighbors_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Neighbors_MetaData) }; // 508196855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Mass_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Index0_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Index0 = { "Index0", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetVertex, Index0), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Index0_MetaData), Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Index0_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_RestPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Pos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_ExtForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_KinematicVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Neighbors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetVertex_Statics::NewProp_Index0,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetVertex",
		Z_Construct_UScriptStruct_FTetVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::PropPointers),
		sizeof(FTetVertex),
		alignof(FTetVertex),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetVertex_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetVertex_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_TetVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetVertex.InnerSingleton, Z_Construct_UScriptStruct_FTetVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetInfo;
class UScriptStruct* FTetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_TetInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetInfo>()
{
	return FTetInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TetId;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrictionCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionCoeff;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIncidentTetIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceIncidentTetIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaceIncidentTetIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_TetId_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FTetInfo(const AMD::FmTet* tet);\n" },
#endif
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FTetInfo(const AMD::FmTet* tet);" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_TetId = { "TetId", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetInfo, TetId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_TetId_MetaData), Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_TetId_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds_Inner = { "VertIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds = { "VertIds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetInfo, VertIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds_MetaData), Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetInfo, Mass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_Mass_MetaData), Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_Mass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FrictionCoeff_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FrictionCoeff = { "FrictionCoeff", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetInfo, FrictionCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FrictionCoeff_MetaData), Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FrictionCoeff_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds_Inner = { "FaceIncidentTetIds", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/TetBlueprintHelpers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds = { "FaceIncidentTetIds", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetInfo, FaceIncidentTetIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds_MetaData), Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_TetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_VertIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FrictionCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetInfo_Statics::NewProp_FaceIncidentTetIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetInfo",
		Z_Construct_UScriptStruct_FTetInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::PropPointers),
		sizeof(FTetInfo),
		alignof(FTetInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_TetInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetInfo.InnerSingleton, Z_Construct_UScriptStruct_FTetInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_TetBlueprintHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_TetBlueprintHelpers_h_Statics::ScriptStructInfo[] = {
		{ FTetVertNeighbors::StaticStruct, Z_Construct_UScriptStruct_FTetVertNeighbors_Statics::NewStructOps, TEXT("TetVertNeighbors"), &Z_Registration_Info_UScriptStruct_TetVertNeighbors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetVertNeighbors), 508196855U) },
		{ FTetVertex::StaticStruct, Z_Construct_UScriptStruct_FTetVertex_Statics::NewStructOps, TEXT("TetVertex"), &Z_Registration_Info_UScriptStruct_TetVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetVertex), 3173397596U) },
		{ FTetInfo::StaticStruct, Z_Construct_UScriptStruct_FTetInfo_Statics::NewStructOps, TEXT("TetInfo"), &Z_Registration_Info_UScriptStruct_TetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetInfo), 3256456161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_TetBlueprintHelpers_h_391222979(TEXT("/Script/FEM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_TetBlueprintHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_TetBlueprintHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
