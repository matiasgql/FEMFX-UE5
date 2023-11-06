// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FEMFXScene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AFEMActor;
class UFEMFXMeshComponent;
#ifdef FEM_FEMFXScene_generated_h
#error "FEMFXScene.generated.h already included, missing '#pragma once' in FEMFXScene.h"
#endif
#define FEM_FEMFXScene_generated_h

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_SPARSE_DATA
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_RPC_WRAPPERS \
	virtual void ResetScene_Implementation(); \
 \
	DECLARE_FUNCTION(execResetScene); \
	DECLARE_FUNCTION(execSetGroupsCanCollide); \
	DECLARE_FUNCTION(execCreateSleepingGroup); \
	DECLARE_FUNCTION(execSetAllSleeping); \
	DECLARE_FUNCTION(execRemoveActor); \
	DECLARE_FUNCTION(execAddToResetList); \
	DECLARE_FUNCTION(execAllocateNewMesh); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_CALLBACK_WRAPPERS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAFEMFXScene(); \
	friend struct Z_Construct_UClass_AFEMFXScene_Statics; \
public: \
	DECLARE_CLASS(AFEMFXScene, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FEM"), NO_API) \
	DECLARE_SERIALIZER(AFEMFXScene)


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFEMFXScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFEMFXScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFEMFXScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFEMFXScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFEMFXScene(AFEMFXScene&&); \
	NO_API AFEMFXScene(const AFEMFXScene&); \
public: \
	NO_API virtual ~AFEMFXScene();


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_22_PROLOG
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_SPARSE_DATA \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_RPC_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_CALLBACK_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_INCLASS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEM_API UClass* StaticClass<class AFEMFXScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXScene_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
