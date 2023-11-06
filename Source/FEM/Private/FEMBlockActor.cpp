//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMBlockActor.h"
#include "AMD_FEMFX.h"
#include "PartitionMesh.h"
#include "FEMFXScene.h"
#include "FEMConnectivity.h"
#include "RenderTetAssignment.h"
#include "FEMMesh.h"
#include "FEMResource.h"
#include "FEMFXMathConversion.h"
#include "WoodPanelCommon.h"
#include "ProceduralMeshHelper.h"


AFEMBlockActor::AFEMBlockActor(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
}
