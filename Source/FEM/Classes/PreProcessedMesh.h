//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FEMCommon.h"
#include "FEMMeshTypes.h"

#include "PreProcessedMesh.generated.h"

struct PreProcessedMesh
{
	TArray<FVector> Vertices;
	TArray<FVector> Normals;
	TArray<FVector2D> UV0;
	TArray<FLinearColor> VertexColors;
	TArray<FFEMFXMeshTangent> Tangents;
	TArray<int32> BarycentricPosIds;
	TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;
	TArray<int32> Triangles;
	TArray<int32> ShardVertexIds;
    int32 MaxTriIndices;

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
        MaxTriIndices = 0;
	}

	friend FArchive& operator<<(FArchive& Ar, PreProcessedMesh& M);
};

UCLASS()
class APreProcessedMeshHelper : public AActor
{
	GENERATED_UCLASS_BODY()


public:

	bool IsProcessed(FString name);

	PreProcessedMesh & AddPreProcessedMesh(FString name, PreProcessedMesh mesh);

	PreProcessedMesh& GetPreProcessedMesh(FString name);

private:
	TMap<FString, PreProcessedMesh> FEMPreProcessedMeshes;
};
