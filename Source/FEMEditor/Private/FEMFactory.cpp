//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMFactory.h"
#include "FEMFileImportFactory.h"

#include "FEMResource.h"
#include "FEMFXMeshComponent.h"
#include "FEMActor.h"
#include "FEMMesh.h"

#include "Kismet2/KismetEditorUtilities.h"
#include "Editor.h"
#include "PackageTools.h"
#include "AssetSelection.h"
#include "FEMActorFactory.h"
#include "FEMFXTetMeshParameters.h"
#include "FEMTetMeshParametersFactory.h"
#include "Factories/FbxFactory.h"
#include "Misc/FeedbackContext.h"

#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonReader.h"
#include "AssetRegistry/AssetRegistryModule.h"

#include "Developer/AssetTools/Public/AssetTypeCategories.h"

UFEMFactory::UFEMFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = AFEMActor::StaticClass();

	Formats.Add(FString(TEXT("fem;")));

	bCreateNew = false;
	bEditorImport = true;
	bEditAfterNew = true;

}

uint32 UFEMFactory::GetMenuCategories() const
{
	return EAssetTypeCategories::Physics;
}

bool UFEMFactory::ShouldShowInNewMenu() const
{
	return false;
}

bool UFEMFactory::FactoryCanImport(const FString& Filename)
{
	const FString FileExtension = FPaths::GetExtension(Filename);
	return (FileExtension.ToUpper() == FString("FEM"));
}

UObject* UFEMFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	return NewObject<AFEMActor>(InParent, InClass, InName, Flags);
}

UObject* UFEMFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	AActor* RootActorContainer = nullptr;
	UBlueprint* Blueprint = nullptr;
	USceneComponent* ActorRootComponent = nullptr;
	EComponentMobility::Type MobilityType = EComponentMobility::Movable;

	UActorFactory* ActorFactory = NewObject<UFEMActorFactory>(InParent, "FEMActorFactory");// GEditor->FindActorFactoryByClass(UActorFactoryEmptyActor::StaticClass());
	FAssetData FEMActorAssetData = FAssetData(ActorFactory->GetDefaultActorClass(FAssetData()));
	UObject* FEMActorAsset = FEMActorAssetData.GetAsset();

	RootActorContainer = FActorFactoryAssetProxy::AddActorForAsset(FEMActorAsset, false);
	check(RootActorContainer != nullptr);
	ActorRootComponent = NewObject<USceneComponent>(RootActorContainer, USceneComponent::GetDefaultSceneRootVariableName());
	check(ActorRootComponent != nullptr);



	FString JsonString;
	FFileHelper::LoadFileToString(JsonString, *Filename);

	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		// Couldn't read file so just leave and call it a day.
	}

	FName resourceName = MakeUniqueObjectName(RootActorContainer, UFEMResource::StaticClass(), InName);
	UFEMResource* Resource = NewObject<UFEMResource>(InParent, UFEMResource::StaticClass(), resourceName);
	Resource->Version = JsonObject->GetStringField("Version");

	TUniquePtr<FEMFileImportFactory> fileFactory = FEMFileImportFactory::GetFactory(Resource->Version);

	if (fileFactory == nullptr)
	{
		Warn->Logf(ELogVerbosity::Error, TEXT("Failed to load file '%s'"), *Filename);
		bOutOperationCanceled = true;
		return nullptr;
	}

	FEMFileImportInputs fileFactoryInputs = FEMFileImportInputs();
	fileFactoryInputs.JsonObject = JsonObject;
	fileFactoryInputs.Resource = Resource;
	fileFactory->ImportFEMFile(&fileFactoryInputs);

	ActorRootComponent->Mobility = MobilityType;
	ActorRootComponent->bVisualizeComponent = false;
	RootActorContainer->SetRootComponent(ActorRootComponent);
	RootActorContainer->AddInstanceComponent(ActorRootComponent);
	ActorRootComponent->RegisterComponent();
	RootActorContainer->SetActorLabel("FEM");
	RootActorContainer->SetFlags(RF_Transactional);
	ActorRootComponent->SetFlags(RF_Transactional);

	Cast<AFEMActor>(RootActorContainer)->FEMResource = Resource->ActorResource;
	Cast<AFEMActor>(RootActorContainer)->ComponentResources = Resource->ComponentResources;

	for (int i = 0; i < Resource->ComponentResources.Num(); ++i)
	{
		UFEMFXMeshComponent* meshComponent = NewObject<UFEMFXMeshComponent>(RootActorContainer, *Resource->ComponentResources[i].Name);
		//meshComponent->resource = Resource->ComponentResources[i];
		meshComponent->Name = Resource->ComponentResources[i].Name;
		meshComponent->FractureEnabled = Resource->ComponentResources[i].IsFracturable;

		for (auto it = Resource->ComponentResources[i].Materials.CreateIterator(); it; it++)
		{
			if (it->TetIds.Num() > 0)
				meshComponent->MeshParameters.Add(it->Name);

			UPackage* package = PackageTools::LoadPackage(*it->Name);

			UFEMFXTetMeshParameters* material = Cast<UFEMFXTetMeshParameters>(StaticLoadObject(UFEMFXTetMeshParameters::StaticClass(), package, *it->Name));
			if (!material)
			{
				UFEMTetMeshParametersFactory* factory = NewObject<UFEMTetMeshParametersFactory>();
				const FString PackageName = "/Game/FEM/FEMMaterials/" + it->Name;
				package = CreatePackage(*PackageName);
				EObjectFlags objectFlags = RF_Public | RF_Standalone;

				material = Cast<UFEMFXTetMeshParameters>(factory->FactoryCreateNew(UFEMFXTetMeshParameters::StaticClass(), package, *it->Name, objectFlags, NULL, Warn, NAME_None));
				FAssetRegistryModule::AssetCreated(material);
				material->MarkPackageDirty();
			}
			if (material)
			{
				if (it->TetIds.Num() == 0)
				{
					meshComponent->MeshParameters["Default"] = material;
				}
				else
				{
					meshComponent->MeshParameters[it->Name] = material;
				}
			}
		}

		for (auto it = Resource->ComponentResources[i].FBXFiles.CreateIterator(); it; it++)
		{
			UPackage* package = PackageTools::LoadPackage(*it);

			UStaticMesh* Mesh = Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), package, **it));
			if (!Mesh)
			{
				UFbxFactory* factory = NewObject<UFbxFactory>();

				FName name = MakeUniqueObjectName(InParent, UStaticMesh::StaticClass(), InName);
				Mesh = Cast<UStaticMesh>(factory->FactoryCreateFile(UStaticMesh::StaticClass(), InParent, name, Flags, *it, Parms, Warn, bOutOperationCanceled));
				FAssetRegistryModule::AssetCreated(Mesh);
				Mesh->MarkPackageDirty();
			}

			if (Mesh)
			{
				meshComponent->staticMeshes.Add(Mesh);
			}
		}


		/** Create the UFEMMesh f */
		// Only need to do this here because I need a valid TetMeshBuffer as well as BvHierarchy.
		// Once those things can come from the fem file I won't need to do this.
		if (meshComponent->staticMeshes.Num() > 0 || Resource->ComponentResources[i].meshSections.Num() > 0)
		{


			FString name = MakeUniqueObjectName(InParent, UFEMMesh::StaticClass(), InName).ToString();
			FString packageName = InParent->GetPathName();

			UPackage* package = CreatePackage(*(packageName + name));
			EObjectFlags objectFlags = RF_Public | RF_Standalone;

			UFEMMesh* mesh = Cast<UFEMMesh>(NewObject<UFEMMesh>(package, *name, objectFlags));
			FAssetRegistryModule::AssetCreated(mesh);
			mesh->MarkPackageDirty();
			if (IsValid(mesh))
			{
				mesh->ComponentResources = Resource->ComponentResources[i];
				mesh->NumberOfCornersPerShard = Resource->ComponentResources[i].NumberOfCornersPerShard;
				meshComponent->FEMMesh = mesh;
				meshComponent->LoadResource();
				meshComponent->LoadSimObject();

				if (meshComponent->staticMeshes.Num() > 0)
				{
					for (int j = 0; j < meshComponent->staticMeshes.Num(); ++j)
					{
						UStaticMesh* staticMesh = meshComponent->staticMeshes[j];

						FFEMFXMeshSection* meshSection = mesh->CreateMeshSection(staticMesh, meshComponent->GetTetMeshBuffer(), meshComponent->GetBvHierarchy(), j);
						meshSection->MaterialIndex = j;

						UMaterialInterface* material = staticMesh->GetMaterial(0);
						meshComponent->SetMaterial(j, material);

						mesh->GetTetMesh()->UpdateTetMesh(meshComponent->GetTetMeshBuffer());
					}
				}
				else
				{
					for (int j = 0; j < Resource->ComponentResources[i].meshSections.Num(); j++)
					{
						FFEMFXMeshSection* meshSection = mesh->CreateMeshSectionFromFEMFile(meshComponent->GetTetMeshBuffer(), meshComponent->GetBvHierarchy(), j);
						meshSection->MaterialIndex = j;

						mesh->GetTetMesh()->UpdateTetMesh(meshComponent->GetTetMeshBuffer());
					}
				}
			}
			meshComponent->UpdateSceneProxy();

			meshComponent->CleanUpAfterImport();
		}

		RootActorContainer->AddInstanceComponent(meshComponent);
		meshComponent->RegisterComponent();
		meshComponent->AttachToComponent(ActorRootComponent, FAttachmentTransformRules::KeepWorldTransform);
		meshComponent->PostEditChange();

		Cast<AFEMActor>(RootActorContainer)->MeshComponents.Add(meshComponent);
	}

	Blueprint = FKismetEditorUtilities::CreateBlueprintFromActor(InParent->GetFName(), RootActorContainer, nullptr);
	
	if (Blueprint)
	{
		FAssetRegistryModule::AssetCreated(Blueprint);
		Blueprint->MarkPackageDirty();
	}
	GWorld->EditorDestroyActor(RootActorContainer, true);

	return Blueprint;

}