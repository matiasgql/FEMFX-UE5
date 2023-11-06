// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FEMFXMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFEMFXTetMeshParameters;
struct FEMCollision;
struct FFEMFracture;
struct FFEMFXMeshBarycentricPos;
struct FNameIndexMap;
struct FTetInfo;
struct FTetQueryData;
struct FTetVertex;
#ifdef FEM_FEMFXMeshComponent_generated_h
#error "FEMFXMeshComponent.generated.h already included, missing '#pragma once' in FEMFXMeshComponent.h"
#endif
#define FEM_FEMFXMeshComponent_generated_h

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTetQueryData_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FTetQueryData>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEMCollision_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FEMCollision>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_160_DELEGATE \
FEM_API void FOnFEMCollision_DelegateWrapper(const FMulticastScriptDelegate& OnFEMCollision, FEMCollision Collision);


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFEMFracture_Statics; \
	FEM_API static class UScriptStruct* StaticStruct();


template<> FEM_API UScriptStruct* StaticStruct<struct FFEMFracture>();

#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_177_DELEGATE \
FEM_API void FOnFEMFracture_DelegateWrapper(const FMulticastScriptDelegate& OnFEMFracture, const TArray<FFEMFracture>& Fracture);


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_SPARSE_DATA
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_RPC_WRAPPERS \
	virtual void OnHit_Implementation(FEMCollision otherComponent); \
 \
	DECLARE_FUNCTION(execLoadSimObject); \
	DECLARE_FUNCTION(execPostEditSceneProxyUpdate); \
	DECLARE_FUNCTION(execResetFromRestPosition); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execApplyExplosionForce); \
	DECLARE_FUNCTION(execUpdateSceneProxy); \
	DECLARE_FUNCTION(execSetTetKinematic); \
	DECLARE_FUNCTION(execGetTetsByTag); \
	DECLARE_FUNCTION(execGetTagByName); \
	DECLARE_FUNCTION(execGetTetVertById); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execLoadResource); \
	DECLARE_FUNCTION(execSetTetMaterial); \
	DECLARE_FUNCTION(execSetTetMaterial_NoFracture); \
	DECLARE_FUNCTION(execSetTetMeshMaterial); \
	DECLARE_FUNCTION(execGetDestructionValue); \
	DECLARE_FUNCTION(execGetTetMeshCenterOfMass); \
	DECLARE_FUNCTION(execGetVertPositionByIndex); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execUpdateMeshSectionIndices); \
	DECLARE_FUNCTION(execUpdateMeshSectionVertexBaryPositions); \
	DECLARE_FUNCTION(execUpdateMeshSectionVertexBaryPosIds); \
	DECLARE_FUNCTION(execTetMeshRadialQuery); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetTetMeshPositionAndRotation); \
	DECLARE_FUNCTION(execCreateFEMMeshFromTetMesh); \
	DECLARE_FUNCTION(execOnComponentDestroyed);


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_ACCESSORS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_CALLBACK_WRAPPERS
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUFEMFXMeshComponent(); \
	friend struct Z_Construct_UClass_UFEMFXMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UFEMFXMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FEM"), NO_API) \
	DECLARE_SERIALIZER(UFEMFXMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UFEMFXMeshComponent*>(this); }


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFEMFXMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFEMFXMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFEMFXMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFEMFXMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFEMFXMeshComponent(UFEMFXMeshComponent&&); \
	NO_API UFEMFXMeshComponent(const UFEMFXMeshComponent&); \
public: \
	NO_API virtual ~UFEMFXMeshComponent();


#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_183_PROLOG
#define FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_SPARSE_DATA \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_RPC_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_ACCESSORS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_CALLBACK_WRAPPERS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_INCLASS \
	FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FEM_API UClass* StaticClass<class UFEMFXMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_OneDrive_Documentos_Unreal_Projects_FEM_UE5_Plugins_FEM_Source_FEM_Classes_FEMFXMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
