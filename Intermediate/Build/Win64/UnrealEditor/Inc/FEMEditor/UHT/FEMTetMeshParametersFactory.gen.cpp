// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMEditor/Classes/FEMTetMeshParametersFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMTetMeshParametersFactory() {}
// Cross Module References
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMTetMeshParametersFactory();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMTetMeshParametersFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FEMEditor();
// End Cross Module References
	void UFEMTetMeshParametersFactory::StaticRegisterNativesUFEMTetMeshParametersFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMTetMeshParametersFactory);
	UClass* Z_Construct_UClass_UFEMTetMeshParametersFactory_NoRegister()
	{
		return UFEMTetMeshParametersFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FEMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMTetMeshParametersFactory.h" },
		{ "ModuleRelativePath", "Classes/FEMTetMeshParametersFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMTetMeshParametersFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::ClassParams = {
		&UFEMTetMeshParametersFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFEMTetMeshParametersFactory()
	{
		if (!Z_Registration_Info_UClass_UFEMTetMeshParametersFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMTetMeshParametersFactory.OuterSingleton, Z_Construct_UClass_UFEMTetMeshParametersFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMTetMeshParametersFactory.OuterSingleton;
	}
	template<> FEMEDITOR_API UClass* StaticClass<UFEMTetMeshParametersFactory>()
	{
		return UFEMTetMeshParametersFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMTetMeshParametersFactory);
	UFEMTetMeshParametersFactory::~UFEMTetMeshParametersFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMTetMeshParametersFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMTetMeshParametersFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMTetMeshParametersFactory, UFEMTetMeshParametersFactory::StaticClass, TEXT("UFEMTetMeshParametersFactory"), &Z_Registration_Info_UClass_UFEMTetMeshParametersFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMTetMeshParametersFactory), 4042301372U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMTetMeshParametersFactory_h_55487494(TEXT("/Script/FEMEditor"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMTetMeshParametersFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMTetMeshParametersFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
