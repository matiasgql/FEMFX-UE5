//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "FEMCommon.h"

#include <vector>


static float randfloat()
{
	return (float)rand() / RAND_MAX;
}

static float randfloat2()
{
	return randfloat() * 2.0f - 1.0f;
}

namespace ProceduralMeshHelper
{
	static inline void GetBlockMeshCounts(AMD::uint* numVerts, AMD::uint* numTets, AMD::uint numCubesX, AMD::uint numCubesY, AMD::uint numCubesZ)
	{
		*numVerts = (numCubesX + 1) * (numCubesY + 1) * (numCubesZ + 1);
		*numTets = 6 * numCubesX*numCubesY*numCubesZ;
	}

	void InitBlockVerts(AMD::FmVector3* vertRestPositions, AMD::FmTetVertIds* tetVertIds, bool Randomize, float CubeX, float CubeY, float CubeZ, int NumCubesX, int NumCubesY, int NumCubesZ, float Scale);
	void CreateBlockMesh(std::vector<AMD::uint>* vertIncidentTets, int NumCubesX, int NumCubesY, int NumCubesZ);
}