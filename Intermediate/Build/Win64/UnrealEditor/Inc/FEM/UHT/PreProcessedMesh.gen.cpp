// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PreProcessedMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreProcessedMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FEM_API UClass* Z_Construct_UClass_APreProcessedMeshHelper();
	FEM_API UClass* Z_Construct_UClass_APreProcessedMeshHelper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	void APreProcessedMeshHelper::StaticRegisterNativesAPreProcessedMeshHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreProcessedMeshHelper);
	UClass* Z_Construct_UClass_APreProcessedMeshHelper_NoRegister()
	{
		return APreProcessedMeshHelper::StaticClass();
	}
	struct Z_Construct_UClass_APreProcessedMeshHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreProcessedMeshHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APreProcessedMeshHelper_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreProcessedMeshHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PreProcessedMesh.h" },
		{ "ModuleRelativePath", "Classes/PreProcessedMesh.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreProcessedMeshHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreProcessedMeshHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreProcessedMeshHelper_Statics::ClassParams = {
		&APreProcessedMeshHelper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APreProcessedMeshHelper_Statics::Class_MetaDataParams), Z_Construct_UClass_APreProcessedMeshHelper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APreProcessedMeshHelper()
	{
		if (!Z_Registration_Info_UClass_APreProcessedMeshHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreProcessedMeshHelper.OuterSingleton, Z_Construct_UClass_APreProcessedMeshHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreProcessedMeshHelper.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<APreProcessedMeshHelper>()
	{
		return APreProcessedMeshHelper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreProcessedMeshHelper);
	APreProcessedMeshHelper::~APreProcessedMeshHelper() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_PreProcessedMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_PreProcessedMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreProcessedMeshHelper, APreProcessedMeshHelper::StaticClass, TEXT("APreProcessedMeshHelper"), &Z_Registration_Info_UClass_APreProcessedMeshHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreProcessedMeshHelper), 2541418936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_PreProcessedMesh_h_1662151356(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_PreProcessedMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_PreProcessedMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
