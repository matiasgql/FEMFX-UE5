// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMEditor/Classes/FEMActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMActorFactory() {}
// Cross Module References
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMActorFactory();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_FEMEditor();
// End Cross Module References
	void UFEMActorFactory::StaticRegisterNativesUFEMActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMActorFactory);
	UClass* Z_Construct_UClass_UFEMActorFactory_NoRegister()
	{
		return UFEMActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFEMActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FEMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMActorFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "FEMActorFactory.h" },
		{ "ModuleRelativePath", "Classes/FEMActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMActorFactory_Statics::ClassParams = {
		&UFEMActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMActorFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFEMActorFactory()
	{
		if (!Z_Registration_Info_UClass_UFEMActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMActorFactory.OuterSingleton, Z_Construct_UClass_UFEMActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMActorFactory.OuterSingleton;
	}
	template<> FEMEDITOR_API UClass* StaticClass<UFEMActorFactory>()
	{
		return UFEMActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMActorFactory);
	UFEMActorFactory::~UFEMActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMActorFactory, UFEMActorFactory::StaticClass, TEXT("UFEMActorFactory"), &Z_Registration_Info_UClass_UFEMActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMActorFactory), 1721967870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMActorFactory_h_1072201295(TEXT("/Script/FEMEditor"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
