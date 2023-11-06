// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMFXDebugActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMFXDebugActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEM_API UClass* Z_Construct_UClass_AFEMFXDebugActor();
	FEM_API UClass* Z_Construct_UClass_AFEMFXDebugActor_NoRegister();
	FEM_API UClass* Z_Construct_UClass_AFEMFXScene_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	void AFEMFXDebugActor::StaticRegisterNativesAFEMFXDebugActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFEMFXDebugActor);
	UClass* Z_Construct_UClass_AFEMFXDebugActor_NoRegister()
	{
		return AFEMFXDebugActor::StaticClass();
	}
	struct Z_Construct_UClass_AFEMFXDebugActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFEMFXDebugActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXDebugActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMFXDebugActor.h" },
		{ "ModuleRelativePath", "Classes/FEMFXDebugActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene_MetaData[] = {
		{ "Category", "FEM" },
		{ "InlineEditCoditionToggle", "" },
		{ "ModuleRelativePath", "Classes/FEMFXDebugActor.h" },
	};
#endif
	void Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene_SetBit(void* Obj)
	{
		((AFEMFXDebugActor*)Obj)->bOverride_FEMScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene = { "bOverride_FEMScene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFEMFXDebugActor), &Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene_MetaData), Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_Scene_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bOverride_FEMScene" },
		{ "ModuleRelativePath", "Classes/FEMFXDebugActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXDebugActor, Scene), Z_Construct_UClass_AFEMFXScene_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_Scene_MetaData), Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_Scene_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_SceneName_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bOverride_FEMScene" },
		{ "ModuleRelativePath", "Classes/FEMFXDebugActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_SceneName = { "SceneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFEMFXDebugActor, SceneName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_SceneName_MetaData), Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_SceneName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "FEM" },
		{ "ModuleRelativePath", "Classes/FEMFXDebugActor.h" },
	};
#endif
	void Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((AFEMFXDebugActor*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFEMFXDebugActor), &Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable_MetaData), Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFEMFXDebugActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bOverride_FEMScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_SceneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFEMFXDebugActor_Statics::NewProp_bEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFEMFXDebugActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFEMFXDebugActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFEMFXDebugActor_Statics::ClassParams = {
		&AFEMFXDebugActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFEMFXDebugActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFEMFXDebugActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMFXDebugActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFEMFXDebugActor()
	{
		if (!Z_Registration_Info_UClass_AFEMFXDebugActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFEMFXDebugActor.OuterSingleton, Z_Construct_UClass_AFEMFXDebugActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFEMFXDebugActor.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<AFEMFXDebugActor>()
	{
		return AFEMFXDebugActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFEMFXDebugActor);
	AFEMFXDebugActor::~AFEMFXDebugActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXDebugActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXDebugActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFEMFXDebugActor, AFEMFXDebugActor::StaticClass, TEXT("AFEMFXDebugActor"), &Z_Registration_Info_UClass_AFEMFXDebugActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFEMFXDebugActor), 1773030247U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXDebugActor_h_3629976563(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXDebugActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXDebugActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
