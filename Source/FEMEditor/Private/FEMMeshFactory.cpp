// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FEMMeshFactory.h"
#include "FEMMesh.h"

#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"
#include "SlateOptMacros.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"
#include "AssetTypeCategories.h"

#include "CoreMinimal.h"
#include "Interfaces/IMainFrameModule.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/ObjectMacros.h"
#include "UObject/UObjectGlobals.h"
#include "UObject/UObjectBaseUtility.h"
#include "UObject/UObjectHash.h"
#include "UObject/Object.h"
#include "UObject/Class.h"
#include "UObject/UnrealType.h"
#include "Widgets/Layout/SUniformGridPanel.h"

#define LOCTEXT_NAMESPACE "FEMMeshFactory"


UFEMMeshImportData::UFEMMeshImportData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), bProceduralGenerate(false), Randomize(false), NumCubesX(0), NumCubesY(0), NumCubesZ(0),
	  CubeX(0), CubeY(0),
	  CubeZ(0), Scale(0),
	  IsWoodPanel(false)
{
}

void UFEMMeshImportData::CopyFrom(UFEMMeshImportData* Other)
{
	Randomize = Other->Randomize;
	NumCubesX = Other->NumCubesX;
	NumCubesY = Other->NumCubesY;
	NumCubesZ = Other->NumCubesZ;

	CubeX = Other->CubeX;
	CubeY = Other->CubeY;
	CubeZ = Other->CubeZ;

	Scale = Other->Scale;

	IsWoodPanel = Other->IsWoodPanel;
}


void UFEMMeshImportData::LoadOptions()
{
	int32 PortFlags = 0;

	for (FProperty* Property = GetClass()->PropertyLink; Property; Property = Property->PropertyLinkNext)
	{
		if (!Property->HasAnyPropertyFlags(CPF_Config))
		{
			continue;
		}
		FString Section = TEXT("FEMMesh_Import_UI_Option_") + GetClass()->GetName();
		FString Key = Property->GetName();

		// const bool bIsPropertyInherited = Property->GetOwnerClass() != GetClass();
		// UObject* SuperClassDefaultObject = GetClass()->GetSuperClass()->GetDefaultObject();
		//
		// const FString& PropFileName = GEditorPerProjectIni;

		FArrayProperty* Array = (FArrayProperty*)(Property);
		if (Array)
		{
			FConfigSection* Sec = GConfig->GetSectionPrivate(*Section, 0, 1, *GEditorPerProjectIni);
			if (Sec != nullptr)
			{
				TArray<FConfigValue> List;
				const FName KeyName(*Key, FNAME_Find);
				Sec->MultiFind(KeyName, List);

				FScriptArrayHelper_InContainer ArrayHelper(Array, this);
				// Only override default properties if there is something to override them with.
				if (List.Num() > 0)
				{
					ArrayHelper.EmptyAndAddValues(List.Num());
					for (int32 i = List.Num() - 1, c = 0; i >= 0; i--, c++)
					{
						Array->Inner->ImportText_Direct(*List[i].GetValue(), ArrayHelper.GetRawPtr(c), this, PortFlags);
					}
				}
				else
				{
					int32 Index = 0;
					const FConfigValue* ElementValue;
					do
					{
						// Add array index number to end of key
						FString IndexedKey = FString::Printf(TEXT("%s[%i]"), *Key, Index);

						// Try to find value of key
						const FName IndexedName(*IndexedKey, FNAME_Find);
						if (IndexedName == NAME_None)
						{
							break;
						}
						ElementValue = Sec->Find(IndexedName);

						// If found, import the element
						if (ElementValue != nullptr)
						{
							// expand the array if necessary so that Index is a valid element
							ArrayHelper.ExpandForIndex(Index);
							Array->Inner->ImportText_Direct(*ElementValue->GetValue(), ArrayHelper.GetRawPtr(Index), this, PortFlags);
						}

						Index++;
					} while (ElementValue || Index < ArrayHelper.Num());
				}
			}
		}
		else
		{
			for (int32 i = 0; i < Property->ArrayDim; i++)
			{
				if (Property->ArrayDim != 1)
				{
					Key = FString::Printf(TEXT("%s[%i]"), *Property->GetName(), i);
				}

				FString Value;
				bool bFoundValue = GConfig->GetString(*Section, *Key, Value, *GEditorPerProjectIni);

				if (bFoundValue)
				{
					if (Property->ImportText_Direct(*Value, Property->ContainerPtrToValuePtr<uint8>(this, i), this, PortFlags) == NULL)
					{
						// this should be an error as the properties from the .ini / .int file are not correctly being read in and probably are affecting things in subtle ways
						UE_LOG(LogTemp, Error, TEXT("FEMMesh Options LoadOptions (%s): failed for %s in: %s"), *GetPathName(), *Property->GetName(), *Value);
					}
				}
			}
		}
	}
}

void UFEMMeshImportData::SaveOptions()
{
	int32 PortFlags = 0;

	for (FProperty* Property = GetClass()->PropertyLink; Property; Property = Property->PropertyLinkNext)
	{
		if (!Property->HasAnyPropertyFlags(CPF_Config))
		{
			continue;
		}
		FString Section = TEXT("FEMMesh_Import_UI_Option_") + GetClass()->GetName();
		FString Key = Property->GetName();

		// const bool bIsPropertyInherited = Property->GetOwnerClass() != GetClass();
		// UObject* SuperClassDefaultObject = GetClass()->GetSuperClass()->GetDefaultObject();

		FArrayProperty* Array = (FArrayProperty*)(Property);
		if (Array)
		{
			FConfigSection* Sec = GConfig->GetSectionPrivate(*Section, 1, 0, *GEditorPerProjectIni);
			check(Sec);
			Sec->Remove(*Key);

			FScriptArrayHelper_InContainer ArrayHelper(Array, this);
			for (int32 i = 0; i < ArrayHelper.Num(); i++)
			{
				FString	Buffer;
				Array->Inner->ExportTextItem_Direct(Buffer, ArrayHelper.GetRawPtr(i), ArrayHelper.GetRawPtr(i), this, PortFlags);
				Sec->Add(*Key, *Buffer);
			}
		}
		else
		{
			TCHAR TempKey[MAX_SPRINTF] = TEXT("");
			for (int32 Index = 0; Index < Property->ArrayDim; Index++)
			{
				if (Property->ArrayDim != 1)
				{
					FCString::Sprintf(TempKey, TEXT("%s[%i]"), *Property->GetName(), Index);
					Key = TempKey;
				}

				FString	Value;
				Property->ExportText_InContainer(Index, Value, this, this, this, PortFlags);
				GConfig->SetString(*Section, *Key, *Value, *GEditorPerProjectIni);
			}
		}
	}
	GConfig->Flush(0);
}


/** UI to pick options when importing  FEMMesh */
BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
class SFEMMeshImportOptions : public SCompoundWidget
{
public:
	UFEMMeshImportData* FEMMeshImportData;

	/** Whether we should go ahead with import */
	bool							bImport;

	// Window That Owns Us
	TSharedPtr<SWindow> WidgetWindow;

	TSharedPtr<IDetailsView> DetailsView;

	SLATE_BEGIN_ARGS(SFEMMeshImportOptions)
		: _WidgetWindow()
		, _ReimportAssetData(nullptr)
	{}
		SLATE_ARGUMENT(TSharedPtr<SWindow>, WidgetWindow)
		SLATE_ARGUMENT(UFEMMeshImportData*, ReimportAssetData)
	SLATE_END_ARGS()


	SFEMMeshImportOptions(): bImport(false)
	{
		DetailsView = nullptr;
		FEMMeshImportData = NewObject<UFEMMeshImportData>();
		FEMMeshImportData->LoadConfig();
	}

	void Construct(const FArguments& InArgs)
	{
		WidgetWindow = InArgs._WidgetWindow;
		UFEMMeshImportData* ReimportAssetData = InArgs._ReimportAssetData;

		if (ReimportAssetData != nullptr)
		{
			FEMMeshImportData->CopyFrom(ReimportAssetData);
		}
		else
		{
			FEMMeshImportData->LoadOptions();
		}
		TSharedPtr<SBox> InspectorBox;

		//Create A Widget
		this->ChildSlot
			[
				SNew(SBorder)
				.BorderImage(FAppStyle::GetBrush(TEXT("Menu.Background")))
				.Content()
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(2)
					[
						SAssignNew(InspectorBox, SBox)
						.MaxDesiredHeight(650.0f)
						.WidthOverride(400.0)
					]
					// Ok/Cancel
					+ SVerticalBox::Slot()
					.AutoHeight()
					.Padding(5)
					[
						SNew(SHorizontalBox)
						+ SHorizontalBox::Slot()
						.AutoWidth()
						.HAlign(HAlign_Left)
						[
							//Left Button array
							SNew(SUniformGridPanel)
							.SlotPadding(3)
							+ SUniformGridPanel::Slot(0, 0)
							[
								SNew(SButton)
								.Text(LOCTEXT("FEMMeshOptionWindow_ResetToDefault", "Reset to Default"))
								.OnClicked(this, &SFEMMeshImportOptions::OnResetToDefault)
							]
						]
						+ SHorizontalBox::Slot()
						.FillWidth(1.0f)
						.HAlign(HAlign_Right)
						[
							//Right button array
							SNew(SUniformGridPanel)
							.SlotPadding(3)
							+ SUniformGridPanel::Slot(0, 0)
							[
								SNew(SButton)
								.Text(LOCTEXT("SpeedTreeOptionWindow_Import", "Import"))
								.OnClicked(this, &SFEMMeshImportOptions::OnImport)
							]
							+ SUniformGridPanel::Slot(1, 0)
							[
								SNew(SButton)
								.Text(LOCTEXT("SpeedTreeOptionWindow_Cancel", "Cancel"))
								.OnClicked(this, &SFEMMeshImportOptions::OnCancel)
							]
						]
					]
				]
			];
		FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		FDetailsViewArgs DetailsViewArgs;
		DetailsViewArgs.bAllowSearch = false;
		DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
		DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
		InspectorBox->SetContent(DetailsView->AsShared());
		DetailsView->SetObject(FEMMeshImportData);
	}

	/** If we should import */
	bool ShouldImport()
	{
		return bImport;
	}

	/** Called when 'OK' button is pressed */
	FReply OnImport()
	{
		bImport = true;
		WidgetWindow->RequestDestroyWindow();
		return FReply::Handled();
	}

	FReply OnResetToDefault()
	{
		if (DetailsView.IsValid())
		{
			FEMMeshImportData->LoadConfig();
			DetailsView->SetObject(FEMMeshImportData, true);
		}
		return FReply::Handled();
	}

	/** Called when 'Cancel' button is pressed */
	FReply OnCancel()
	{
		bImport = false;
		WidgetWindow->RequestDestroyWindow();
		return FReply::Handled();
	}


};
END_SLATE_FUNCTION_BUILD_OPTIMIZATION



UFEMMeshFactory::UFEMMeshFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SupportedClass = UFEMMesh::StaticClass();

	bCreateNew = true;
	bEditorImport = true;
	bEditAfterNew = true;
}

UObject* UFEMMeshFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext)
{
	UE_LOG(LogTemp, Warning, TEXT("FEMMeshFactory::FactoryCreateNew"));
	TSharedPtr<SWindow> ParentWindow;
	// Check if the main frame is loaded.  When using the old main frame it may not be.
	if (FModuleManager::Get().IsModuleLoaded("MainFrame"))
	{
		IMainFrameModule& MainFrame = FModuleManager::LoadModuleChecked<IMainFrameModule>("MainFrame");
		ParentWindow = MainFrame.GetParentWindow();
	}

	TSharedPtr<SFEMMeshImportOptions> Options;

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(LOCTEXT("WindowTitle", "FEM Options"))
		.SizingRule(ESizingRule::Autosized);

	UFEMMeshImportData* ExistingImportData = nullptr;

	Window->SetContent(SAssignNew(Options, SFEMMeshImportOptions).WidgetWindow(Window).ReimportAssetData(ExistingImportData));
	FSlateApplication::Get().AddModalWindow(Window, ParentWindow, false);

	UFEMMesh* Mesh = nullptr;
	ProceduralMeshOptions procOptions;
	if (Options->ShouldImport())
	{
		Options->FEMMeshImportData->SaveOptions();
		UFEMMeshImportData* data = Options->FEMMeshImportData;

		procOptions.NumCubesX = data->NumCubesX;
		procOptions.NumCubesY = data->NumCubesY;
		procOptions.NumCubesZ = data->NumCubesZ;

		procOptions.CubeX = data->CubeX;
		procOptions.CubeY = data->CubeY;
		procOptions.CubeZ = data->CubeZ;

		procOptions.Scale = data->Scale;
		procOptions.IsWoodPanel = data->IsWoodPanel;

		Mesh = NewObject<UFEMMesh>(InParent, InClass, InName, Flags);
		Mesh->CreateProceduralMesh(procOptions);
	}

	return Mesh;
}

uint32 UFEMMeshFactory::GetMenuCategories() const
{
	return EAssetTypeCategories::Misc;
}

bool UFEMMeshFactory::ShouldShowInNewMenu() const
{
	return true;
}