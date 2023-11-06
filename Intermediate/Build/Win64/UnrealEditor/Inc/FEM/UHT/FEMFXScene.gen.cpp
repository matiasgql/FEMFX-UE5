// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMFXScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMFXScene() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMActor_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMFXRigidBodyScene_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene_NoRegister();
	FEM_API UClass* Z_Construct_UClass_UFEMFXMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	DEFINE_FUNCTION(AFEMFXScene::execResetScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScene_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execSetGroupsCanCollide)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_GET_PROPERTY(FIntProperty,Z_Param_j);
		P_GET_UBOOL(Z_Param_canCollide);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGroupsCanCollide(Z_Param_i,Z_Param_j,Z_Param_canCollide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execCreateSleepingGroup)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSleepingGroup(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execSetAllSleeping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllSleeping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execRemoveActor)
	{
		P_GET_OBJECT(AFEMActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveActor(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execAddToResetList)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToResetList(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execAllocateNewMesh)
	{
		P_GET_OBJECT(UFEMFXMeshComponent,Z_Param_meshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllocateNewMesh(Z_Param_meshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFEMFXScene::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	static FName NAME_AFEMFXScene_ResetScene = FName(TEXT("ResetScene"));
	void AFEMFXScene::ResetScene()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFEMFXScene_ResetScene),NULL);
	}
	void AFEMFXScene::StaticRegisterNativesAFEMFXScene()
	{
		UClass* Class = AFEMFXScene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToResetList", &AFEMFXScene::execAddToResetList },
			{ "AllocateNewMesh", &AFEMFXScene::execAllocateNewMesh },
			{ "CreateSleepingGroup", &AFEMFXScene::execCreateSleepingGroup },
			{ "Initialize", &AFEMFXScene::execInitialize },
			{ "RemoveActor", &AFEMFXScene::execRemoveActor },
			{ "ResetScene", &AFEMFXScene::execResetScene },
			{ "SetAllSleeping", &AFEMFXScene::execSetAllSleeping },
			{ "SetGroupsCanCollide", &AFEMFXScene::execSetGroupsCanCollide },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics
	{
		struct FEMFXScene_eventAddToResetList_Parms
		{
			AActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventAddToResetList_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "AddToResetList", nullptr, nullptr, Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::FEMFXScene_eventAddToResetList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::FEMFXScene_eventAddToResetList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXScene_AddToResetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_AddToResetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics
	{
		struct FEMFXScene_eventAllocateNewMesh_Parms
		{
			UFEMFXMeshComponent* meshComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_meshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_meshComponent = { "meshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventAllocateNewMesh_Parms, meshComponent), Z_Construct_UClass_UFEMFXMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_meshComponent_MetaData), Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_meshComponent_MetaData) };
	void Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FEMFXScene_eventAllocateNewMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXScene_eventAllocateNewMesh_Parms), &Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_meshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "AllocateNewMesh", nullptr, nullptr, Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::FEMFXScene_eventAllocateNewMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::FEMFXScene_eventAllocateNewMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics
	{
		struct FEMFXScene_eventCreateSleepingGroup_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventCreateSleepingGroup_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors_MetaData), Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::NewProp_Actors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "CreateSleepingGroup", nullptr, nullptr, Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::FEMFXScene_eventCreateSleepingGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::FEMFXScene_eventCreateSleepingGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_Initialize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMFXScene_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics
	{
		struct FEMFXScene_eventRemoveActor_Parms
		{
			AFEMActor* actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventRemoveActor_Parms, actor), Z_Construct_UClass_AFEMActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "RemoveActor", nullptr, nullptr, Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::FEMFXScene_eventRemoveActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::FEMFXScene_eventRemoveActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXScene_RemoveActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_RemoveActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "ResetScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMFXScene_ResetScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_ResetScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "SetAllSleeping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFEMFXScene_SetAllSleeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_SetAllSleeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics
	{
		struct FEMFXScene_eventSetGroupsCanCollide_Parms
		{
			int32 i;
			int32 j;
			bool canCollide;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FIntPropertyParams NewProp_j;
		static void NewProp_canCollide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canCollide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventSetGroupsCanCollide_Parms, i), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_j = { "j", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEMFXScene_eventSetGroupsCanCollide_Parms, j), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_canCollide_SetBit(void* Obj)
	{
		((FEMFXScene_eventSetGroupsCanCollide_Parms*)Obj)->canCollide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_canCollide = { "canCollide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FEMFXScene_eventSetGroupsCanCollide_Parms), &Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_canCollide_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_i,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_j,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::NewProp_canCollide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::Function_MetaDataParams[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFEMFXScene, nullptr, "SetGroupsCanCollide", nullptr, nullptr, Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::FEMFXScene_eventSetGroupsCanCollide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::FEMFXScene_eventSetGroupsCanCollide_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFEMFXScene);
	UClass* Z_Construct_UClass_AFEMFXScene_NoRegister()
	{
		return AFEMFXScene::StaticClass();
	}
	struct Z_Construct_UClass_AFEMFXScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMultiThreaded_MetaData[];
#endif
		static void NewProp_bIsMultiThreaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMultiThreaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTetMeshBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTetMeshBuffers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTetMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTetMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRigidBodies_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRigidBodies;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectPairTriPairs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectPairTriPairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectPairVolContactVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxObjectPairVolContactVerts;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeformationConstraints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDeformationConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBroadPhasePairs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBroadPhasePairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxUserBroadPhasePairs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxUserBroadPhasePairs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxJacobianSubmats_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxJacobianSubmats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWorkerThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWorkerThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowTick_MetaData[];
#endif
		static void NewProp_bAllowTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowTick;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_ComponentsAllocated_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ComponentsAllocated_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_m_ComponentsAllocated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RigidBodyScene;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FEMActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FEMActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FEMActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minPlaneConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_minPlaneConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxPlaneConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_maxPlaneConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionDistanceContacts_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionDistanceContacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceContactsPerObjectPair_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceContactsPerObjectPair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCollisionVolumeContacts_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCollisionVolumeContacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxVolumeContactsPerObjectPair_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVolumeContactsPerObjectPair;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinContactRelativeVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinContactRelativeVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFEMFXScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFEMFXScene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFEMFXScene_AddToResetList, "AddToResetList" }, // 3259818525
		{ &Z_Construct_UFunction_AFEMFXScene_AllocateNewMesh, "AllocateNewMesh" }, // 1406898323
		{ &Z_Construct_UFunction_AFEMFXScene_CreateSleepingGroup, "CreateSleepingGroup" }, // 3989661291
		{ &Z_Construct_UFunction_AFEMFXScene_Initialize, "Initialize" }, // 37775800
		{ &Z_Construct_UFunction_AFEMFXScene_RemoveActor, "RemoveActor" }, // 4159488358
		{ &Z_Construct_UFunction_AFEMFXScene_ResetScene, "ResetScene" }, // 162175928
		{ &Z_Construct_UFunction_AFEMFXScene_SetAllSleeping, "SetAllSleeping" }, // 3524868223
		{ &Z_Construct_UFunction_AFEMFXScene_SetGroupsCanCollide, "SetGroupsCanCollide" }, // 1184354067
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FEMFXScene.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
		{ "ShortTooltip", "FEMScene is required to create FEM Meshes. Manages the Buffer data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	void Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded_SetBit(void* Obj)
	{
		((AFEMFXScene*)Obj)->bIsMultiThreaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded = { "bIsMultiThreaded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFEMFXScene), &Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshBuffers_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshBuffers = { "MaxTetMeshBuffers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxTetMeshBuffers), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshBuffers_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshBuffers_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshes_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshes = { "MaxTetMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxTetMeshes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshes_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodies_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodies = { "MaxRigidBodies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxRigidBodies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodies_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContacts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContacts = { "MaxDistanceContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxDistanceContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContacts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxFractureContacts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxFractureContacts = { "MaxFractureContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxFractureContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxFractureContacts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxFractureContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContacts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContacts = { "MaxVolumeContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxVolumeContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContacts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactVerts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactVerts = { "MaxVolumeContactVerts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxVolumeContactVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactVerts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairTriPairs = { "MaxObjectPairTriPairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxObjectPairTriPairs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairTriPairs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairVolContactVerts = { "MaxObjectPairVolContactVerts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxObjectPairVolContactVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairVolContactVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxGlueConstraints_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxGlueConstraints = { "MaxGlueConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxGlueConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxGlueConstraints_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxGlueConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxPlaneConstraints_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxPlaneConstraints = { "MaxPlaneConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxPlaneConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxPlaneConstraints_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxPlaneConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodyAngleConstraints = { "MaxRigidBodyAngleConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxRigidBodyAngleConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodyAngleConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDeformationConstraints_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDeformationConstraints = { "MaxDeformationConstraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxDeformationConstraints), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDeformationConstraints_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDeformationConstraints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxBroadPhasePairs_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxBroadPhasePairs = { "MaxBroadPhasePairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxBroadPhasePairs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxBroadPhasePairs_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxBroadPhasePairs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxUserBroadPhasePairs_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxUserBroadPhasePairs = { "MaxUserBroadPhasePairs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxUserBroadPhasePairs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxUserBroadPhasePairs_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxUserBroadPhasePairs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVerts_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVerts = { "MaxVerts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxVerts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVerts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVerts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxJacobianSubmats_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxJacobianSubmats = { "MaxJacobianSubmats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxJacobianSubmats), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxJacobianSubmats_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxJacobianSubmats_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_NumWorkerThreads_MetaData[] = {
		{ "Category", "Setup Parameters" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_NumWorkerThreads = { "NumWorkerThreads", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, NumWorkerThreads), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_NumWorkerThreads_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_NumWorkerThreads_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_Name_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	void Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick_SetBit(void* Obj)
	{
		((AFEMFXScene*)Obj)->bAllowTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick = { "bAllowTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFEMFXScene), &Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated_Inner = { "m_ComponentsAllocated", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFEMFXMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated_MetaData[] = {
		{ "Category", "FEM" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated = { "m_ComponentsAllocated", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, m_ComponentsAllocated), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_RigidBodyScene_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_RigidBodyScene = { "RigidBodyScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, RigidBodyScene), Z_Construct_UClass_AFEMFXRigidBodyScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_RigidBodyScene_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_RigidBodyScene_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors_Inner = { "FEMActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFEMActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors = { "FEMActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, FEMActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxSteps_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxSteps = { "MaxSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxSteps), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxSteps_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxSteps_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_minPlaneConstraint_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_minPlaneConstraint = { "minPlaneConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, minPlaneConstraint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_minPlaneConstraint_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_minPlaneConstraint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_maxPlaneConstraint_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_maxPlaneConstraint = { "maxPlaneConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, maxPlaneConstraint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_maxPlaneConstraint_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_maxPlaneConstraint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionDistanceContacts_MetaData[] = {
		{ "Category", "FEMCollision" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionDistanceContacts = { "MaxCollisionDistanceContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxCollisionDistanceContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionDistanceContacts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionDistanceContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContactsPerObjectPair_MetaData[] = {
		{ "Category", "FEMCollision" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContactsPerObjectPair = { "MaxDistanceContactsPerObjectPair", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxDistanceContactsPerObjectPair), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContactsPerObjectPair_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContactsPerObjectPair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionVolumeContacts_MetaData[] = {
		{ "Category", "FEMCollision" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionVolumeContacts = { "MaxCollisionVolumeContacts", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxCollisionVolumeContacts), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionVolumeContacts_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionVolumeContacts_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactsPerObjectPair_MetaData[] = {
		{ "Category", "FEMCollision" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactsPerObjectPair = { "MaxVolumeContactsPerObjectPair", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MaxVolumeContactsPerObjectPair), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactsPerObjectPair_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactsPerObjectPair_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MinContactRelativeVelocity_MetaData[] = {
		{ "Category", "FEMCollision" },
		{ "ModuleRelativePath", "Classes/FEMFXScene.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MinContactRelativeVelocity = { "MinContactRelativeVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXScene, MinContactRelativeVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MinContactRelativeVelocity_MetaData), Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MinContactRelativeVelocity_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFEMFXScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bIsMultiThreaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshBuffers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxTetMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxFractureContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairTriPairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxObjectPairVolContactVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxGlueConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxPlaneConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxRigidBodyAngleConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDeformationConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxBroadPhasePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxUserBroadPhasePairs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxJacobianSubmats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_NumWorkerThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_bAllowTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_m_ComponentsAllocated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_RigidBodyScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_FEMActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_minPlaneConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_maxPlaneConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionDistanceContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxDistanceContactsPerObjectPair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxCollisionVolumeContacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MaxVolumeContactsPerObjectPair,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXScene_Statics::NewProp_MinContactRelativeVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFEMFXScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFEMFXScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFEMFXScene_Statics::ClassParams = {
		&AFEMFXScene::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFEMFXScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::Class_MetaDataParams), Z_Construct_UClass_AFEMFXScene_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXScene_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFEMFXScene()
	{
		if (!Z_Registration_Info_UClass_AFEMFXScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFEMFXScene.OuterSingleton, Z_Construct_UClass_AFEMFXScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFEMFXScene.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<AFEMFXScene>()
	{
		return AFEMFXScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFEMFXScene);
	AFEMFXScene::~AFEMFXScene() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFEMFXScene, AFEMFXScene::StaticClass, TEXT("AFEMFXScene"), &Z_Registration_Info_UClass_AFEMFXScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFEMFXScene), 3140207519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_1739808163(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
