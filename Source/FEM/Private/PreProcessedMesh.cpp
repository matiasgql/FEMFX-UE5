//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#include "PreProcessedMesh.h"


APreProcessedMeshHelper::APreProcessedMeshHelper(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetActorTickEnabled(false);

	PrimaryActorTick.bCanEverTick = false;
}

bool APreProcessedMeshHelper::IsProcessed(FString name)
{
	return FEMPreProcessedMeshes.Contains(name);
}

PreProcessedMesh& APreProcessedMeshHelper::AddPreProcessedMesh(FString name, PreProcessedMesh mesh)
{
	return FEMPreProcessedMeshes.Add(name, mesh);
}

PreProcessedMesh& APreProcessedMeshHelper::GetPreProcessedMesh(FString name)
{
	return FEMPreProcessedMeshes[name];
}

FArchive& operator<<(FArchive& Ar, PreProcessedMesh& M)
{
	for (int i = 0; i < M.Vertices.Num(); ++i)
	{
		Ar << M.Vertices[i];
	}

	for (int i = 0; i < M.Normals.Num(); ++i)
	{
		Ar << M.Normals[i];
	}

	for (int i = 0; i < M.UV0.Num(); ++i)
	{
		Ar << M.UV0[i];
	}

	for (int i = 0; i < M.VertexColors.Num(); ++i)
	{
		Ar << M.VertexColors[i];
	}

	for (int i = 0; i < M.Tangents.Num(); ++i)
	{
		M.Tangents[i].Serialize(Ar);
	}

	for (int i = 0; i < M.BarycentricPosIds.Num(); ++i)
	{
		Ar << M.BarycentricPosIds[i];
	}

	for (int i = 0; i < M.BarycentricPositions.Num(); ++i)
	{
		M.BarycentricPositions[i].Serialize(Ar);
	}

	for (int i = 0; i < M.Triangles.Num(); ++i)
	{
		Ar << M.Triangles[i];
	}

	for (int i = 0; i < M.ShardVertexIds.Num(); ++i)
	{
		Ar << M.ShardVertexIds[i];
	}

	Ar << M.MaxTriIndices;

	return Ar;
}