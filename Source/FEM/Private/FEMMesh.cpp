//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMMesh.h"
#include "AMD_FEMFX.h"
#include "FEMFXVectormath.h"
#include "FEMFXMathConversion.h"
#include "RawIndexBuffer.h"
#include "Engine/StaticMesh.h"
#include "FEMMeshTypes.h"
#include "ProceduralMeshHelper.h"
#include "IFEM.h"

#include <algorithm>

UFEMMesh::UFEMMesh(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	FName name = MakeUniqueObjectName(this, UFEMMeshResource::StaticClass(), *GetName());
	ImportedResource = NewObject<UFEMMeshResource>(this, name);

	name = MakeUniqueObjectName(this, UFEMTetMesh::StaticClass(), *GetName());
	TetMesh = NewObject<UFEMTetMesh>(this, name);

	IsWoodPanel = false;

	NumberOfCornersPerShard = 8;
}

bool UFEMMesh::IsCreated()
{
	bool created = true;

	if (GetImportedResource()->FEMFXMeshSections.Num() == 0)
		created = false;

	if (GetTetMesh()->GetVertexPositions().Num() == 0
	 || GetTetMesh()->GetVertexRotations().Num() == 0
	 || GetTetMesh()->GetTetVertexIds().Num() == 0)
		created = false;

	return created;
}

FFEMFXMeshSection* UFEMMesh::CreateMeshSectionFromFEMFile(AMD::FmTetMeshBuffer* tetMeshBuffer, AMD::FmBvh* BVH, int sectionIdx)
{
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FFEMFXMeshTangent> Tangents;
	TArray<int32> BarycentricPosOffsets;
	TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;
	TArray<int32> Triangles;
    TArray<int32> BarycentricPosOffsetIds;
    TArray<int32> BarycentricPosBaseIds;
    int32 MaxTriIndices;

	FMeshSection section = ComponentResources.meshSections[sectionIdx];
	// using Houdini nomenclature of vertex and point. Point = shard corner

	// Build Normals: an array of vertex normals (per Vertex)
	TArray<float>& normalsBuffer = section.VertexNormal;
	for (int i = 0; i < (normalsBuffer.Num() / 3); i++)
	{
		//AMD::FmVector3 importNormal(normalsBuffer[(i * 3)], normalsBuffer[(i * 3) + 1], normalsBuffer[(i * 3) + 2]);
		AMD::FmVector3 vec(normalsBuffer[(i * 3)], normalsBuffer[(i * 3) + 1], normalsBuffer[(i * 3) + 2]);
		//FVector converted (ConvertFEMFXVectorToUnreal(importNormal));
		FVector3f converted(-vec.z, vec.x, vec.y);
		Normals.Add(converted);
	}

	// Build Tangents: an array of vertex tangents (per Vertex)
	TArray<float>& tangentsBuffer = section.VertexTangent;
	for (int i = 0; i < (tangentsBuffer.Num() / 3); i++)
	{
		AMD::FmVector3 importTangent(tangentsBuffer[(i * 3)], tangentsBuffer[(i * 3) + 1], tangentsBuffer[(i * 3) + 2]);
		FVector3f converted(ConvertFEMFXVectorToUnreal(importTangent));
		Tangents.Add(FFEMFXMeshTangent(converted.X, converted.Y, converted.Z));
	}

	// Build UV0: an array of vertex uvs (per Vertex)
	TArray<float>& uvsBuffer = section.VertexUVs;
	for (int i = 0; i < (uvsBuffer.Num() / 3); i++)
	{
		UV0.Add(FVector2f(uvsBuffer[(i * 3)], uvsBuffer[(i * 3) + 1]));
	}

	// Build VertexColors: an array of linear colors (per Vertex)
	TArray<float>& colorBuffer = section.VertexColor;
	for (int i = 0; i < colorBuffer.Num() / 4; i++)
	{
		VertexColors.Add(FLinearColor(colorBuffer[(i * 4)], colorBuffer[(i * 4) + 1], colorBuffer[(i * 4) + 2], colorBuffer[(i * 4) + 3]));
	}

	// Build Vertices: an array of vertex positions (per vertex)
	TArray<float>& positionBuffer = section.VertexPosition;
	for (int i = 0; i < positionBuffer.Num() / 3; i++)
	{
		FVector3f inPos(positionBuffer[i * 3], positionBuffer[(i * 3) + 1], positionBuffer[(i * 3) + 2]);
		//FVector3f outPos(-inPos.Y, -inPos.Z, inPos.X);
		Vertices.Add(inPos);
	}

    // Create NonFractureRegion information for computing barycentrics
    AMD::FmVector3* vertRestPositions = (AMD::FmVector3*)ComponentResources.restPositions.GetData();
    AMD::FmTetVertIds* tetVertIds = (AMD::FmTetVertIds*)ComponentResources.tetVertIds.GetData();

    // .fem non-fracture regions may not be separate connected components, which is assumed by preprocessing code.
    // Instead build non-fracture region lists based on information from the tet mesh buffer
    AMD::uint NumNonFractureRegions = AMD::FmGetMaxTetMeshes(*tetMeshBuffer);
    AMD::uint NumBufferTets = AMD::FmGetNumTets(*tetMeshBuffer);
    std::vector<AMD::uint>* RegionTetIds = new std::vector<AMD::uint>[NumNonFractureRegions];
    std::vector<AMD::uint>* RegionFractureFaces = new std::vector<AMD::uint>[NumBufferTets];

    for (AMD::uint i = 0; i < NumBufferTets; i++)
    {
        AMD::uint FractureGroupId;
        uint16_t TetFlags;

        FmGetTetMeshBufferTetInfo(&FractureGroupId, &TetFlags, *tetMeshBuffer, i);

        RegionTetIds[FractureGroupId].push_back(i);
        RegionFractureFaces[FractureGroupId].push_back(TetFlags & (FM_TET_FLAG_FACE0_FRACTURE_DISABLED | FM_TET_FLAG_FACE1_FRACTURE_DISABLED | FM_TET_FLAG_FACE2_FRACTURE_DISABLED | FM_TET_FLAG_FACE3_FRACTURE_DISABLED));
    }

    AMD::NonFractureRegions Regions(NumBufferTets);

    for (AMD::uint RegionIdx = 0; RegionIdx < NumNonFractureRegions; RegionIdx++)
    {
        Regions.AddRegion(
            vertRestPositions,
            tetVertIds,
            RegionTetIds[RegionIdx], RegionFractureFaces[RegionIdx]);
    }

    delete[] RegionTetIds;
    delete[] RegionFractureFaces;

	//// Barycentrics /////

	int NumShardVertices = section.NumberOfShardVertices;
    int NumVertices = section.ShardVertexIds.Num();

    TetMesh->TetFractureShardVerticesToUpdate.Reset();
    TetMesh->TetFractureShardVerticesToUpdate.AddDefaulted(FmGetNumTets(*tetMeshBuffer));

	TArray<int>& ShardVertexIdsBuffer = section.ShardVertexIds;
	TArray<float>& BarycentricsBuffer = section.Barycentrics;
	TArray<int>& TetAssignmentBuffer = section.TetAssignment;

    TArray<AMD::ShardVertTetAssignments> ShardVertTetAssignments;
    ShardVertTetAssignments.AddDefaulted(NumShardVertices);

	TArray<float>& centroidBuffer = section.Centroids;
	if (centroidBuffer.Num() > 0)
	//if(0)
	{
        BarycentricPosBaseIds.AddDefaulted(NumVertices);

        // Initialize barycentrics
		BarycentricPositions.Reset();

		ShardVertTetAssignmentsBuffer.Reset();
		ShardVertTetAssignmentsBuffer.AddUninitialized(NumShardVertices);

        // Create array of base ids for shard vertices, also a flag to detect when shard vertex has been processed
        TArray<int> ShardVertexBarycentricPosBaseIds;
        ShardVertexBarycentricPosBaseIds.AddUninitialized(NumShardVertices);

		IsWoodPanel = true;
        for (int ShardVertId = 0; ShardVertId < NumShardVertices; ShardVertId++)
        {

            ///// Per vertex
            if (NumberOfCornersPerShard <= 0)
                NumberOfCornersPerShard = 8;

            AMD::FmVector3 shardCentroid(centroidBuffer[ShardVertId * 3], centroidBuffer[(ShardVertId * 3) + 1], centroidBuffer[(ShardVertId * 3) + 2]);
            AMD::FmVector3 renderPos(Vertices[ShardVertId].X, Vertices[ShardVertId].Y, Vertices[ShardVertId].Z); // Vertices (positions array) is same as Shard Vertices

            FShardVertTetAssignments& shardTetAssignments = ShardVertTetAssignmentsBuffer[ShardVertId];

            AMD::ComputeShardVertTetAssignments(&ShardVertTetAssignments[ShardVertId].tetAssignments, Regions, *tetMeshBuffer, vertRestPositions, *BVH, renderPos, shardCentroid);
            ShardVertTetAssignments[ShardVertId].SetNumTets();

            uint32 numTetAssignments = ShardVertTetAssignments[ShardVertId].numTets;
            shardTetAssignments.numTets = numTetAssignments;

            for (AMD::uint taIdx = 0; taIdx < numTetAssignments; taIdx++)
            {
                shardTetAssignments.tetAssignments[taIdx] = ShardVertTetAssignments[ShardVertId].tetAssignments[taIdx];
            }

            int32 baryPosBase = BarycentricPositions.Num();

            ShardVertexBarycentricPosBaseIds[ShardVertId] = baryPosBase;

			for (int32 TetIdx = 0; TetIdx < (int32)shardTetAssignments.numTets; TetIdx++)
			{
				FFEMFXMeshBarycentricPos BarycentricPos;
				BarycentricPos.BarycentricCoord0 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[0];
				BarycentricPos.BarycentricCoord1 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[1];
				BarycentricPos.BarycentricCoord2 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[2];
				BarycentricPos.BarycentricCoord3 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[3];
				BarycentricPos.TetId = shardTetAssignments.tetAssignments[TetIdx].tetId;
				BarycentricPositions.Add(BarycentricPos);
			}
		}

        TArray<int>& triangles = section.Triangles;

        for (int VertexId = 0; VertexId < NumVertices; VertexId++)
        {
            int ShardVertexId = ShardVertexIdsBuffer[VertexId];

            UE_LOG(FEMLog, Warning, TEXT("IDs: %d %d"), ShardVertexId, triangles[VertexId]);

            BarycentricPosBaseIds[VertexId] = ShardVertexBarycentricPosBaseIds[ShardVertexId];
        }

        // Find groups of shard vertices which share the same tet assignments.  These vertices can all share a barycentric position offset.
        AMD::ShardVertGroups ShardVertGroups;
        AMD::CreateShardVertGroups(&ShardVertGroups, ShardVertTetAssignments.GetData(), ShardVertTetAssignments.Num());
    
        std::vector<AMD::uint> BaryPosOffsets;
        std::vector<AMD::uint> BaryPosOffsetIds;
        std::vector<AMD::TetFractureShardVerticesToUpdate> TetFractureShardVertices;
        TetFractureShardVertices.resize(FmGetNumTets(*tetMeshBuffer));
    
        CreateShardRenderData(&BaryPosOffsets, &BaryPosOffsetIds, TetFractureShardVertices.data(), &ShardVertGroups, ShardVertexIdsBuffer.Num(), (AMD::uint*)ShardVertexIdsBuffer.GetData(),
            ShardVertTetAssignments.GetData());
    
        for (int i = 0; i < (int)BaryPosOffsetIds.size(); i++)
        {
            BarycentricPosOffsetIds.Add(BaryPosOffsetIds[i]);
        }
    
        int NumGroups = (int)BaryPosOffsets.size();
        BarycentricPosOffsets.Reset();
        for (int i = 0; i < NumGroups; i++)
        {
            BarycentricPosOffsets.Add((int)BaryPosOffsets[i]);
        }
    
        // CreateShardRenderData() created a map from tet faces to bary pos offsets; copy to the TetMesh
        AMD::uint NumTets = FmGetNumTets(*tetMeshBuffer);
        for (AMD::uint tetId = 0; tetId < NumTets; tetId++)
        {
            for (int faceId = 0; faceId < 4; faceId++)
            {
                std::vector<FShardVertUpdateInfo>& SrcFaceShardVertices = TetFractureShardVertices[tetId].GetShardVerticesOfFace(faceId);
    
                TArray<FShardVertUpdateInfo>& DstFaceShardVertices = TetMesh->TetFractureShardVerticesToUpdate[tetId].GetShardVerticesOfFace(faceId);
    
                for (int i = 0; i < (int)SrcFaceShardVertices.size(); i++)
                {
                    DstFaceShardVertices.Add(SrcFaceShardVertices[i]);
                }
            }
        }
	}
	else
	{
		// Build BarycentricPositions: an array of barycentric positons (can be per point, or multiples per point, for wood-like fracture)
		for (int i = 0; i < TetAssignmentBuffer.Num(); i++)
		{
			FFEMFXMeshBarycentricPos barys;
			barys.BarycentricCoord0 = BarycentricsBuffer[(i * 4)];
			barys.BarycentricCoord1 = BarycentricsBuffer[(i * 4) + 1];
			barys.BarycentricCoord2 = BarycentricsBuffer[(i * 4) + 2];
			barys.BarycentricCoord3 = BarycentricsBuffer[(i * 4) + 3];
			barys.TetId = TetAssignmentBuffer[i];
			BarycentricPositions.Add(barys);
		}

        BarycentricPosOffsets.Add(0);

		TArray<int>& BarycentricsPosIds = section.BarycentricsPosIds;
		for (int i = 0; i < NumVertices; i++)
		{
            int32 ShardVertexId = ShardVertexIdsBuffer[i];
            int32 BaryPosBaseId = BarycentricsPosIds[ShardVertexId];
            BarycentricPosBaseIds.Add(BaryPosBaseId);
            BarycentricPosOffsetIds.Add(0);
		}
	}

	// Build Triangles, ShardId
	TetMesh->FEMMeshInteriorMeshSection = 0;
	TetMesh->FEMMeshTetFractureNewRenderFaces.Reset();
    AMD::uint NumTets = FmGetNumTets(*tetMeshBuffer);
	TetMesh->FEMMeshTetFractureNewRenderFaces.AddDefaulted(NumTets);

	TArray<int>& TetFace = section.AssignedTetFace;

	TArray<int>& triangles = section.Triangles;

	for (int i = 0; i < triangles.Num()/3; i++)
	{
		if (TetFace.Num() > 0)
		{
			int VertIdx0 = i * 3;
			int VertIdx1 = (i * 3) + 1;
			int VertIdx2 = (i * 3) + 2;

			int TetFace0 = TetFace[triangles[VertIdx0]];
			int TetFace1 = TetFace[triangles[VertIdx1]];
			int TetFace2 = TetFace[triangles[VertIdx2]];

			if (TetFace0 != TetFace2 || TetFace2 != TetFace1)
			{
				UE_LOG(FEMLog, Warning, TEXT("CreateFEMMesh: Inconsistent tet faces of vertices of triangle"));
			}

			if (TetFace0 >= 0)
			{
				int TetId = TetAssignmentBuffer[section.BarycentricsPosIds[ShardVertexIdsBuffer[TetFace0]]];

                AMD::FmTetMesh* TetMesh0 = AMD::FmGetTetMesh(*tetMeshBuffer, 0);

                AMD::FmTetFaceIncidentTetIds TetFaceIncidentTetIds = AMD::FmGetTetFaceIncidentTetIds(*TetMesh0, TetId);

				if (AMD::FmIsExteriorFaceId(TetFaceIncidentTetIds.ids[TetFace0]))
				{
					UE_LOG(FEMLog, Warning, TEXT("CreateMeshSectionFromFEMFile: Interior render triangle has exterior tet face"));
				}

				TArray<int32>* Indices = nullptr;
				GetTetMesh()->GetTetFractureNewRenderFacesRef()[TetId].GetIndicesRef(TetFace0, Indices);
				Indices->Add(triangles[i * 3]);
				Indices->Add(triangles[(i * 3) + 1]);
				Indices->Add(triangles[(i * 3) + 2]);
			}
			else
			{
				Triangles.Add(triangles[i * 3]);
				Triangles.Add(triangles[(i * 3) + 1]);
				Triangles.Add(triangles[(i * 3) + 2]);
			}
		}
		else
		{
			Triangles.Add(triangles[i * 3]);
			Triangles.Add(triangles[(i * 3) + 1]);
			Triangles.Add(triangles[(i * 3) + 2]);
		}
	}

	MaxTriIndices = triangles.Num();

	return CreateMeshSection_LinearColor(sectionIdx, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, BarycentricPosOffsetIds, BarycentricPosBaseIds, BarycentricPosOffsets, BarycentricPositions, false, MaxTriIndices);
}

FFEMFXMeshSection* UFEMMesh::CreateMeshSection(UStaticMesh* StaticMesh, AMD::FmTetMeshBuffer* tetMeshBuffer, AMD::FmBvh* BvHierarchy, int sectionIdx)
{
	check(TetMesh);

    
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FFEMFXMeshTangent> Tangents;
	TArray<int32> BarycentricPosOffsets;
	TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;
	TArray<int32> Triangles;
    TArray<int32> BarycentricPosOffsetIds;
    TArray<int32> BarycentricPosBaseIds;
    int32 MaxTriIndices;

	FMeshSection section = ComponentResources.meshSections[sectionIdx];

	TetMesh->FEMMeshInteriorMeshSection = 0;
	TetMesh->FEMMeshTetFractureNewRenderFaces.Reset();
	TetMesh->FEMMeshTetFractureNewRenderFaces.AddDefaulted(FmGetNumTets(*tetMeshBuffer));

	FPositionVertexBuffer* posVertBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.PositionVertexBuffer;
	FRawStaticIndexBuffer* indexBuffer = &StaticMesh->GetRenderData()->LODResources[0].IndexBuffer;
	FStaticMeshVertexBuffer* meshVertBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.StaticMeshVertexBuffer;
	FColorVertexBuffer* colorVertexBuffer = &StaticMesh->GetRenderData()->LODResources[0].VertexBuffers.ColorVertexBuffer;

	FBox BoundsBox;
	BoundsBox.Min = FVector(0, 0, 0);
	BoundsBox.Max = FVector(0, 0, 0);
	BoundsBox.IsValid = 1;

    BarycentricPosOffsets.Add(0);  // One zero offset for all vertices

	if (posVertBuffer)
	{
		unsigned int NumShardVertices = 0;

		for (uint32 VertIdx = 0; VertIdx < posVertBuffer->GetNumVertices(); VertIdx++)
		{
			// VERTEX POSITIONS
			FVector3f vertexPosition = posVertBuffer->VertexPosition(VertIdx);
			AMD::FmVector3 vertPos;
			vertPos.x = vertexPosition.X;
			vertPos.y = vertexPosition.Y;
			vertPos.z = vertexPosition.Z;
			vertexPosition = ConvertFEMFXVectorToUnreal(vertPos);
			//vertexPosition *= scale;
			Vertices.Add(vertexPosition);

			// VERTEX NORMALS
			FVector3f Normal = meshVertBuffer->VertexTangentZ(VertIdx);
			AMD::FmVector3 vertNormal;
			vertNormal.x = Normal.X;
			vertNormal.y = Normal.Y;
			vertNormal.z = Normal.Z;
			//Normal = ConvertFEMFXVectorToUnreal(vertNormal);
			Normal.Normalize();
			Normals.Add(Normal);

			//VERTEX TANGENTS
			FVector3f VertexTan = meshVertBuffer->VertexTangentX(VertIdx);
			AMD::FmVector3 vertTan;
			vertTan.x = VertexTan.X;
			vertTan.y = -VertexTan.Y;
			vertTan.z = VertexTan.Z;
			VertexTan = ConvertFEMFXVectorToUnreal(vertTan);
			VertexTan.Normalize();
			Tangents.Add(FFEMFXMeshTangent(VertexTan.X, VertexTan.Y, VertexTan.Z));

			//UV0
			FVector2f UV = meshVertBuffer->GetVertexUV(VertIdx, 0);
			UV0.Add(UV);

			//VERTEX COLORS
			FLinearColor vertColor = FLinearColor(0.75, 0.75, 0.75, 1);
			if (colorVertexBuffer->IsInitialized())
			{
				vertColor = colorVertexBuffer->VertexColor(VertIdx);
			}
			VertexColors.Add(vertColor);
		}

		// Create NonFractureRegion information for computing barycentrics
		AMD::FmVector3* vertRestPositions = (AMD::FmVector3*)ComponentResources.restPositions.GetData();
		AMD::FmTetVertIds* tetVertIds = (AMD::FmTetVertIds*)ComponentResources.tetVertIds.GetData();

		AMD::NonFractureRegions Regions(ComponentResources.NumTets);

		int32 NumMats = ComponentResources.Materials.Num();
		for (int32 MatIdx = 0; MatIdx < NumMats; MatIdx++)
		{
			TArray<uint32>& CompTetIds = ComponentResources.Materials[MatIdx].TetIds;
			TArray<uint32>& CompNoFractureFaces = ComponentResources.Materials[MatIdx].NoFractureFaces;

			std::vector<AMD::uint> TetIds;
			for (int32 i = 0; i < CompTetIds.Num(); i++)
			{
				TetIds.push_back(CompTetIds[i]);
			}

			std::vector<AMD::uint> NoFractureFaces;
			for (int32 i = 0; i < CompNoFractureFaces.Num(); i++)
			{
				NoFractureFaces.push_back(CompNoFractureFaces[i]);
			}

			Regions.AddRegion(
				vertRestPositions,
				tetVertIds,
				TetIds, NoFractureFaces);
		}

		Regions.AddRemainingRegions((AMD::FmVector3*)ComponentResources.restPositions.GetData(), (AMD::FmTetVertIds*)ComponentResources.tetVertIds.GetData());

		//// Triangle Vertices

		TArray<uint32> idx;
		indexBuffer->GetCopy(idx);

		for (int i = 0; i < indexBuffer->GetNumIndices(); i++)
		{
			Triangles.Add(idx[i]);
		}

		//// Barycentrics /////

		NumShardVertices = section.NumberOfShardVertices;
		int NumVertices = section.ShardVertexIds.Num();

		TetMesh->TetFractureShardVerticesToUpdate.Reset();
		TetMesh->TetFractureShardVerticesToUpdate.AddDefaulted(FmGetNumTets(*tetMeshBuffer));

		TArray<int>& ShardVertexIdsBuffer = section.ShardVertexIds;
		TArray<float>& BarycentricsBuffer = section.Barycentrics;
		TArray<int>& TetAssignmentBuffer = section.TetAssignment;

		TArray<AMD::ShardVertTetAssignments> ShardVertTetAssignments;
		ShardVertTetAssignments.AddDefaulted(NumShardVertices);

		TArray<float>& centroidBuffer = section.Centroids;
		if (centroidBuffer.Num() > 0)
		{
			BarycentricPosBaseIds.AddDefaulted(NumVertices);

			// Initialize barycentrics
			BarycentricPositions.Reset();

			ShardVertTetAssignmentsBuffer.Reset();
			ShardVertTetAssignmentsBuffer.AddUninitialized(NumShardVertices);

			IsWoodPanel = true;
			for (int VertexId = 0; VertexId < ShardVertexIdsBuffer.Num(); VertexId++)
			{
				///// Per vertex
				if (NumberOfCornersPerShard <= 0)
					NumberOfCornersPerShard = 8;

				int32 ShardVertId = ShardVertexIdsBuffer[VertexId];

				AMD::FmVector3 shardCentroid(centroidBuffer[ShardVertId * 3], centroidBuffer[(ShardVertId * 3) + 1], centroidBuffer[(ShardVertId * 3) + 2]);
				//AMD::FmVector3 renderPos(Vertices[i].Z, -Vertices[i].X, -Vertices[i].Y);
				AMD::FmVector3 renderPos(Vertices[ShardVertId].X, Vertices[ShardVertId].Y, Vertices[ShardVertId].Z);

				FShardVertTetAssignments& shardTetAssignments = ShardVertTetAssignmentsBuffer[ShardVertId];

				AMD::ComputeShardVertTetAssignments(&ShardVertTetAssignments[ShardVertId].tetAssignments, Regions, *tetMeshBuffer, vertRestPositions, *BvHierarchy, renderPos, shardCentroid);
				ShardVertTetAssignments[ShardVertId].SetNumTets();

				uint32 numTetAssignments = ShardVertTetAssignments[ShardVertId].numTets;
				shardTetAssignments.numTets = numTetAssignments;

				for (AMD::uint taIdx = 0; taIdx < numTetAssignments; taIdx++)
				{
					shardTetAssignments.tetAssignments[taIdx] = ShardVertTetAssignments[ShardVertId].tetAssignments[taIdx];
				}

				int32 baryPosBase = BarycentricPositions.Num();

				BarycentricPosBaseIds[ShardVertId] = baryPosBase;

				for (int32 TetIdx = 0; TetIdx < (int32)shardTetAssignments.numTets; TetIdx++)
				{
					FFEMFXMeshBarycentricPos BarycentricPos;
					BarycentricPos.BarycentricCoord0 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[0];
					BarycentricPos.BarycentricCoord1 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[1];
					BarycentricPos.BarycentricCoord2 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[2];
					BarycentricPos.BarycentricCoord3 = shardTetAssignments.tetAssignments[TetIdx].barycentricCoords[3];
					BarycentricPos.TetId = shardTetAssignments.tetAssignments[TetIdx].tetId;
					BarycentricPositions.Add(BarycentricPos);
				}
			}

			// Find groups of shard vertices which share the same tet assignments.  These vertices can all share a barycentric position offset.
			AMD::ShardVertGroups ShardVertGroups;
			AMD::CreateShardVertGroups(&ShardVertGroups, ShardVertTetAssignments.GetData(), ShardVertTetAssignments.Num());

			std::vector<AMD::uint> BaryPosOffsets;
			std::vector<AMD::uint> BaryPosOffsetIds;
			std::vector<AMD::TetFractureShardVerticesToUpdate> TetFractureShardVertices;
			TetFractureShardVertices.resize(FmGetNumTets(*tetMeshBuffer));

			CreateShardRenderData(&BaryPosOffsets, &BaryPosOffsetIds, TetFractureShardVertices.data(), &ShardVertGroups, ShardVertexIdsBuffer.Num(), (AMD::uint*)ShardVertexIdsBuffer.GetData(),
				ShardVertTetAssignments.GetData());

			for (int i = 0; i < (int)BaryPosOffsetIds.size(); i++)
			{
				BarycentricPosOffsetIds.Add(BaryPosOffsetIds[i]);
			}

			int NumGroups = (int)BaryPosOffsets.size();
			BarycentricPosOffsets.Reset();
			for (int i = 0; i < NumGroups; i++)
			{
				BarycentricPosOffsets.Add((int)BaryPosOffsets[i]);
			}

			// CreateShardRenderData() created a map from tet faces to bary pos offsets; copy to the TetMesh
            AMD::uint NumTets = FmGetNumTets(*tetMeshBuffer);
			for (AMD::uint tetId = 0; tetId < NumTets; tetId++)
			{
				for (int faceId = 0; faceId < 4; faceId++)
				{
					std::vector<FShardVertUpdateInfo>& SrcFaceShardVertices = TetFractureShardVertices[tetId].GetShardVerticesOfFace(faceId);

					TArray<FShardVertUpdateInfo>& DstFaceShardVertices = TetMesh->TetFractureShardVerticesToUpdate[tetId].GetShardVerticesOfFace(faceId);

					for (int i = 0; i < (int)SrcFaceShardVertices.size(); i++)
					{
						DstFaceShardVertices.Add(SrcFaceShardVertices[i]);
					}
				}
			}
		}
		else
		{
			// Build BarycentricPositions: an array of barycentric positons (can be per point, or multiples per point, for wood-like fracture)
			for (int i = 0; i < TetAssignmentBuffer.Num(); i++)
			{
				FFEMFXMeshBarycentricPos barys;
				barys.BarycentricCoord0 = BarycentricsBuffer[(i * 4)];
				barys.BarycentricCoord1 = BarycentricsBuffer[(i * 4) + 1];
				barys.BarycentricCoord2 = BarycentricsBuffer[(i * 4) + 2];
				barys.BarycentricCoord3 = BarycentricsBuffer[(i * 4) + 3];
				barys.TetId = TetAssignmentBuffer[i];
				BarycentricPositions.Add(barys);
			}

			BarycentricPosOffsets.Add(0);
			BarycentricPosBaseIds.AddDefaulted(Vertices.Num());

			//TArray<int>& BarycentricsPosIds = section.BarycentricsPosIds;
			for (int i = 0; i < idx.Num(); i++)
			{
				int32 fbxIndex = idx[i];

				BarycentricPosBaseIds[fbxIndex] = ShardVertexIdsBuffer[i];

				//int32 ShardVertexId = ShardVertexIdsBuffer[i];
				//int32 BaryPosBaseId = BarycentricsPosIds[ShardVertexId];
				//BarycentricPosBaseIds.Add(BaryPosBaseId);
				BarycentricPosOffsetIds.Add(0);
			}
		}

		// ShardId
		TetMesh->FEMMeshInteriorMeshSection = 0;
		TetMesh->FEMMeshTetFractureNewRenderFaces.Reset();
		TetMesh->FEMMeshTetFractureNewRenderFaces.AddDefaulted(FmGetNumTets(*tetMeshBuffer));

		TArray<int>& TetFace = section.AssignedTetFace;

		TArray<int>& triangles = section.Triangles;

		for (int i = 0; i < triangles.Num() / 3; i++)
		{
			int VertIdx0 = triangles[i * 3];
			int VertIdx1 = triangles[(i * 3) + 1];
			int VertIdx2 = triangles[(i * 3) + 2];

			int TetFace0 = TetFace[VertIdx0];
			int TetFace1 = TetFace[VertIdx1];
			int TetFace2 = TetFace[VertIdx2];

			if (TetFace0 != TetFace2 || TetFace2 != TetFace1)
			{
				UE_LOG(FEMLog, Warning, TEXT("CreateFEMMesh: Inconsistent tet faces of vertices of triangle"));
			}

			if (TetFace0 >= 0)
			{
				int TetId = TetAssignmentBuffer[section.BarycentricsPosIds[ShardVertexIdsBuffer[i * 3]]];

                AMD::FmTetMesh* TetMesh0 = AMD::FmGetTetMesh(*tetMeshBuffer, 0);

                AMD::FmTetFaceIncidentTetIds TetFaceIncidentTetIds = AMD::FmGetTetFaceIncidentTetIds(*TetMesh0, TetId);

				if (AMD::FmIsExteriorFaceId(TetFaceIncidentTetIds.ids[TetFace0]))
				{
					UE_LOG(FEMLog, Warning, TEXT("CreateMeshSectionFromFEMFile: Interior render triangle has exterior tet face"));
				}

				TArray<int32>* Indices = nullptr;
				GetTetMesh()->GetTetFractureNewRenderFacesRef()[TetId].GetIndicesRef(TetFace0, Indices);
				Indices->Add(VertIdx0);
				Indices->Add(VertIdx1);
				Indices->Add(VertIdx2);
			}
		}


		MaxTriIndices = triangles.Num();

		return CreateMeshSection_LinearColor(sectionIdx, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, BarycentricPosOffsetIds, BarycentricPosBaseIds, BarycentricPosOffsets, BarycentricPositions, false, MaxTriIndices);
	}

	return nullptr;
}

FBoxSphereBounds UFEMMesh::UpdateBounds()
{
	FBox BoundsBox;
	BoundsBox.Min = FVector(0, 0, 0);
	BoundsBox.Max = FVector(0, 0, 0);
	BoundsBox.IsValid = 1;

    if (ImportedResource->FEMFXMeshSections.Num() == 0)
    {
        return FBoxSphereBounds();
    }

	for (int i = 0; i < ImportedResource->FEMFXMeshSections[0].VertexBuffer.Num(); i++)
	{
		FVector3f vertexPosition = ImportedResource->FEMFXMeshSections[0].VertexBuffer[i].Position;
		vertexPosition *= 100;

		if (vertexPosition.X < BoundsBox.Min.X)
			BoundsBox.Min.X = vertexPosition.X;
		if (vertexPosition.Y < BoundsBox.Min.Y)
			BoundsBox.Min.Y = vertexPosition.Y;
		if (vertexPosition.Z < BoundsBox.Min.Z)
			BoundsBox.Min.Z = vertexPosition.Z;

		if (vertexPosition.X > BoundsBox.Max.X)
			BoundsBox.Max.X = vertexPosition.X;
		if (vertexPosition.Y > BoundsBox.Max.Y)
			BoundsBox.Max.Y = vertexPosition.Y;
		if (vertexPosition.Z > BoundsBox.Max.Z)
			BoundsBox.Max.Z = vertexPosition.Z;
	}

	return FBoxSphereBounds(BoundsBox);
}

AMD::FmTetMeshBuffer* UFEMMesh::LoadTempBuffer(AMD::FmVector3* RestPositions, int NumTets, int NumVerts, AMD::FmTetVertIds* TetVertIds, bool FractureEnabled)
{
	// int MaxVerts = MAX_VERTS_PER_MESH_BUFFER;
	// int MaxExteriorFaces = NumTets * 4;
	//
	// if (!FractureEnabled)
	// {
	// 	MaxVerts = NumVerts;
	// }

	AMD::FmArray<unsigned int>* vertIncidentTets = new AMD::FmArray<unsigned int>[GetComponentResource().NumVerts];
	int currentNum = 0;
	int lastNum = 0;
	int currentArray = 0;
	for (int i = 0; i < GetComponentResource().vertIncidentTets.Num(); ++i)
	{
		if (i == 0)
		{
			currentNum = GetComponentResource().vertIncidentTets[i];
		}
		else
		{
			if (lastNum + currentNum >= i)
			{
				vertIncidentTets[currentArray].Add(GetComponentResource().vertIncidentTets[i]);
			}
			else
			{
				currentArray++;
				currentNum = GetComponentResource().vertIncidentTets[i];
				lastNum = i;
			}
		}
	}


    AMD::FmFractureGroupCounts* fractureGroupCounts = new AMD::FmFractureGroupCounts[NumTets];
    AMD::uint* tetFractureGroupIds = new AMD::uint[NumTets];

    AMD::FmTetMeshBufferBounds bounds;
    AMD::FmComputeTetMeshBufferBounds(
        &bounds,
        fractureGroupCounts,
        tetFractureGroupIds,
        vertIncidentTets, TetVertIds, NULL,
        NumVerts, NumTets, FractureEnabled);

    AMD::FmTetMeshBufferSetupParams tetMeshParams;
    tetMeshParams.numVerts = bounds.numVerts;
    tetMeshParams.maxVerts = bounds.maxVerts;
    //tetMeshParams.numTets = bounds.numTets;
    tetMeshParams.maxVertAdjacentVerts = bounds.maxVertAdjacentVerts;
    tetMeshParams.numTets = bounds.numTets;
    tetMeshParams.numVertIncidentTets = bounds.numVertIncidentTets;
    tetMeshParams.maxExteriorFaces = bounds.maxExteriorFaces;
    tetMeshParams.maxTetMeshes = bounds.maxTetMeshes;
    tetMeshParams.enablePlasticity = false;
    tetMeshParams.enableFracture = FractureEnabled;
    tetMeshParams.isKinematic = false;

	AMD::FmTetMesh* InitialTetMesh;
    AMD::FmTetMeshBuffer* TetMeshBuffer = FmCreateTetMeshBuffer(tetMeshParams, fractureGroupCounts, tetFractureGroupIds, &InitialTetMesh);

    delete[] fractureGroupCounts;
    delete[] tetFractureGroupIds;

	AMD::FmTetMesh& tetMesh = *InitialTetMesh;
	AMD::FmVector3 position = AMD::FmInitVector3(0);
	AMD::FmMatrix3 rotation = AMD::FmInitMatrix3(AMD::FmInitVector3(1,0,0), AMD::FmInitVector3(0,1,0), AMD::FmInitVector3(0,0,1));
	AMD::FmVector3 velocity = AMD::FmVector3(0.0f, 0.0f, 0.0f);

	AMD::FmInitVertState(&tetMesh, RestPositions, rotation, position, 1.0f, velocity);

    AMD::FmSetCollisionGroup(&tetMesh, 0);

	AMD::FmTetMaterialParams tetMeshMaterialParams = AMD::FmTetMaterialParams();

	AMD::FmInitTetState(&tetMesh, TetVertIds, tetMeshMaterialParams, 0.6f);

	AMD::FmComputeMeshConstantMatrices(&tetMesh);

	AMD::FmSetMassesFromRestDensities(&tetMesh);

	AMD::FmInitConnectivity(&tetMesh, vertIncidentTets);

	AMD::FmFinishTetMeshInit(&tetMesh);

	return TetMeshBuffer;
}

void UFEMMesh::CreateProceduralMesh(ProceduralMeshOptions options)
{
	AMD::uint numVerts;
	AMD::uint numTets;

	ProceduralMeshHelper::GetBlockMeshCounts(&numVerts, &numTets, options.NumCubesX, options.NumCubesY, options.NumCubesZ);

	std::vector<AMD::uint>* vertIncidentTets = new std::vector<AMD::uint>[numVerts];
	AMD::FmVector3* restPositions = new AMD::FmVector3[numVerts];
	AMD::FmTetVertIds* tetVertIds = new AMD::FmTetVertIds[numTets];

	ProceduralMeshHelper::CreateBlockMesh(vertIncidentTets, options.NumCubesX, options.NumCubesY, options.NumCubesZ);
	ProceduralMeshHelper::InitBlockVerts(restPositions, tetVertIds, options.Randomize, options.CubeX, options.CubeY, options.CubeZ, options.NumCubesX, options.NumCubesY, options.NumCubesZ, options.Scale);

	ComponentResources = UFEMResource::ProcessResource(restPositions, tetVertIds, vertIncidentTets, numVerts, numTets);

    AMD::FmBvh* BvHierarchy = AMD::FmCreateBvh(numTets);
	AMD::FmBuildRestMeshTetBvh(BvHierarchy, restPositions, tetVertIds, numTets);

	AMD::FmTetMeshBuffer* buffer = LoadTempBuffer(restPositions, numTets, numVerts, tetVertIds, false);

	FFEMFXMeshSection* meshSection = CreateRenderMeshFromTetMesh(buffer);
	meshSection->MaterialIndex = ImportedResource->GetNumSections() - 1;

	GetTetMesh()->UpdateTetMesh(buffer);

	delete[] vertIncidentTets;
	delete[] restPositions;
	delete[] tetVertIds;

    FmDestroyTetMeshBuffer(buffer);
}

FFEMFXMeshSection* UFEMMesh::CreateRenderMeshFromTetMesh(AMD::FmTetMeshBuffer* tetMeshBuffer)
{
	AMD::uint numTriangles = 0;
	
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;
	TArray<FVector2f> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FFEMFXMeshTangent> Tangents;
	TArray<int32> BarycentricPosOffsets;
	TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;
	TArray<int32> Triangles;
	TArray<int32> ShardVertexIds;
    TArray<int32> BarycentricPosBaseIds;

	int shardId = 0;

    AMD::uint NumTetMeshes = FmGetNumTetMeshes(*tetMeshBuffer);
	for (AMD::uint j = 0; j < NumTetMeshes; ++j)
	{
		AMD::FmTetMesh& tetMesh = *AMD::FmGetTetMesh(*tetMeshBuffer, j);

		AMD::uint numTets = FmGetNumTets(tetMesh);
		//For each tet
		for (AMD::uint tetIdx = 0; tetIdx < numTets; tetIdx++)
		{

			//int vertId = 0;

			AMD::FmVector3 pos0, pos1, pos2, /**pos3,*/ normal;

            AMD::FmTetVertIds tetVerts = AMD::FmGetTetVertIds(tetMesh, tetIdx);

			// For each face in the tet
			for (int tetFaceIndex = 0; tetFaceIndex < 4; ++tetFaceIndex)
			{

				//Create the vertices for the render mesh.

				AMD::FmFaceVertIds faceVerts;
				AMD::FmGetFaceVertIds(&faceVerts, tetFaceIndex, tetVerts);

				AMD::FmFaceVertIds faceTetCorners;
				AMD::FmGetFaceTetCorners(&faceTetCorners, tetFaceIndex);

				pos0 = FmGetVertRestPosition(tetMesh, faceVerts.ids[0]);
				pos1 = FmGetVertRestPosition(tetMesh, faceVerts.ids[1]);
				pos2 = FmGetVertRestPosition(tetMesh, faceVerts.ids[2]);

				// convert to Unreal coords
				AMD::FmVector3 tmp = pos0;
				pos0.x = -tmp.z;
				pos0.y = tmp.x;
				pos0.z = tmp.y;

				tmp = pos1;
				pos1.x = -tmp.z;
				pos1.y = tmp.x;
				pos1.z = tmp.y;

				tmp = pos2;
				pos2.x = -tmp.z;
				pos2.y = tmp.x;
				pos2.z = tmp.y;

				pos0 *= 100.0f;
				pos1 *= 100.0f;
				pos2 *= 100.0f;

				normal = normalize(cross(pos2 - pos0, pos1 - pos0));

				Vertices.Add(FVector3f(pos0.x, pos0.y, pos0.z));
				Vertices.Add(FVector3f(pos1.x, pos1.y, pos1.z));
				Vertices.Add(FVector3f(pos2.x, pos2.y, pos2.z));

				Triangles.Add(numTriangles * 3);
				Triangles.Add(numTriangles * 3 + 1);
				Triangles.Add(numTriangles * 3 + 2);

				Normals.Add(FVector3f(normal.x, normal.y, normal.z));
				Normals.Add(FVector3f(normal.x, normal.y, normal.z));
				Normals.Add(FVector3f(normal.x, normal.y, normal.z));

				UV0.Add(FVector2f(0, 0));
				UV0.Add(FVector2f(1, 0));
				UV0.Add(FVector2f(0, 1));

				VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
				VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));
				VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

				AMD::FmVector3 edge0 = normalize(pos1 - pos0);
				Tangents.Add(FFEMFXMeshTangent(edge0.x, edge0.y, edge0.z));
				Tangents.Add(FFEMFXMeshTangent(edge0.x, edge0.y, edge0.z));
				Tangents.Add(FFEMFXMeshTangent(edge0.x, edge0.y, edge0.z));

				for (int tetVertIdx = 0; tetVertIdx < 3; ++tetVertIdx)
				{
					AMD::uint tetCornerId = faceTetCorners.ids[tetVertIdx];

					FFEMFXMeshBarycentricPos BarycentricPos;
					BarycentricPos.BarycentricCoord0 = (tetCornerId == 0) ? 1.0f : 0.0f;
					BarycentricPos.BarycentricCoord1 = (tetCornerId == 1) ? 1.0f : 0.0f;
					BarycentricPos.BarycentricCoord2 = (tetCornerId == 2) ? 1.0f : 0.0f;
					BarycentricPos.BarycentricCoord3 = (tetCornerId == 3) ? 1.0f : 0.0f;
					BarycentricPos.TetId = tetIdx;
					BarycentricPositions.Add(BarycentricPos);
					BarycentricPosOffsets.Add(shardId);
					ShardVertexIds.Add(shardId);
					shardId++;
				}
				numTriangles++;
			}
		}
	}

	return CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, ShardVertexIds, BarycentricPosBaseIds, BarycentricPosOffsets, BarycentricPositions, false);

}

FFEMFXMeshSection* UFEMMesh::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<FVector3f>& Normals, const TArray<FVector2f>& UV0, const TArray<FLinearColor>& VertexColors, const TArray<FFEMFXMeshTangent>& Tangents,
	const TArray<int>& BarycentricPosOffsetIds, const TArray<int>& BarycentricPosBaseIds, const TArray<int>& BarycentricPosOffsets, const TArray<FFEMFXMeshBarycentricPos>& BarycentricPositions, bool bCreateCollision, int32 MaxTriIndices)
{
	// Convert FLinearColors to FColors
	TArray<FColor> Colors;
	if (VertexColors.Num() > 0)
	{
		Colors.SetNum(VertexColors.Num());

		for (int32 ColorIdx = 0; ColorIdx < VertexColors.Num(); ColorIdx++)
		{
			Colors[ColorIdx] = VertexColors[ColorIdx].ToFColor(false);
		}
	}

	return CreateMeshSection(SectionIndex, Vertices, Triangles, Normals, UV0, Colors, Tangents, BarycentricPosOffsetIds, BarycentricPosBaseIds, BarycentricPosOffsets, BarycentricPositions, bCreateCollision, MaxTriIndices);
}

FFEMFXMeshSection* UFEMMesh::CreateMeshSection(int32 SectionIndex, const TArray<FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<FVector3f>& Normals, const TArray<FVector2f>& UV0, const TArray<FColor>& VertexColors, const TArray<FFEMFXMeshTangent>& Tangents,
	const TArray<int>& BarycentricPosOffsetIds, const TArray<int>& BarycentricPosBaseIds,
    const TArray<int>& BarycentricPosOffsets, const TArray<FFEMFXMeshBarycentricPos>& BarycentricPositions, bool bCreateCollision, int32 MaxTriIndices)
{
	//SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_CreateMeshSection);

	// Ensure sections array is long enough
	if (SectionIndex >= GetImportedResource()->FEMFXMeshSections.Num())
	{
		GetImportedResource()->FEMFXMeshSections.SetNum(SectionIndex + 1, false);
	}

	// Reset this section (in case it already existed)
	FFEMFXMeshSection& NewSection = GetImportedResource()->FEMFXMeshSections[SectionIndex];
	NewSection.Reset();

	// Copy data to vertex buffer
	const int32 NumVerts = Triangles.Num();
	NewSection.VertexBuffer.Reset();
	NewSection.VertexBuffer.AddUninitialized(NumVerts);
	for (int32 VertIdx = 0; VertIdx < NumVerts; VertIdx++)
	{
		int32 TriangleIndex = Triangles[VertIdx];
		FFEMFXMeshVertex& Vertex = NewSection.VertexBuffer[VertIdx];

		Vertex.Position = Vertices[TriangleIndex];
		Vertex.Normal = (Normals.Num() == NumVerts) ? Normals[VertIdx] : FVector3f(0.f, 0.f, 1.f);
		Vertex.UV0 = (UV0.Num() == NumVerts) ? UV0[VertIdx] : FVector2f(0.f, 0.f);
		Vertex.Color = (VertexColors.Num() == NumVerts) ? VertexColors[VertIdx] : FColor(255, 255, 255);
		Vertex.Tangent = (Tangents.Num() == NumVerts) ? Tangents[VertIdx] : FFEMFXMeshTangent();
		Vertex.ShardId = (BarycentricPosOffsetIds.Num() == NumVerts) ? BarycentricPosOffsetIds[VertIdx] : VertIdx;
        Vertex.BaryPosBaseId = (BarycentricPosBaseIds.Num() == NumVerts) ? BarycentricPosBaseIds[VertIdx] : 0;

		// Update bounding box
		NewSection.SectionLocalBox += FVector3d(Vertex.Position);
	}

	int32 NumBaryPosOffsets = BarycentricPosOffsets.Num();
	NewSection.BarycentricPosIds.Reset();
	NewSection.BarycentricPosIds.AddUninitialized(NumBaryPosOffsets);
	for (int32 BaryPosOffsetIdx = 0; BaryPosOffsetIdx < NumBaryPosOffsets; BaryPosOffsetIdx++)
	{
		NewSection.BarycentricPosIds[BaryPosOffsetIdx] = BarycentricPosOffsets[BaryPosOffsetIdx];
	}

	int32 NumBaryPositions = BarycentricPositions.Num();
	NewSection.BarycentricPositions.Reset();
	NewSection.BarycentricPositions.AddUninitialized(NumBaryPositions);
	for (int32 BaryPosIdx = 0; BaryPosIdx < NumBaryPositions; BaryPosIdx++)
	{
		NewSection.BarycentricPositions[BaryPosIdx] = BarycentricPositions[BaryPosIdx];
	}

	// Copy index buffer (clamping to vertex range)
	int32 NumTriIndices = Triangles.Num();
	NumTriIndices = (NumTriIndices / 3) * 3; // Ensure we have exact number of triangles (array is multiple of 3 long)

	NewSection.IndexBuffer.Reset();
	NewSection.IndexBuffer.AddUninitialized(NumTriIndices);
	for (int32 IndexIdx = 0; IndexIdx < NumTriIndices; IndexIdx++)
	{
		NewSection.IndexBuffer[IndexIdx] = FMath::Min(IndexIdx, NumVerts - 1);
	}

	NewSection.bEnableCollision = bCreateCollision;
	
	return &NewSection;

	UpdateLocalBounds(); // Update overall bounds
}


void UFEMMesh::UpdateLocalBounds()
{
	FBox LocalBox(ForceInit);

	for (const FFEMFXMeshSection& Section : GetImportedResource()->FEMFXMeshSections)
	{
		LocalBox += Section.SectionLocalBox;
	}

	LocalBounds = LocalBox.IsValid ? FBoxSphereBounds(LocalBox) : FBoxSphereBounds(FVector(0, 0, 0), FVector(0, 0, 0), 0); // fallback to reset box sphere bounds

	LocalBounds = FBoxSphereBounds(FVector(0, 0, 0), FVector(1e3f, 1e3f, 1e3f), 1e3f);
}

UFEMMeshResource::UFEMMeshResource(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UFEMTetMesh::UFEMTetMesh(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), FEMMeshInteriorMeshSection(0)
{
}

FBox UFEMTetMesh::UpdateTetMesh(AMD::FmTetMeshBuffer* tetMeshBuffer)
{
	AMD::FmTetMeshBuffer& TetMeshBuffer = *tetMeshBuffer;
	FEMMeshVertexPositions.Reset();
	FEMMeshVertexRotations.Reset();
	FEMMeshTetVertexIds.Reset();
	FEMMeshDeformations.Reset();

	FBox FEMMeshBox;
    AMD::FmVector3 firstPos = FmGetVertPosition(*FmGetTetMesh(TetMeshBuffer, 0), 0);
	FEMMeshBox.Min = FEMMeshBox.Max = FVector3d(ConvertFEMFXVectorToUnreal(firstPos));
	FEMMeshBox.IsValid = 1;

	// Iterate over sub-meshes of the tet mesh buffer to add all vertices
	int32 VertexOffset = 0;

    AMD::uint NumTetMeshes = FmGetNumTetMeshes(TetMeshBuffer);

    AMD::uint* TetMeshVertOffsets = new AMD::uint[NumTetMeshes];

	for (AMD::uint meshIdx = 0; meshIdx < NumTetMeshes; meshIdx++)
	{
		AMD::FmTetMesh& tetMesh = *FmGetTetMesh(TetMeshBuffer, meshIdx);

        TetMeshVertOffsets[meshIdx] = VertexOffset;

		AMD::uint numVerts = FmGetNumVerts(tetMesh);
		for (AMD::uint vIdx = 0; vIdx < numVerts; vIdx++)
		{
			FVector3f pos = ConvertFEMFXVectorToUnreal(FmGetVertPosition(tetMesh, vIdx)) * 100;
			FEMMeshVertexPositions.Add(pos);

			FFEMFXMeshTetRotation rotation;
			AMD::FmMatrix3 rot = AMD::FmInitMatrix3(normalize(FmGetVertTetQuatSum(tetMesh, vIdx)));
			ConvertFEMFXTetRotationToUnreal(rotation.Col0, rotation.Col1, rotation.Col2, rot);
			FEMMeshVertexRotations.Add(rotation);

			FEMMeshDeformations.Add(FmGetVertTetStrainMagMax(tetMesh, vIdx));

			FEMMeshBox += FVector3d(pos);

			VertexOffset++;
		}
	}

	AMD::uint NumTets = FmGetNumTets(TetMeshBuffer);
	for (AMD::uint BufferTetIdx = 0; BufferTetIdx < NumTets; BufferTetIdx++)
	{
		AMD::uint TetId, SubMeshIdx;
		AMD::FmTetMesh* TetMesh = FmGetTetMeshContainingTet(&TetId, &SubMeshIdx, TetMeshBuffer, BufferTetIdx);

		AMD::uint SubMeshVertOffset = TetMeshVertOffsets[SubMeshIdx];

        AMD::FmTetVertIds tetVertIds = FmGetTetVertIds(*TetMesh, TetId);

		FFEMFXMeshTetVertexIds VertexIds;
		VertexIds.Id0 = tetVertIds.ids[0];
		VertexIds.Id1 = tetVertIds.ids[1];
		VertexIds.Id2 = tetVertIds.ids[2];
		VertexIds.Id3 = tetVertIds.ids[3];

		VertexIds.Id0 += SubMeshVertOffset;
		VertexIds.Id1 += SubMeshVertOffset;
		VertexIds.Id2 += SubMeshVertOffset;
		VertexIds.Id3 += SubMeshVertOffset;

		FEMMeshTetVertexIds.Add(VertexIds);
	}

    delete[] TetMeshVertOffsets;

	return FEMMeshBox;
}
