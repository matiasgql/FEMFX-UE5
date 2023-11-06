// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FEMEditor/Classes/FEMMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFEMMeshFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMMeshFactory();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMMeshFactory_NoRegister();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMMeshImportData();
	FEMEDITOR_API UClass* Z_Construct_UClass_UFEMMeshImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_FEMEditor();
// End Cross Module References
	void UFEMMeshImportData::StaticRegisterNativesUFEMMeshImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMMeshImportData);
	UClass* Z_Construct_UClass_UFEMMeshImportData_NoRegister()
	{
		return UFEMMeshImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFEMMeshImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProceduralGenerate_MetaData[];
#endif
		static void NewProp_bProceduralGenerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProceduralGenerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Randomize_MetaData[];
#endif
		static void NewProp_Randomize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Randomize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCubesX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCubesX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCubesY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCubesY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCubesZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCubesZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CubeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsWoodPanel_MetaData[];
#endif
		static void NewProp_IsWoodPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWoodPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMMeshImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_FEMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMMeshFactory.h" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate_MetaData[] = {
		{ "Category", "FEM" },
		{ "InlineEditCoditionToggle", "" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	void Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate_SetBit(void* Obj)
	{
		((UFEMMeshImportData*)Obj)->bProceduralGenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate = { "bProceduralGenerate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMMeshImportData), &Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	void Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize_SetBit(void* Obj)
	{
		((UFEMMeshImportData*)Obj)->Randomize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize = { "Randomize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMMeshImportData), &Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesX_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesX = { "NumCubesX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, NumCubesX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesX_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesY_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesY = { "NumCubesY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, NumCubesY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesY_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesZ_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesZ = { "NumCubesZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, NumCubesZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesZ_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeX_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeX = { "CubeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, CubeX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeX_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeY_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeY = { "CubeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, CubeY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeY_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeZ_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeZ = { "CubeZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, CubeZ), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeZ_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeZ_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFEMMeshImportData, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Scale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel_MetaData[] = {
		{ "Category", "FEM" },
		{ "editcondition", "bProceduralGenerate" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	void Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel_SetBit(void* Obj)
	{
		((UFEMMeshImportData*)Obj)->IsWoodPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel = { "IsWoodPanel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFEMMeshImportData), &Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel_MetaData), Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFEMMeshImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_bProceduralGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Randomize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_NumCubesZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_CubeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFEMMeshImportData_Statics::NewProp_IsWoodPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMMeshImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMMeshImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMMeshImportData_Statics::ClassParams = {
		&UFEMMeshImportData::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFEMMeshImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMMeshImportData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshImportData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFEMMeshImportData()
	{
		if (!Z_Registration_Info_UClass_UFEMMeshImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMMeshImportData.OuterSingleton, Z_Construct_UClass_UFEMMeshImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMMeshImportData.OuterSingleton;
	}
	template<> FEMEDITOR_API UClass* StaticClass<UFEMMeshImportData>()
	{
		return UFEMMeshImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMMeshImportData);
	UFEMMeshImportData::~UFEMMeshImportData() {}
	void UFEMMeshFactory::StaticRegisterNativesUFEMMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFEMMeshFactory);
	UClass* Z_Construct_UClass_UFEMMeshFactory_NoRegister()
	{
		return UFEMMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFEMMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFEMMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FEMEditor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFEMMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FEMMeshFactory.h" },
		{ "ModuleRelativePath", "Classes/FEMMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFEMMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFEMMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFEMMeshFactory_Statics::ClassParams = {
		&UFEMMeshFactory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFEMMeshFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFEMMeshFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFEMMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UFEMMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFEMMeshFactory.OuterSingleton, Z_Construct_UClass_UFEMMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFEMMeshFactory.OuterSingleton;
	}
	template<> FEMEDITOR_API UClass* StaticClass<UFEMMeshFactory>()
	{
		return UFEMMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFEMMeshFactory);
	UFEMMeshFactory::~UFEMMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFEMMeshImportData, UFEMMeshImportData::StaticClass, TEXT("UFEMMeshImportData"), &Z_Registration_Info_UClass_UFEMMeshImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMMeshImportData), 4061882283U) },
		{ Z_Construct_UClass_UFEMMeshFactory, UFEMMeshFactory::StaticClass, TEXT("UFEMMeshFactory"), &Z_Registration_Info_UClass_UFEMMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFEMMeshFactory), 410864538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMMeshFactory_h_1009153916(TEXT("/Script/FEMEditor"),
		Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEMEditor_Classes_FEMMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
