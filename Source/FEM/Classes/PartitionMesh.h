//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#define PARTITION_MESH 0

#if PARTITION_MESH
#include "AMD_FEMFX.h"
#include <vector>
#include "metisbin.h"


struct PartitionMeshInput
{
	//FmVector3*      vertPositions;
	AMD::FmTetVertIds*   tetVertIndices;
	std::vector<unsigned int>* vertIncidentTets;
	AMD::uint               numVerts;
	AMD::uint               numTets;
	AMD::uint               numPartitions;
};


static int PartitionMesh(
	AMD::uint* vertPartitionOffsets,  // Array of size numPartitions + 1 with starting offset of each partition
	AMD::uint* vertPartitionIndices,  // Concatenated ararys of vertex indices of each partition
	AMD::uint* tetPartitionOffsets,   // Array of size numPartitions + 1 with starting offset of each partition
	AMD::uint* tetPartitionIndices,   // Concatenated ararys of vertex indices of each partition
	const PartitionMeshInput& meshInput)
{
	if (meshInput.numPartitions <= 1)
	{
		return -1;
	}

	mesh_t metisMesh;
	metisMesh.ne = meshInput.numTets;
	metisMesh.nn = meshInput.numVerts;
	metisMesh.ncon = 0;
	metisMesh.eptr = new idx_t[meshInput.numTets + 1];  // start of node indices of element
	metisMesh.eind = new idx_t[meshInput.numTets * 4];  // all element node indices
	metisMesh.ewgt = NULL;

	AMD::uint nodeIdx = 0;
	for (AMD::uint elemIdx = 0; elemIdx < meshInput.numTets; elemIdx++)
	{
		metisMesh.eptr[elemIdx] = nodeIdx;
		metisMesh.eind[nodeIdx + 0] = meshInput.tetVertIndices[elemIdx].ids[0];
		metisMesh.eind[nodeIdx + 1] = meshInput.tetVertIndices[elemIdx].ids[1];
		metisMesh.eind[nodeIdx + 2] = meshInput.tetVertIndices[elemIdx].ids[2];
		metisMesh.eind[nodeIdx + 3] = meshInput.tetVertIndices[elemIdx].ids[3];
		nodeIdx += 4;
	}
	metisMesh.eptr[meshInput.numTets] = nodeIdx;

	idx_t* metisNodePartitions = new idx_t[meshInput.numVerts];
	idx_t* metisElemPartitions = new idx_t[meshInput.numTets];

	idx_t metisOptions[METIS_NOPTIONS];
	idx_t metisObjVal;
	idx_t metisNumPartitions = meshInput.numPartitions;

	METIS_SetDefaultOptions(metisOptions);

	metisOptions[METIS_OPTION_GTYPE] = METIS_GTYPE_NODAL;
	metisOptions[METIS_OPTION_PTYPE] = METIS_PTYPE_KWAY;
	metisOptions[METIS_OPTION_OBJTYPE] = METIS_OBJTYPE_CUT;
	metisOptions[METIS_OPTION_CTYPE] = METIS_CTYPE_SHEM;
	metisOptions[METIS_OPTION_IPTYPE] = METIS_IPTYPE_GROW;
	metisOptions[METIS_OPTION_RTYPE] = -1;
	metisOptions[METIS_OPTION_DBGLVL] = 0;
	metisOptions[METIS_OPTION_UFACTOR] = -1;
	metisOptions[METIS_OPTION_MINCONN] = 0;
	metisOptions[METIS_OPTION_CONTIG] = 0;
	metisOptions[METIS_OPTION_SEED] = -1;
	metisOptions[METIS_OPTION_NITER] = 10;
	metisOptions[METIS_OPTION_NCUTS] = 1;
	metisOptions[METIS_OPTION_NUMBERING] = 0;

	int metisStatus = METIS_PartMeshNodal(&metisMesh.ne, &metisMesh.nn, metisMesh.eptr, metisMesh.eind,
		NULL, NULL, &metisNumPartitions, NULL, metisOptions, &metisObjVal,
		metisElemPartitions, metisNodePartitions);

	// Find size of each partition
	for (AMD::uint partIdx = 0; partIdx < meshInput.numPartitions; partIdx++)
	{
		vertPartitionOffsets[partIdx] = 0;
		tetPartitionOffsets[partIdx] = 0;
	}
	for (AMD::uint vertIdx = 0; vertIdx < meshInput.numVerts; vertIdx++)
	{
		AMD::uint partIndex = metisNodePartitions[vertIdx];
		vertPartitionOffsets[partIndex]++;
	}
	for (AMD::uint elemIdx = 0; elemIdx < meshInput.numTets; elemIdx++)
	{
		AMD::uint partIdx = metisElemPartitions[elemIdx];
		tetPartitionOffsets[partIdx]++;
	}

	// Prefix sum to compute partition offsets
	AMD::uint vertSum = vertPartitionOffsets[0];
	AMD::uint tetSum = tetPartitionOffsets[0];
	vertPartitionOffsets[0] = 0;
	tetPartitionOffsets[0] = 0;
	for (AMD::uint partIdx = 1; partIdx < meshInput.numPartitions; partIdx++)
	{
		AMD::uint prevVertSum = vertSum;
		AMD::uint prevTetSum = tetSum;
		vertSum += vertPartitionOffsets[partIdx];
		tetSum += tetPartitionOffsets[partIdx];
		vertPartitionOffsets[partIdx] = prevVertSum;
		tetPartitionOffsets[partIdx] = prevTetSum;
	}
	vertPartitionOffsets[meshInput.numPartitions] = vertSum;
	tetPartitionOffsets[meshInput.numPartitions] = tetSum;

	// Fill partitions
	for (AMD::uint vertIdx = 0; vertIdx < meshInput.numVerts; vertIdx++)
	{
		AMD::uint partIdx = metisNodePartitions[vertIdx];
		AMD::uint offset = vertPartitionOffsets[partIdx];
		vertPartitionIndices[offset] = vertIdx;
		vertPartitionOffsets[partIdx]++;
	}
	for (AMD::uint tetIdx = 0; tetIdx < meshInput.numTets; tetIdx++)
	{
		AMD::uint partIdx = metisElemPartitions[tetIdx];
		AMD::uint offset = tetPartitionOffsets[partIdx];
		tetPartitionIndices[offset] = tetIdx;
		tetPartitionOffsets[partIdx]++;
	}

	// Reset offsets
	for (int partIdx = meshInput.numPartitions - 1; partIdx >= 1; partIdx--)
	{
		vertPartitionOffsets[partIdx] = vertPartitionOffsets[partIdx - 1];
		tetPartitionOffsets[partIdx] = tetPartitionOffsets[partIdx - 1];
	}
	vertPartitionOffsets[0] = 0;
	tetPartitionOffsets[0] = 0;

	delete[] metisMesh.eptr;
	delete[] metisMesh.eind;
	delete[] metisNodePartitions;
	delete[] metisElemPartitions;

	return 0;
}

static void SortByPartition(
    std::vector<AMD::uint>& vertPermutation,
    std::vector<AMD::uint>& tetPermutation,
	AMD::FmVector3* vertRestPositions,
	AMD::FmTetVertIds* tetVertIds,
	std::vector<AMD::uint>* vertIncidentTets,
	AMD::uint numVerts, AMD::uint numTets)
{
    // Init permutations
    vertPermutation.clear();
    vertPermutation.reserve(numVerts);
    for (AMD::uint i = 0; i < numVerts; i++)
    {
        vertPermutation.push_back(i);
    }

    tetPermutation.clear();
    tetPermutation.reserve(numTets);
    for (AMD::uint i = 0; i < numTets; i++)
    {
        tetPermutation.push_back(i);
    }

	PartitionMeshInput partitionMeshInput;
	partitionMeshInput.tetVertIndices = tetVertIds;
	partitionMeshInput.vertIncidentTets = vertIncidentTets;
	partitionMeshInput.numVerts = numVerts;
	partitionMeshInput.numTets = numTets;
	AMD::uint numPartitions = numVerts / 64;
	partitionMeshInput.numPartitions = numPartitions;

	if (partitionMeshInput.numPartitions <= 1)
		return;

	AMD::uint* vertPartitionOffsets = new AMD::uint[numPartitions + 1];
	AMD::uint* vertPartitionIndices = new AMD::uint[numVerts];
	AMD::uint* tetPartitionOffsets = new AMD::uint[numPartitions + 1];
	AMD::uint* tetPartitionIndices = new AMD::uint[numTets];

	PartitionMesh(vertPartitionOffsets, vertPartitionIndices, tetPartitionOffsets, tetPartitionIndices, partitionMeshInput);

	// Order verts in partition order
	AMD::uint* remapVertIds = new AMD::uint[numVerts];
	for (AMD::uint i = 0; i < numVerts; i++)
	{
		remapVertIds[vertPartitionIndices[i]] = i;
	}

	// Order tets by visiting from verts
	AMD::uint* remapTetIds = new AMD::uint[numTets];
	bool* tetAdded = new bool[numTets];
	AMD::uint numTetsAdded = 0;
	for (AMD::uint i = 0; i < numTets; i++)
	{
		tetAdded[i] = false;
	}

	for (AMD::uint i = 0; i < numVerts; i++)
	{
		AMD::uint vertIdx = vertPartitionIndices[i];
		for (AMD::uint t = 0; t < vertIncidentTets[vertIdx].size(); t++)
		{
			AMD::uint tetIdx = vertIncidentTets[vertIdx][t];
			if (!tetAdded[tetIdx])
			{
				remapTetIds[tetIdx] = numTetsAdded;
				tetAdded[tetIdx] = true;
				numTetsAdded++;
			}
		}
	}

	// Reorder all the FEM mesh inputs
	AMD::FmVector3* sortedRestPositions = new AMD::FmVector3[numVerts];
	AMD::FmTetVertIds* sortedTetVertIds = new AMD::FmTetVertIds[numTets];
	std::vector<AMD::uint>* sortedVertIncidentTets = new std::vector<AMD::uint>[numVerts];

	for (AMD::uint i = 0; i < numVerts; i++)
	{
		sortedRestPositions[i] = vertRestPositions[vertPartitionIndices[i]];
		sortedVertIncidentTets[i] = vertIncidentTets[vertPartitionIndices[i]];

		// Remap tet ids in incident tets array
		for (AMD::uint t = 0; t < sortedVertIncidentTets[i].size(); t++)
		{
			sortedVertIncidentTets[i][t] = remapTetIds[sortedVertIncidentTets[i][t]];
		}
	}

	for (AMD::uint i = 0; i < numVerts; i++)
	{
		vertRestPositions[i] = sortedRestPositions[i];
		vertIncidentTets[i] = sortedVertIncidentTets[i];
	}

	for (AMD::uint i = 0; i < numTets; i++)
	{
		sortedTetVertIds[remapTetIds[i]] = tetVertIds[i];
	}

	for (AMD::uint i = 0; i < numTets; i++)
	{
		tetVertIds[i] = sortedTetVertIds[i];
	}

	// Remap tet vert ids
	for (AMD::uint i = 0; i < numTets; i++)
	{
		tetVertIds[i].ids[0] = remapVertIds[tetVertIds[i].ids[0]];
		tetVertIds[i].ids[1] = remapVertIds[tetVertIds[i].ids[1]];
		tetVertIds[i].ids[2] = remapVertIds[tetVertIds[i].ids[2]];
		tetVertIds[i].ids[3] = remapVertIds[tetVertIds[i].ids[3]];
	}

    vertPermutation.clear();
    for (AMD::uint i = 0; i < numVerts; i++)
    {
        vertPermutation.push_back(remapVertIds[i]);
    }

    tetPermutation.clear();
    for (AMD::uint i = 0; i < numTets; i++)
    {
        tetPermutation.push_back(remapTetIds[i]);
    }

	delete[] vertPartitionOffsets;
	delete[] vertPartitionIndices;
	delete[] tetPartitionOffsets;
	delete[] tetPartitionIndices;
	delete[] remapVertIds;
	delete[] tetAdded;
	delete[] remapTetIds;
	delete[] sortedRestPositions;
	delete[] sortedTetVertIds;
	delete[] sortedVertIncidentTets;
}

#endif