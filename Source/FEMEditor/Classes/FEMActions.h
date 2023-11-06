// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Developer/AssetTools/Public/AssetTypeActions_Base.h"
//#include "AssetTypeActions_Base.h"


class FFEMAssetActions : public FAssetTypeActions_Base
{
public:

	virtual uint32 GetCategories() override;

	virtual FText GetName() const override;

	virtual FColor GetTypeColor() const override;

	virtual UClass* GetSupportedClass() const override;

	virtual UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override;
};

class FFEMTetMeshMaterialActions : public FAssetTypeActions_Base
{
public:

	virtual uint32 GetCategories() override;

	virtual FText GetName() const override;

	virtual FColor GetTypeColor() const override;

	virtual UClass* GetSupportedClass() const override;

	virtual UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override;
};

class FFEMMeshActions : public FAssetTypeActions_Base
{
public:

	virtual uint32 GetCategories() override;

	virtual FText GetName() const override;

	virtual FColor GetTypeColor() const override;

	virtual UClass* GetSupportedClass() const override;

	virtual UThumbnailInfo* GetThumbnailInfo(UObject* Asset) const override;
};