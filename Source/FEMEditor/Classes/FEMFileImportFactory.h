//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FEMResource.h"

#include "Dom/JsonObject.h"

class USceneComponent;

struct FEMFileImportInputs
{
	TSharedPtr<FJsonObject> JsonObject;
	UFEMResource* Resource;
};

class FEMFileImportFactory
{
public:
	FEMFileImportFactory();
	virtual ~FEMFileImportFactory();

	static TUniquePtr<FEMFileImportFactory> GetFactory(FString);

public:
	virtual void ImportFEMFile(const FEMFileImportInputs*);
};

class FEMv1_0 : public FEMFileImportFactory
{
public:
	virtual void ImportFEMFile(const FEMFileImportInputs*) override;
};

