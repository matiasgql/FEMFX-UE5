// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMBlockActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMBlockActor() {}
// Cross Module References
	FEM_API UClass* Z_Construct_UClass_AFEMActor();
	FEM_API UClass* Z_Construct_UClass_AFEMBlockActor();
	FEM_API UClass* Z_Construct_UClass_AFEMBlockActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FEM();
// End Cross Module References
	void AFEMBlockActor::StaticRegisterNativesAFEMBlockActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFEMBlockActor);
	UClass* Z_Construct_UClass_AFEMBlockActor_NoRegister()
	{
		return AFEMBlockActor::StaticClass();
	}
	struct Z_Construct_UClass_AFEMBlockActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFEMBlockActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFEMActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FEM,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMBlockActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFEMBlockActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "FEM" },
		{ "IncludePath", "FEMBlockActor.h" },
		{ "ModuleRelativePath", "Classes/FEMBlockActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFEMBlockActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFEMBlockActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFEMBlockActor_Statics::ClassParams = {
		&AFEMBlockActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFEMBlockActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFEMBlockActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFEMBlockActor()
	{
		if (!Z_Registration_Info_UClass_AFEMBlockActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFEMBlockActor.OuterSingleton, Z_Construct_UClass_AFEMBlockActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFEMBlockActor.OuterSingleton;
	}
	template<> FEM_API UClass* StaticClass<AFEMBlockActor>()
	{
		return AFEMBlockActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFEMBlockActor);
	AFEMBlockActor::~AFEMBlockActor() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMBlockActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMBlockActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFEMBlockActor, AFEMBlockActor::StaticClass, TEXT("AFEMBlockActor"), &Z_Registration_Info_UClass_AFEMBlockActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFEMBlockActor), 3771345074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMBlockActor_h_2594742526(TEXT("/Script/FEM"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMBlockActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMBlockActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
