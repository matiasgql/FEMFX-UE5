//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "FEMCommon.h"
#include "FEMFXMeshComponent.h"
//#include "LoadObj.h"
#include <vector>

struct ObjModelVertex
{
	int vertexIndex;
	int normalIndex;
	int texcoordIndex;
	float pos[3];
	float nrm[3];
	float tan[3];
	float tex[2];
};

struct ObjModel
{
	std::vector<ObjModelVertex> vertices;
	std::vector<int> indices;
};

struct PreprocessedMeshSection
{
    TArray<FVector3f> Vertices;
    TArray<FVector3f> Normals;
    TArray<FVector2f> UV0;
    TArray<FLinearColor> VertexColors;
    TArray<FFEMFXMeshTangent> Tangents;
    TArray<int32> BarycentricPosIds;
    TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;
    TArray<int32> Triangles;
    TArray<int32> ShardVertexIds;

    void Reset()
    {
        Vertices.Reset();
        Normals.Reset();
        UV0.Reset();
        VertexColors.Reset();
        Tangents.Reset();
        BarycentricPosIds.Reset();
        BarycentricPositions.Reset();
        Triangles.Reset();
        ShardVertexIds.Reset();
    }
};

struct TetMeshSourceDataNoFracture
{
    AMD::FmVector3* vertRestPositions;
    AMD::FmTetVertIds* tetVertIds;
    AMD::FmBvh* tetsBVH;
    uint32 numTets;
};

void PreprocessMeshSectionNoFracture(PreprocessedMeshSection& meshSectionData, const TetMeshSourceDataNoFracture& tetMeshData, const ObjModel& objModel);
