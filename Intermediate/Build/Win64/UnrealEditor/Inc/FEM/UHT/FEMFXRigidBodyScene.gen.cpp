// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMFXRigidBodyScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMFXRigidBodyScene() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEM_API UClass* Z_Construct_UClass_AFEMFXRigidBodyScene();
	FEM_API UClass* Z_Construct_UClass_AFEMFXRigidBodyScene_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene_NoRegister();
	FEM_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintsSetupParams();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintsSetupParams;
class UScriptStruct* FConstraintsSetupParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintsSetupParams, (UObject*)Z_Construct_UPackage__Script_FEM(), TEXT("ConstraintsSetupParams"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.OuterSingleton;
}
template<> FEM_API UScriptStruct* StaticStruct<FConstraintsSetupParams>()
{
	return FConstraintsSetupParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceContacts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDistanceContacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFractureContacts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFractureContacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeContacts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVolumeContacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeContactVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVolumeContactVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGlueConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGlueConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaneConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaneConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRigidBodyAngleConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRigidBodyAngleConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBroadPhasePairs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBroadPhasePairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintsSetupParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxDistanceContacts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxDistanceContacts = { "MaxDistanceContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxDistanceContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxDistanceContacts_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxDistanceContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxFractureContacts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxFractureContacts = { "MaxFractureContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxFractureContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxFractureContacts_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxFractureContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContacts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContacts = { "MaxVolumeContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxVolumeContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContacts_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContactVerts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContactVerts = { "MaxVolumeContactVerts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxVolumeContactVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContactVerts_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContactVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxGlueConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxGlueConstraints = { "MaxGlueConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxGlueConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxGlueConstraints_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxGlueConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxPlaneConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxPlaneConstraints = { "MaxPlaneConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxPlaneConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxPlaneConstraints_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxPlaneConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxRigidBodyAngleConstraints = { "MaxRigidBodyAngleConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxRigidBodyAngleConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxBroadPhasePairs_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxBroadPhasePairs = { "MaxBroadPhasePairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConstraintsSetupParams, MaxBroadPhasePairs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxBroadPhasePairs_MetaData), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxBroadPhasePairs_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxDistanceContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxFractureContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxVolumeContactVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxGlueConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxPlaneConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxRigidBodyAngleConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewProp_MaxBroadPhasePairs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
		nullptr,
		&NewStructOps,
		"ConstraintsSetupParams",
		Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::PropPointers),
		sizeof(FConstraintsSetupParams),
		alignof(FConstraintsSetupParams),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintsSetupParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.InnerSingleton, Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintsSetupParams.InnerSingleton;
	}
	DEFINE_FUNCTION(AFEMFXRigidBodyScene::execCleanUpScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanUpScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXRigidBodyScene::execUpdateSceneRB)
	{
		P_GET_OBJECT(AFEMFXScene,Z_Param_scene);
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeStep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSceneRB(Z_Param_scene,Z_Param_timeStep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXRigidBodyScene::execResetScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScene();
		P_NATIVE_END;
	}
	void AFEMFXRigidBodyScene::StaticRegisterNativesAFEMFXRigidBodyScene()
	{
		UClass* Class = AFEMFXRigidBodyScene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanUpScene", &AFEMFXRigidBodyScene::execCleanUpScene },
			{ "ResetScene", &AFEMFXRigidBodyScene::execResetScene },
			{ "UpdateSceneRB", &AFEMFXRigidBodyScene::execUpdateSceneRB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXRigidBodyScene, nullptr, "CleanUpScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXRigidBodyScene, nullptr, "ResetScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics
	{
		struct FEMFXRigidBodyScene_eventUpdateSceneRB_Parms
		{
			AFEMFXScene* scene;
			float timeStep;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scene;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::NewProp_scene = { "scene", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXRigidBodyScene_eventUpdateSceneRB_Parms, scene), Z_Construct_UClass_AFEMFXScene_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::NewProp_timeStep = { "timeStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXRigidBodyScene_eventUpdateSceneRB_Parms, timeStep), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::NewProp_scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::NewProp_timeStep,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXRigidBodyScene, nullptr, "UpdateSceneRB", nullptr, nullptr, Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::FEMFXRigidBodyScene_eventUpdateSceneRB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::FEMFXRigidBodyScene_eventUpdateSceneRB_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFEMFXRigidBodyScene);
	UClass* Z_Construct_UClass_AFEMFXRigidBodyScene_NoRegister()
	{
		return AFEMFXRigidBodyScene::StaticClass();
	}
	struct Z_Construct_UClass_AFEMFXRigidBodyScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfRigidBodies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfRigidBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectPairTriPairs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectPairTriPairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectPairVolContactVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectPairVolContactVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJacobianSubmats_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJacobianSubmats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidConstraintsSetupParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidConstraintsSetupParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidFEMConstraintsSetupParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidFEMConstraintsSetupParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFEMFXRigidBodyScene_CleanUpScene, "CleanUpScene" }, // 2398729493
		{ &Z_Construct_UFunction_AFEMFXRigidBodyScene_ResetScene, "ResetScene" }, // 2112133049
		{ &Z_Construct_UFunction_AFEMFXRigidBodyScene_UpdateSceneRB, "UpdateSceneRB" }, // 1313042710
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FEMFXRigidBodyScene.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_NumberOfRigidBodies_MetaData[] = {
		{ "Category", "FEM" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"FEM\")\n//AMD::FmRigidBody* AddRigidBodyToScene(AFEMFXScene* scene, const AMD::FmRigidBody& inRigidBody);\n" },
#endif
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"FEM\")\nAMD::FmRigidBody* AddRigidBodyToScene(AFEMFXScene* scene, const AMD::FmRigidBody& inRigidBody);" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_NumberOfRigidBodies = { "NumberOfRigidBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, NumberOfRigidBodies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_NumberOfRigidBodies_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_NumberOfRigidBodies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairTriPairs = { "MaxObjectPairTriPairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, MaxObjectPairTriPairs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairVolContactVerts = { "MaxObjectPairVolContactVerts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, MaxObjectPairVolContactVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxJacobianSubmats_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxJacobianSubmats = { "MaxJacobianSubmats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, MaxJacobianSubmats), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxJacobianSubmats_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxJacobianSubmats_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidConstraintsSetupParams_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidConstraintsSetupParams = { "RigidConstraintsSetupParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, RigidConstraintsSetupParams), Z_Construct_UScriptStruct_FConstraintsSetupParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidConstraintsSetupParams_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidConstraintsSetupParams_MetaData) }; // 1471773243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidFEMConstraintsSetupParams_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidFEMConstraintsSetupParams = { "RigidFEMConstraintsSetupParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, RigidFEMConstraintsSetupParams), Z_Construct_UScriptStruct_FConstraintsSetupParams, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidFEMConstraintsSetupParams_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidFEMConstraintsSetupParams_MetaData) }; // 1471773243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXRigidBodyScene.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXRigidBodyScene, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_NumberOfRigidBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairTriPairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxObjectPairVolContactVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_MaxJacobianSubmats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidConstraintsSetupParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_RigidFEMConstraintsSetupParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFEMFXRigidBodyScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::ClassParams = {
		&AFEMFXRigidBodyScene::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::Class_MetaDataParams), Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFEMFXRigidBodyScene()
	{
		if (!Z_Registration_Info_UClass_AFEMFXRigidBodyScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFEMFXRigidBodyScene.OuterSingleton, Z_Construct_UClass_AFEMFXRigidBodyScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFEMFXRigidBodyScene.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<AFEMFXRigidBodyScene>()
	{
		return AFEMFXRigidBodyScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFEMFXRigidBodyScene);
	AFEMFXRigidBodyScene::~AFEMFXRigidBodyScene() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ScriptStructInfo[] = {
		{ FConstraintsSetupParams::StaticStruct, Z_Construct_UScriptStruct_FConstraintsSetupParams_Statics::NewStructOps, TEXT("ConstraintsSetupParams"), &Z_Registration_Info_UScriptStruct_ConstraintsSetupParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintsSetupParams), 1471773243U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFEMFXRigidBodyScene, AFEMFXRigidBodyScene::StaticClass, TEXT("AFEMFXRigidBodyScene"), &Z_Registration_Info_UClass_AFEMFXRigidBodyScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFEMFXRigidBodyScene), 2430681607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_489882977(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXRigidBodyScene_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
