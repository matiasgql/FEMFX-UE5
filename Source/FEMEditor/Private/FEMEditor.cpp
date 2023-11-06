// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FEMEditorPCH.h"
#include "AssetToolsModule.h"
#include "FEMActions.h"
#include "Modules/ModuleManager.h"
#include "IFEMEditor.h"





class FFEMEditor : public IFEMEditor
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override
	{
		//IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

		RegisterAssetTypeAction(AssetTools, MakeShareable(new FFEMAssetActions));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FFEMTetMeshMaterialActions));
		RegisterAssetTypeAction(AssetTools, MakeShareable(new FFEMMeshActions));
	}

	virtual void ShutdownModule() override
	{
		FAssetToolsModule* AssetToolsModule = FModuleManager::GetModulePtr<FAssetToolsModule>("AssetTools");

		if (AssetToolsModule != nullptr)
		{
			IAssetTools& AssetTools = AssetToolsModule->Get();

			for (auto Action : RegisteredAssetTypeActions)
			{
				AssetTools.UnregisterAssetTypeActions(Action);
			}
		}
	}

private:

	/** Registers a single asset type action. */
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
	{
		AssetTools.RegisterAssetTypeActions(Action);
		RegisteredAssetTypeActions.Add(Action);
	}

	TArray<TSharedRef<IAssetTypeActions>> RegisteredAssetTypeActions;
};

IMPLEMENT_MODULE( FFEMEditor, FEMEditor)
