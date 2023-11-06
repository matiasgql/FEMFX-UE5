//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMFXTetMeshParameters.h"

UFEMFXTetMeshParameters::UFEMFXTetMeshParameters(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	restDensity = 50.0f;
	youngsModulus = 1.0e5f;
	poissonsRatio = 0.3f;

	plasticYieldThreshold = 0.0f;
	plasticCreep = 0.0f;
	plasticMin = 0.0f;
	plasticMax = 0.0f;

	fractureStressThreshold = 5.0e3f;
	maxUnconstrainedSolveIterations = 60;

	lowerDeformationLimit = 0.0f;
	upperDeformationLimit = 0.0f;
}

UFEMFXTetMeshParameters::UFEMFXTetMeshParameters()
{

}