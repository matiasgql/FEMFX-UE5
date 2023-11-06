//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMFXPreprocessMeshSection.h"
#include "FEMCommon.h"
#include "AMD_FEMFX.h"
#include "FEMFXMathConversion.h"
#include "RenderTetAssignment.h"

using namespace AMD;

void PreprocessMeshSectionNoFracture(PreprocessedMeshSection& MeshSectionData, const TetMeshSourceDataNoFracture& TetMeshData, const ObjModel& RenderModel)
{
    MeshSectionData.Reset();

    const ObjModelVertex* RenderVertices = RenderModel.vertices.data();
    int32 NumVerts = RenderModel.vertices.size();
    const int32* RenderIndices = RenderModel.indices.data();
    int32 NumIndices = RenderModel.indices.size();

    for (int VertIdx = 0; VertIdx < NumVerts; VertIdx++)
    {
        FmVector3 vertPos;
        vertPos.x = RenderVertices[VertIdx].pos[0];
        vertPos.y = RenderVertices[VertIdx].pos[1];
        vertPos.z = RenderVertices[VertIdx].pos[2];

        FmVector3 vertNormal;
        vertNormal.x = RenderVertices[VertIdx].nrm[0];
        vertNormal.y = RenderVertices[VertIdx].nrm[1];
        vertNormal.z = RenderVertices[VertIdx].nrm[2];

        FmVector3 vertTan;
        vertTan.x = RenderVertices[VertIdx].tan[0];
        vertTan.y = RenderVertices[VertIdx].tan[1];
        vertTan.z = RenderVertices[VertIdx].tan[2];

        float u = RenderVertices[VertIdx].tex[0];
        float v = RenderVertices[VertIdx].tex[1];

        FVector3f VertexPos = ConvertFEMFXVectorToUnreal(vertPos);
        VertexPos *= 100.0f;
        MeshSectionData.Vertices.Add(VertexPos);

        FVector3f VertexNormal = ConvertFEMFXVectorToUnreal(vertNormal);
        VertexNormal.Normalize();
        MeshSectionData.Normals.Add(VertexNormal);

        FVector3f VertexTan = ConvertFEMFXVectorToUnreal(vertTan);
        //VertexTan = -VertexTan;
        VertexTan.Normalize();
        MeshSectionData.Tangents.Add(FFEMFXMeshTangent(VertexTan.X, VertexTan.Y, VertexTan.Z));

        FVector2f UV;
        UV.X = u;
        UV.Y = v;
        MeshSectionData.UV0.Add(UV);

        MeshSectionData.VertexColors.Add(FLinearColor(0.75, 0.75, 0.75, 1.0));

        MeshSectionData.BarycentricPosIds.Add(VertIdx);

        FRenderVertTetAssignment tetAssignment;
        ComputeRenderVertTetAssignment(&tetAssignment, TetMeshData.vertRestPositions, TetMeshData.tetVertIds, *TetMeshData.tetsBVH, vertPos);

        uint tetId = tetAssignment.tetId;

        FFEMFXMeshBarycentricPos BarycentricPos;
        BarycentricPos.BarycentricCoord0 = tetAssignment.barycentricCoords[0];
        BarycentricPos.BarycentricCoord1 = tetAssignment.barycentricCoords[1];
        BarycentricPos.BarycentricCoord2 = tetAssignment.barycentricCoords[2];
        BarycentricPos.BarycentricCoord3 = tetAssignment.barycentricCoords[3];
        BarycentricPos.TetId = tetId;
        MeshSectionData.BarycentricPositions.Add(BarycentricPos);

		MeshSectionData.ShardVertexIds.Add(VertIdx);
    }

    for (int i = 0; i < NumIndices; i++)
    {
        MeshSectionData.Triangles.Add(RenderIndices[i]);
    }
}
