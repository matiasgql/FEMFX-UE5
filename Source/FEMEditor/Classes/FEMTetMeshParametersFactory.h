//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Factories/Factory.h"

#include "FEMTetMeshParametersFactory.generated.h"

UCLASS()
class UFEMTetMeshParametersFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	/* UFactory Interface */
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;


	uint32 GetMenuCategories() const override;
	bool ShouldShowInNewMenu() const override;

};