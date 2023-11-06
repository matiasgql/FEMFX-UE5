//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMResource.h"
#include "FEMFXMeshComponent.h"
#include "AMD_FEMFX.h"
#include "FEMCommon.h"
#include "PartitionMesh.h"
#include "FEMConnectivity.h"

#include <vector>

static inline void AddIncidentTetToSetNew(std::vector<unsigned int>& vertTetIds, unsigned int tetId)
{
	//auto it = vertTetIds.CreateIterator(); it; ++it) //
	for (std::vector<unsigned int>::iterator it = vertTetIds.begin(); it != vertTetIds.end(); it++)
	{
		unsigned int vTetId = *it;
		if (vTetId == tetId)
			return;
	}
	//vertTetIds.Push(tetId);
	vertTetIds.push_back(tetId);
}



UFEMResource::UFEMResource(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void UFEMResource::ProcessResource()
{
	
	for (int compIdx = 0; compIdx < Components.Num(); ++compIdx)
	{

		FComponentResources comp;

		FNodeResource& nodeResource = Components[compIdx].NodeFile;
		FEleResource& eleResource = Components[compIdx].EleFile;

		comp.Tags = Components[compIdx].Tags;
		comp.Materials = Components[compIdx].Materials;
		comp.NumberOfCornersPerShard = Components[compIdx].NumberOfCornersPerShard;
		comp.FBXFiles = Components[compIdx].FBXFiles;
		comp.Name = Components[compIdx].Name;
		comp.IsFracturable = Components[compIdx].IsFracturable;
		comp.CollisionGroup = Components[compIdx].CollisionGroup;
		comp.NumVerts = nodeResource.NumPoints;
		comp.NumTets = eleResource.NumTetrahedra;
		comp.meshSections = Components[compIdx].MeshSections;

		AMD::FmVector3* restPositions = new AMD::FmVector3[comp.NumVerts];
		AMD::FmTetVertIds* tetVertIds = new AMD::FmTetVertIds[comp.NumTets];
		std::vector<unsigned int>* vertIncidentTets = new std::vector<unsigned int>[comp.NumVerts];

		for (int i = 0; i < nodeResource.Data.Num(); i += 4)
		{
			// This is part of the code that is hard coded to only support 3 dimensional tets
			int numDimensions = nodeResource.NumDimensions;
			restPositions[i/4].x = nodeResource.Data[i + 1];
			restPositions[i/4].y = nodeResource.Data[i + 2];
			restPositions[i/4].z = nodeResource.Data[i + 3];
		}

		for (int eleTetIndex = 0; eleTetIndex < comp.NumTets; ++eleTetIndex)
		{
			FTet& tet = eleResource.Data[eleTetIndex];
			int nodeIdx0, nodeIdx1, nodeIdx2, nodeIdx3;

			nodeIdx0 = tet.Indicies[0];
			nodeIdx1 = tet.Indicies[1];
			nodeIdx2 = tet.Indicies[2];
			nodeIdx3 = tet.Indicies[3];

			// number from 0
			nodeIdx0--;
			nodeIdx1--;
			nodeIdx2--;
			nodeIdx3--;

			if (nodeIdx0 < 0 || nodeIdx0 >= comp.NumVerts
				|| nodeIdx1 < 0 || nodeIdx1 >= comp.NumVerts
				|| nodeIdx2 < 0 || nodeIdx2 >= comp.NumVerts
				|| nodeIdx3 < 0 || nodeIdx3 >= comp.NumVerts)
			{
				// Something Is Very Wrong
				return;
			}

			AddIncidentTetToSetNew(vertIncidentTets[nodeIdx0], eleTetIndex);
			AddIncidentTetToSetNew(vertIncidentTets[nodeIdx1], eleTetIndex);
			AddIncidentTetToSetNew(vertIncidentTets[nodeIdx2], eleTetIndex);
			AddIncidentTetToSetNew(vertIncidentTets[nodeIdx3], eleTetIndex);

			tetVertIds[eleTetIndex].ids[0] = nodeIdx0;
			tetVertIds[eleTetIndex].ids[1] = nodeIdx1;
			tetVertIds[eleTetIndex].ids[2] = nodeIdx2;
			tetVertIds[eleTetIndex].ids[3] = nodeIdx3;
		}

		/*if (!(comp.Tags.Num() > 0))
			SortByPartition(restPositions, tetVertIds, vertIncidentTets, comp.NumVerts, comp.NumTets);*/

		comp.minPos = FVector();
		comp.maxPos = FVector();
		AMD::FmVector3 minP = restPositions[0];
		AMD::FmVector3 maxP = restPositions[0];

		for (int vIdx = 0; vIdx < comp.NumVerts; vIdx++)
		{
			minP = min(minP, restPositions[vIdx]);
			maxP = max(maxP, restPositions[vIdx]);
		}

		comp.minPos.X = minP.x;
		comp.minPos.Y = minP.y;
		comp.minPos.Z = minP.z;

		comp.maxPos.X = maxP.x;
		comp.maxPos.Y = maxP.y;
		comp.maxPos.Z = maxP.z;

		comp.RestVolume = AMD::FmComputeTetMeshVolume(restPositions, tetVertIds, comp.NumTets);

		int restPosSize = sizeof(AMD::FmVector3) * comp.NumVerts;
		int tetVertIdsSize = sizeof(AMD::FmTetVertIds) * comp.NumTets;

		comp.restPositions.AddUninitialized(restPosSize);
		FMemory::Memcpy(comp.restPositions.GetData(), restPositions, restPosSize);

		comp.tetVertIds.AddUninitialized(tetVertIdsSize);
		FMemory::Memcpy(comp.tetVertIds.GetData(), tetVertIds, tetVertIdsSize);

		for (int i = 0; i < comp.NumVerts; ++i)
		{
			comp.vertIncidentTets.Add(vertIncidentTets[i].size());
			for (int j = 0; j < vertIncidentTets[i].size(); ++j)
			{
				comp.vertIncidentTets.Add(vertIncidentTets[i][j]);
			}
		}

		delete[] restPositions;
		delete[] tetVertIds;
		delete[] vertIncidentTets;

		ComponentResources.Add(comp);
	}
}

FComponentResources UFEMResource::ProcessResource(AMD::FmVector3* restPositions, AMD::FmTetVertIds* tetVertIds, std::vector<unsigned int>* vertIncidentTets, int numVerts, int numTets)
{
	FComponentResources comp;
	comp.NumVerts = numVerts;
	comp.NumTets = numTets;
	comp.CollisionGroup = 0;

	comp.minPos = FVector();
	comp.maxPos = FVector();
	AMD::FmVector3 minP = restPositions[0];
	AMD::FmVector3 maxP = restPositions[0];

	for (int vIdx = 0; vIdx < comp.NumVerts; vIdx++)
	{
		minP = min(minP, restPositions[vIdx]);
		maxP = max(maxP, restPositions[vIdx]);
	}

	comp.minPos.X = minP.x;
	comp.minPos.Y = minP.y;
	comp.minPos.Z = minP.z;

	comp.maxPos.X = maxP.x;
	comp.maxPos.Y = maxP.y;
	comp.maxPos.Z = maxP.z;

	comp.RestVolume = AMD::FmComputeTetMeshVolume(restPositions, tetVertIds, comp.NumTets);

	int restPosSize = sizeof(AMD::FmVector3) * comp.NumVerts;
	int tetVertIdsSize = sizeof(AMD::FmTetVertIds) * comp.NumTets;

	comp.restPositions.AddUninitialized(restPosSize);
	FMemory::Memcpy(comp.restPositions.GetData(), restPositions, restPosSize);

	comp.tetVertIds.AddUninitialized(tetVertIdsSize);
	FMemory::Memcpy(comp.tetVertIds.GetData(), tetVertIds, tetVertIdsSize);

	for (int i = 0; i < comp.NumVerts; ++i)
	{
		comp.vertIncidentTets.Add(vertIncidentTets[i].size());
		for (int j = 0; j < vertIncidentTets[i].size(); ++j)
		{
			comp.vertIncidentTets.Add(vertIncidentTets[i][j]);
		}
	}

	return comp;
}

void UFEMResource::AddComponent(FComponent comp)
{
	Components.Add(comp);
}