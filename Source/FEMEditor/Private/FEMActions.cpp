//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMActions.h"

#include "FEMResource.h"
#include "FEMFXTetMeshParameters.h"
#include "FEMMesh.h"



uint32 FFEMAssetActions::GetCategories()
{
	return EAssetTypeCategories::Physics;
}

FText FFEMAssetActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FiniteElementMaterial", "Finite Element Material");
}

FColor FFEMAssetActions::GetTypeColor() const
{
	return FColor::Red;
}

UClass* FFEMAssetActions::GetSupportedClass() const
{
	return UFEMResource::StaticClass();
}

UThumbnailInfo* FFEMAssetActions::GetThumbnailInfo(UObject* Asset) const
{
	return nullptr;
}

// ********************************************************************************************************

uint32 FFEMTetMeshMaterialActions::GetCategories()
{
	return EAssetTypeCategories::Physics;
}

FText FFEMTetMeshMaterialActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FEMTetMeshParameters", "Tet Mesh Parameters");
}

FColor FFEMTetMeshMaterialActions::GetTypeColor() const
{
	return FColor::Red;
}

UClass* FFEMTetMeshMaterialActions::GetSupportedClass() const
{
	return UFEMFXTetMeshParameters::StaticClass();
}

UThumbnailInfo* FFEMTetMeshMaterialActions::GetThumbnailInfo(UObject* Asset) const
{
	return nullptr;
}

// ********************************************************************************************************

uint32 FFEMMeshActions::GetCategories()
{
	return EAssetTypeCategories::Physics;
}

FText FFEMMeshActions::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_FEMMesh", "FEM Mesh");
}

FColor FFEMMeshActions::GetTypeColor() const
{
	return FColor::Red;
}

UClass* FFEMMeshActions::GetSupportedClass() const
{
	return UFEMMesh::StaticClass();
}

UThumbnailInfo* FFEMMeshActions::GetThumbnailInfo(UObject* Asset) const
{
	return nullptr;
}