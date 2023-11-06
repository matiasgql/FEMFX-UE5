//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMActorFactory.h"

#include "FEMActor.h"
#include "FEMResource.h"

UFEMActorFactory::UFEMActorFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DisplayName = NSLOCTEXT("FEM","FEMActorFactoryDisplayName","FEMActor");
	bShowInEditorQuickMenu = false;

	NewActorClass = AFEMActor::StaticClass();
}


bool UFEMActorFactory::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg)
{
	if (AssetData.IsValid() && AssetData.GetClass()->IsChildOf(UFEMResource::StaticClass()))
	{
		return true;
	}
	else
	{
		return Super::CanCreateActorFrom(AssetData, OutErrorMsg);
	}
}

void UFEMActorFactory::PostSpawnActor(UObject* Asset, AActor* NewActor)
{
	Super::PostSpawnActor(Asset, NewActor);

	if (UFEMResource* resource = Cast<UFEMResource>(Asset))
	{

	}
}