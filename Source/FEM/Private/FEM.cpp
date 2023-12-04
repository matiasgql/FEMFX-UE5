// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Modules/ModuleManager.h"
#include "IFEM.h"

DEFINE_LOG_CATEGORY(FEMLog);

class FFEM : public IFEM
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override
	{
		AddShaderSourceDirectoryMapping(TEXT("/Shaders"), FPaths::Combine(*(FPaths::ProjectPluginsDir()), TEXT("FEMFX-UE5"), TEXT("Shaders"), TEXT("Private")));
	}

	virtual void ShutdownModule() override {}
};

IMPLEMENT_MODULE( FFEM, FEM)
