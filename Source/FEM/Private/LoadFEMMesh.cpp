//-------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//-------------------------------------------------------------------------------------

#include "LoadFEMMesh.h"
#include "AMD_FEMFX.h"
#include <vector>
#include <assert.h>


static inline void AddIncidentTetToSet(std::vector<unsigned int>& vertTetIds, unsigned int tetId)
{
    for (std::vector<unsigned int>::iterator it = vertTetIds.begin(); it != vertTetIds.end(); it++)
    {
        unsigned int vTetId = *it;
        if (vTetId == tetId)
            return;
    }
    vertTetIds.push_back(tetId);
}

int LoadFEMMesh::LoadNodeEleMeshNumVerts(const char* nodeFile)
{
	FILE* nodeFP;
	fopen_s(&nodeFP, nodeFile, "r");

	if (!nodeFP)
	{
		fprintf(stderr, "Error opening .node file %s\n", nodeFile);
		return -1;
	}

	int numPoints;
	int numDimensions;
	int numAttributes;
	int isBoundaryMarker;
	fscanf_s(nodeFP, "%d %d %d %d", &numPoints, &numDimensions, &numAttributes, &isBoundaryMarker);

	fclose(nodeFP);

	return numPoints;
}

int LoadFEMMesh::LoadNodeEleMeshNumTets(const char* eleFile, std::vector<unsigned int>* vertIncidentTets, int numVerts)
{
	int numTetrahedra;
	int numNodesPerTet;
	int isRegionAttribute;

	FILE* eleFP;

	fopen_s(&eleFP, eleFile, "r");

	if (!eleFP)
	{
		fprintf(stderr, "Error opening .ele file %s\n", eleFile);
		return -1;
	}

	fscanf_s(eleFP, "%d %d %d", &numTetrahedra, &numNodesPerTet, &isRegionAttribute);

	assert(numNodesPerTet == 4);

	for (int tIdx = 0; tIdx < numTetrahedra; tIdx++)
	{
		int tetNumber;
		int nodeIdx0, nodeIdx1, nodeIdx2, nodeIdx3;

		fscanf_s(eleFP, "%d %d %d %d %d", &tetNumber, &nodeIdx0, &nodeIdx1, &nodeIdx2, &nodeIdx3);

		// number from 0
		nodeIdx0--;
		nodeIdx1--;
		nodeIdx2--;
		nodeIdx3--;

		if (nodeIdx0 < 0 || nodeIdx0 >= numVerts
			|| nodeIdx1 < 0 || nodeIdx1 >= numVerts
			|| nodeIdx2 < 0 || nodeIdx2 >= numVerts
			|| nodeIdx3 < 0 || nodeIdx3 >= numVerts)
		{
			return -1;
		}

		int regionAttribute;
		if (isRegionAttribute)
		{
			fscanf_s(eleFP, " %d", &regionAttribute);
		}

		AddIncidentTetToSet(vertIncidentTets[nodeIdx0], tIdx);
		AddIncidentTetToSet(vertIncidentTets[nodeIdx1], tIdx);
		AddIncidentTetToSet(vertIncidentTets[nodeIdx2], tIdx);
		AddIncidentTetToSet(vertIncidentTets[nodeIdx3], tIdx);
	}

	fclose(eleFP);

	return numTetrahedra;
}

int LoadFEMMesh::LoadNodeEleMeshData(const char* nodeFile, const char* eleFile, AMD::FmVector3* vertPositions, AMD::FmTetVertIds* tets, float scale)
{

	FILE* nodeFP;
	FILE* eleFP;

	fopen_s(&nodeFP, nodeFile, "r");
	fopen_s(&eleFP, eleFile, "r");

	if (!nodeFP || !eleFP)
	{
		fprintf(stderr, "Error opening tet files %s %s\n", nodeFile, eleFile);
		return -1;
	}

	// Read verts/nodes
	int numPoints;
	int numDimensions;
	int numAttributes;
	int isBoundaryMarker;
	fscanf_s(nodeFP, "%d %d %d %d", &numPoints, &numDimensions, &numAttributes, &isBoundaryMarker);

	assert(numDimensions == 3);
	assert(numAttributes >= 0 && numAttributes < 100);

	for (int vIdx = 0; vIdx < numPoints; vIdx++)
	{
		int nodeNumber;
		float nodeX, nodeY, nodeZ;

		fscanf_s(nodeFP, "%d %f %f %f", &nodeNumber, &nodeX, &nodeY, &nodeZ);

		int attribute;
		for (int attIdx = 0; attIdx < numAttributes; attIdx++)
		{
			fscanf_s(nodeFP, " %d", &attribute);
		}

		int boundaryMarker;
		if (isBoundaryMarker)
		{
			fscanf_s(nodeFP, " %d", &boundaryMarker);
		}

		vertPositions[vIdx].x = nodeX * scale;
		vertPositions[vIdx].y = nodeY * scale;
		vertPositions[vIdx].z = nodeZ * scale;
	}

	int numTetrahedra;
	int numNodesPerTet;
	int isRegionAttribute;

	fscanf_s(eleFP, "%d %d %d", &numTetrahedra, &numNodesPerTet, &isRegionAttribute);

	assert(numNodesPerTet == 4);

	for (int tIdx = 0; tIdx < numTetrahedra; tIdx++)
	{
		int tetNumber;
		int nodeIdx0, nodeIdx1, nodeIdx2, nodeIdx3;

		fscanf_s(eleFP, "%d %d %d %d %d", &tetNumber, &nodeIdx0, &nodeIdx1, &nodeIdx2, &nodeIdx3);

		// number from 0
		nodeIdx0--;
		nodeIdx1--;
		nodeIdx2--;
		nodeIdx3--;

		assert(nodeIdx0 < numPoints);
		assert(nodeIdx1 < numPoints);
		assert(nodeIdx2 < numPoints);
		assert(nodeIdx3 < numPoints);

		int regionAttribute;
		if (isRegionAttribute)
		{
			fscanf_s(eleFP, " %d", &regionAttribute);
		}

		tets[tIdx].ids[0] = nodeIdx0;
		tets[tIdx].ids[1] = nodeIdx1;
		tets[tIdx].ids[2] = nodeIdx2;
		tets[tIdx].ids[3] = nodeIdx3;
	}

	fclose(nodeFP);
	fclose(eleFP);

	return 0;
}

int LoadFEMMesh::StoreNodeEleMeshData(const char* nodeFile, const char* eleFile, AMD::FmVector3* vertPositions, AMD::FmTetVertIds* tets, int numPoints, int numTetrahedra)
{
	FILE* nodeFP;
	FILE* eleFP;

	fopen_s(&nodeFP, nodeFile, "r");
	fopen_s(&eleFP, eleFile, "r");

	if (!nodeFP || !eleFP)
	{
		fprintf(stderr, "Error opening tet files %s %s\n", nodeFile, eleFile);
		return -1;
	}

	// Read verts/nodes
	int numDimensions = 3;
	int numAttributes = 0;
	int isBoundaryMarker = 0;
	fprintf(nodeFP, "%d %d %d %d\n", numPoints, numDimensions, numAttributes, isBoundaryMarker);

	for (int vIdx = 0; vIdx < numPoints; vIdx++)
	{
		fprintf(nodeFP, "%d %f %f %f\n", vIdx + 1, vertPositions[vIdx].x, vertPositions[vIdx].y, vertPositions[vIdx].z);
	}

	int numNodesPerTet = 4;
	int isRegionAttribute = 0;

	fprintf(eleFP, "%d %d %d\n", numTetrahedra, numNodesPerTet, isRegionAttribute);

	for (int tIdx = 0; tIdx < numTetrahedra; tIdx++)
	{
		fprintf(eleFP, "%d %d %d %d %d\n", tIdx + 1, tets[tIdx].ids[0] + 1, tets[tIdx].ids[1] + 1, tets[tIdx].ids[2] + 1, tets[tIdx].ids[3] + 1);
	}

	fclose(nodeFP);
	fclose(eleFP);

	return 0;
}

int LoadFEMMesh::RemoveUnreferencedVertices(
	AMD::FmVector3* vertPositions, std::vector<unsigned int>* vertIncidentTets, int numVerts,
	AMD::FmTetVertIds* tets, int numTets)
	{
	uint32_t* remapVertIndices = new uint32_t[numVerts];

	// Cull vertices with no associated tets
	int outputNumVerts = 0;
	for (int i = 0; i < numVerts; i++)
	{
		if (vertIncidentTets[i].size() > 0)
		{
			remapVertIndices[i] = outputNumVerts;
			vertPositions[outputNumVerts] = vertPositions[i];
			outputNumVerts++;
		}
	}

	// Remap tet indices to match output vertices
	for (int i = 0; i < numTets; i++)
	{
		tets[i].ids[0] = remapVertIndices[tets[i].ids[0]];
		tets[i].ids[1] = remapVertIndices[tets[i].ids[1]];
		tets[i].ids[2] = remapVertIndices[tets[i].ids[2]];
		tets[i].ids[3] = remapVertIndices[tets[i].ids[3]];
	}

	delete[] remapVertIndices;

	return outputNumVerts;
}

void LoadFEMMesh::ReorderTetVertIds(AMD::FmTetVertIds* tets, int numTets)
{
	// Reverse tet indices
	for (int i = 0; i < numTets; i++)
	{
		int id0 = tets[i].ids[0];
		int id1 = tets[i].ids[1];
		int id2 = tets[i].ids[2];
		int id3 = tets[i].ids[3];
		tets[i].ids[0] = id1;
		tets[i].ids[1] = id0;
		tets[i].ids[2] = id2;
		tets[i].ids[3] = id3;
	}
}
