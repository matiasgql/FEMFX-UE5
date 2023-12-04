//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FEMMeshTypes.h"

#include "FEMPreProcessedMesh.generated.h"

struct FEMPreProcessedMesh
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

	friend FArchive& operator<<(FArchive& Ar, FEMPreProcessedMesh& M);
};

UCLASS()
class AFEMPreProcessedMeshHelper : public AActor
{
	GENERATED_UCLASS_BODY()


public:

	bool IsProcessed(FString name);

	FEMPreProcessedMesh & AddPreProcessedMesh(FString name, FEMPreProcessedMesh mesh);

	FEMPreProcessedMesh& GetPreProcessedMesh(FString name);

private:
	TMap<FString, FEMPreProcessedMesh> FEMPreProcessedMeshes;
};
