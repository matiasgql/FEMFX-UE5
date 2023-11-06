// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FEMActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFEMFXMeshComponent;
struct FAngleConstraintInfo;
struct FGlueConstraintInfo;
struct FPlaneConstraintInfo;
#ifdef FEM_FEMActor_generated_h
#error "FEMActor.generated.h already included, missing '#pragma once' in FEMActor.h"
#endif
#define FEM_FEMActor_generated_h

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFEMMatrix_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FFEMMatrix>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAngleConstraintInfo_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FAngleConstraintInfo>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGlueConstraintInfo_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FGlueConstraintInfo>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaneInfo_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FPlaneInfo>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_173_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaneConstraintInfo_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FPlaneConstraintInfo>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_SPARSE_DATA
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_RPC_WRAPPERS \
	virtual void ResetMaterial_Implementation(); \
	virtual void PostFEMLoad_Implementation(); \
	virtual void FEMLoad_Implementation(); \
	virtual void PreFEMLoad_Implementation(); \
	virtual void UpdateConstraints_Implementation(); \
	virtual void SetupConstraints_Implementation(); \
	virtual void SetupRigidBodies_Implementation(); \
 \
	DECLARE_FUNCTION(execUpdatePlaneConstraint); \
	DECLARE_FUNCTION(execUpdateGlueConstraint); \
	DECLARE_FUNCTION(execUpdateAngleConstraint); \
	DECLARE_FUNCTION(execGetPlaneConstraintByIndex); \
	DECLARE_FUNCTION(execGetPlaneConstraintsByName); \
	DECLARE_FUNCTION(execGetGlueConstraintByIndex); \
	DECLARE_FUNCTION(execGetGlueConstraintsByName); \
	DECLARE_FUNCTION(execGetAngleConstraintByIndex); \
	DECLARE_FUNCTION(execGetAngleConstraintsByName); \
	DECLARE_FUNCTION(execGetComponentByName); \
	DECLARE_FUNCTION(execResetMaterial); \
	DECLARE_FUNCTION(execPostFEMLoad); \
	DECLARE_FUNCTION(execFEMLoad); \
	DECLARE_FUNCTION(execPreFEMLoad); \
	DECLARE_FUNCTION(execUpdateConstraints); \
	DECLARE_FUNCTION(execSetupConstraints); \
	DECLARE_FUNCTION(execSetupRigidBodies); \
	DECLARE_FUNCTION(execDestroyed); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_CALLBACK_WRAPPERS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_INCLASS \
private: \
	static void StaticRegisterNativesAFEMActor(); \
	friend struct Z_Construct_UClass_AFEMActor_Statics; \
public: \
	DECLARE_CLASS(AFEMActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FEM"), NO_API) \
	DECLARE_SERIALIZER(AFEMActor)


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFEMActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFEMActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFEMActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFEMActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFEMActor(AFEMActor&&); \
	NO_API AFEMActor(const AFEMActor&); \
public: \
	NO_API virtual ~AFEMActor();


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_220_PROLOG
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_SPARSE_DATA \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_RPC_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_CALLBACK_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_INCLASS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEM_API UClass* StaticClass<class AFEMActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
