// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FEMFXTetMeshParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FEM_FEMFXTetMeshParameters_generated_h
#error "FEMFXTetMeshParameters.generated.h already included, missing '#pragma once' in FEMFXTetMeshParameters.h"
#endif
#define FEM_FEMFXTetMeshParameters_generated_h

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_SPARSE_DATA
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_RPC_WRAPPERS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUFEMFXTetMeshParameters(); \
	friend struct Z_Construct_UClass_UFEMFXTetMeshParameters_Statics; \
public: \
	DECLARE_CLASS(UFEMFXTetMeshParameters, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FEM"), NO_API) \
	DECLARE_SERIALIZER(UFEMFXTetMeshParameters)


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFEMFXTetMeshParameters(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFEMFXTetMeshParameters) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFEMFXTetMeshParameters); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFEMFXTetMeshParameters); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFEMFXTetMeshParameters(UFEMFXTetMeshParameters&&); \
	NO_API UFEMFXTetMeshParameters(const UFEMFXTetMeshParameters&); \
public: \
	NO_API virtual ~UFEMFXTetMeshParameters();


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_25_PROLOG
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_SPARSE_DATA \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_RPC_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_INCLASS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEM_API UClass* StaticClass<class UFEMFXTetMeshParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXTetMeshParameters_h


#define FOREACH_ENUM_ETETPARAMETERTYPE(op) \
	op(ETetParameterType::FEM_None) \
	op(ETetParameterType::FEM_Wood) \
	op(ETetParameterType::FEM_Metal) \
	op(ETetParameterType::FEM_Stone) \
	op(ETetParameterType::FEM_Rubber) 

enum class ETetParameterType : uint8;
template<> struct TIsUEnumClass<ETetParameterType> { enum { Value = true }; };
template<> FEM_API UEnum* StaticEnum<ETetParameterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
