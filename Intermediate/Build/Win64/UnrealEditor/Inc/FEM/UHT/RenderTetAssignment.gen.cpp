// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderTetAssignment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTetAssignment() {}
// Cross Module References
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FRenderVertTetAssignment();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FShardVertBaryPosIds();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FShardVertTetAssignments();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FShardVertUpdateInfo();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderVertTetAssignment;
class UScriptStruct* FRenderVertTetAssignment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderVertTetAssignment, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("RenderVertTetAssignment"));
	}
	return Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FRenderVertTetAssignment>()
{
	return FRenderVertTetAssignment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_tetId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nearestFaceId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_nearestFaceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_barycentricCoords_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_barycentricCoords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inside_MetaData[];
#endif
		static void NewProp_inside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_inside;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderVertTetAssignment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_tetId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_tetId = { "tetId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderVertTetAssignment, tetId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_tetId_MetaData), Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_tetId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_nearestFaceId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_nearestFaceId = { "nearestFaceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRenderVertTetAssignment, nearestFaceId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_nearestFaceId_MetaData), Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_nearestFaceId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_barycentricCoords_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_barycentricCoords = { "barycentricCoords", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(barycentricCoords, FRenderVertTetAssignment), STRUCT_OFFSET(FRenderVertTetAssignment, barycentricCoords), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_barycentricCoords_MetaData), Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_barycentricCoords_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside_SetBit(void* Obj)
	{
		((FRenderVertTetAssignment*)Obj)->inside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside = { "inside", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRenderVertTetAssignment), &Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside_MetaData), Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_tetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_nearestFaceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_barycentricCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewProp_inside,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"RenderVertTetAssignment",
		Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::PropPointers),
		sizeof(FRenderVertTetAssignment),
		alignof(FRenderVertTetAssignment),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRenderVertTetAssignment()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.InnerSingleton, Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderVertTetAssignment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShardVertTetAssignments;
class UScriptStruct* FShardVertTetAssignments::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShardVertTetAssignments, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ShardVertTetAssignments"));
	}
	return Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FShardVertTetAssignments>()
{
	return FShardVertTetAssignments::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tetAssignments_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tetAssignments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numTets_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_numTets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShardVertTetAssignments>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_tetAssignments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_tetAssignments = { "tetAssignments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(tetAssignments, FShardVertTetAssignments), STRUCT_OFFSET(FShardVertTetAssignments, tetAssignments), Z_Construct_UScriptStruct_FRenderVertTetAssignment, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_tetAssignments_MetaData), Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_tetAssignments_MetaData) }; // 160353287
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_numTets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_numTets = { "numTets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertTetAssignments, numTets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_numTets_MetaData), Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_numTets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_tetAssignments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewProp_numTets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ShardVertTetAssignments",
		Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::PropPointers),
		sizeof(FShardVertTetAssignments),
		alignof(FShardVertTetAssignments),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FShardVertTetAssignments()
	{
		if (!Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.InnerSingleton, Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShardVertTetAssignments.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds;
class UScriptStruct* FShardVertBaryPosIds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShardVertBaryPosIds, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ShardVertBaryPosIds"));
	}
	return Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FShardVertBaryPosIds>()
{
	return FShardVertBaryPosIds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseBaryPosId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baseBaryPosId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_numBaryPositions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_numBaryPositions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShardVertBaryPosIds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_baseBaryPosId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_baseBaryPosId = { "baseBaryPosId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertBaryPosIds, baseBaryPosId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_baseBaryPosId_MetaData), Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_baseBaryPosId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_numBaryPositions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_numBaryPositions = { "numBaryPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertBaryPosIds, numBaryPositions), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_numBaryPositions_MetaData), Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_numBaryPositions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_baseBaryPosId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewProp_numBaryPositions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ShardVertBaryPosIds",
		Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::PropPointers),
		sizeof(FShardVertBaryPosIds),
		alignof(FShardVertBaryPosIds),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FShardVertBaryPosIds()
	{
		if (!Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.InnerSingleton, Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo;
class UScriptStruct* FShardVertUpdateInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShardVertUpdateInfo, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ShardVertUpdateInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FShardVertUpdateInfo>()
{
	return FShardVertUpdateInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshSectionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_meshSectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shardVertexId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_shardVertexId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baryPosBaseId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baryPosBaseId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baryPosOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_baryPosOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Info to update the assignment to BaryPos\n" },
#endif
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Info to update the assignment to BaryPos" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShardVertUpdateInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_meshSectionId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_meshSectionId = { "meshSectionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertUpdateInfo, meshSectionId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_meshSectionId_MetaData), Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_meshSectionId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_shardVertexId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_shardVertexId = { "shardVertexId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertUpdateInfo, shardVertexId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_shardVertexId_MetaData), Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_shardVertexId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosBaseId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosBaseId = { "baryPosBaseId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertUpdateInfo, baryPosBaseId), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosBaseId_MetaData), Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosBaseId_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosOffset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Base id in BaryPos array\n" },
#endif
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base id in BaryPos array" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosOffset = { "baryPosOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FShardVertUpdateInfo, baryPosOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosOffset_MetaData), Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_meshSectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_shardVertexId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosBaseId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewProp_baryPosOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ShardVertUpdateInfo",
		Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::PropPointers),
		sizeof(FShardVertUpdateInfo),
		alignof(FShardVertUpdateInfo),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FShardVertUpdateInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.InnerSingleton, Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate;
class UScriptStruct* FTetFractureShardVerticesToUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("TetFractureShardVerticesToUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FTetFractureShardVerticesToUpdate>()
{
	return FTetFractureShardVerticesToUpdate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_shardVertices0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shardVertices0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shardVertices0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shardVertices1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shardVertices1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shardVertices1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shardVertices2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shardVertices2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shardVertices2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_shardVertices3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shardVertices3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_shardVertices3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indices of shard positions that will need a new tet assignment on fracture of each of the four tet faces\n" },
#endif
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indices of shard positions that will need a new tet assignment on fracture of each of the four tet faces" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetFractureShardVerticesToUpdate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0_Inner = { "shardVertices0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShardVertUpdateInfo, METADATA_PARAMS(0, nullptr) }; // 2843433318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0 = { "shardVertices0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetFractureShardVerticesToUpdate, shardVertices0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0_MetaData), Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0_MetaData) }; // 2843433318
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1_Inner = { "shardVertices1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShardVertUpdateInfo, METADATA_PARAMS(0, nullptr) }; // 2843433318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1 = { "shardVertices1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetFractureShardVerticesToUpdate, shardVertices1), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1_MetaData), Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1_MetaData) }; // 2843433318
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2_Inner = { "shardVertices2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShardVertUpdateInfo, METADATA_PARAMS(0, nullptr) }; // 2843433318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2 = { "shardVertices2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetFractureShardVerticesToUpdate, shardVertices2), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2_MetaData), Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2_MetaData) }; // 2843433318
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3_Inner = { "shardVertices3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FShardVertUpdateInfo, METADATA_PARAMS(0, nullptr) }; // 2843433318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3_MetaData[] = {
		{ "ModuleRelativePath", "Classes/RenderTetAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3 = { "shardVertices3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTetFractureShardVerticesToUpdate, shardVertices3), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3_MetaData), Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3_MetaData) }; // 2843433318
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewProp_shardVertices3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"TetFractureShardVerticesToUpdate",
		Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::PropPointers),
		sizeof(FTetFractureShardVerticesToUpdate),
		alignof(FTetFractureShardVerticesToUpdate),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate()
	{
		if (!Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.InnerSingleton, Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_RenderTetAssignment_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_RenderTetAssignment_h_Statics::ScriptStructInfo[] = {
		{ FRenderVertTetAssignment::StaticStruct, Z_Construct_UScriptStruct_FRenderVertTetAssignment_Statics::NewStructOps, TEXT("RenderVertTetAssignment"), &Z_Registration_Info_UScriptStruct_RenderVertTetAssignment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderVertTetAssignment), 160353287U) },
		{ FShardVertTetAssignments::StaticStruct, Z_Construct_UScriptStruct_FShardVertTetAssignments_Statics::NewStructOps, TEXT("ShardVertTetAssignments"), &Z_Registration_Info_UScriptStruct_ShardVertTetAssignments, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShardVertTetAssignments), 2700446765U) },
		{ FShardVertBaryPosIds::StaticStruct, Z_Construct_UScriptStruct_FShardVertBaryPosIds_Statics::NewStructOps, TEXT("ShardVertBaryPosIds"), &Z_Registration_Info_UScriptStruct_ShardVertBaryPosIds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShardVertBaryPosIds), 2010464205U) },
		{ FShardVertUpdateInfo::StaticStruct, Z_Construct_UScriptStruct_FShardVertUpdateInfo_Statics::NewStructOps, TEXT("ShardVertUpdateInfo"), &Z_Registration_Info_UScriptStruct_ShardVertUpdateInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShardVertUpdateInfo), 2843433318U) },
		{ FTetFractureShardVerticesToUpdate::StaticStruct, Z_Construct_UScriptStruct_FTetFractureShardVerticesToUpdate_Statics::NewStructOps, TEXT("TetFractureShardVerticesToUpdate"), &Z_Registration_Info_UScriptStruct_TetFractureShardVerticesToUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetFractureShardVerticesToUpdate), 4204019208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_RenderTetAssignment_h_2717751207(TEXT("/Script/FEM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_RenderTetAssignment_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_RenderTetAssignment_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
