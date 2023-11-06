//-------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//-------------------------------------------------------------------------------------

#pragma once

#include <vector>
#include "FEMCommon.h"

class LoadFEMMesh
{

public:
	// Load vert and tet data from Tetgen .node and .ele files

	// Get number of verts, needed for sizing buffers
	static int LoadNodeEleMeshNumVerts(const char* nodeFile);

	// Get number of tets, and get list of tets incident on each vert, also needed for sizing buffers.
	// vertIncidentTets array assumed to have >= number of verts elements.
	// Each element is vector containing incident tets for a vertex.
	static int LoadNodeEleMeshNumTets(const char* eleFile, std::vector<unsigned int>* vertIncidentTets, int numVerts);

	// vertPositions arary assumed to have >= number of verts elements.
	// tets arary assumed to have >= number of tets elements.
	//static int LoadNodeEleMeshData(const char* nodeFile, const char* eleFile, FVector* vertPositions, FTetVertIds* tets);

	static int LoadNodeEleMeshData(const char* nodeFile, const char* eleFile, AMD::FmVector3* vertPositions, AMD::FmTetVertIds* tets, float scale = 1.0f);

	// Store vertex and tetrahedra data to .node and .ele files.
	static int StoreNodeEleMeshData(const char* nodeFile, const char* eleFile, AMD::FmVector3* vertPositions, AMD::FmTetVertIds* tets, int numPoints, int numTetrahedra);

	// Cull any vertices without tetrahedra referencing them.  Returns new number of vertices.
	static int RemoveUnreferencedVertices(AMD::FmVector3* vertPositions, std::vector<unsigned int>* vertIncidentTets, int numVerts, AMD::FmTetVertIds* tets, int numTets);

	// Switches vertices 0 and 1, which will convert between TetGen and Stellar conventions.
	static void ReorderTetVertIds(AMD::FmTetVertIds* tets, int numTets);
};