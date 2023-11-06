//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"

#include "TetBlueprintHelpers.generated.h"

namespace AMD
{
	struct FmVertNeighbors;
	struct FmVert;
	struct FmTet;
    struct FmTetMesh;
}

USTRUCT(BlueprintType)
struct FTetVertNeighbors
{
	GENERATED_USTRUCT_BODY()

		FTetVertNeighbors()
	{
		NumAdjacentVerts = 0;
		IncidentTetsStart = 0;
		NumIncidentTets = 0;
	}

	//FTetVertNeighbors(const AMD::FmVertNeighbors* vertNeighbors);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int NumAdjacentVerts;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int IncidentTetsStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int NumIncidentTets;
};

USTRUCT(BlueprintType)
struct FTetVertex
{
	GENERATED_USTRUCT_BODY()

		FTetVertex()
	{
		RestPos = FVector(0.0f);
		Pos = FVector(0.0f);
		Velocity = FVector(0.0f);
		ExtForce = FVector(0.0f);
		KinematicVel = FVector(0.0f);
		Neighbors = FTetVertNeighbors();
		Mass = 0.0f;
		Index0 = 0;
	}

	//FTetVertex(const AMD::FmVert* vert);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector RestPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector Pos;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector Velocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector ExtForce;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector KinematicVel;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FTetVertNeighbors Neighbors;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		float Mass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int Index0;
};

USTRUCT(BlueprintType)
struct FTetInfo
{
	GENERATED_USTRUCT_BODY()

		FTetInfo()
	{
		TetId = -1;
		VertIds.AddDefaulted(4);
		Mass = 0.0f;
		FrictionCoeff = 0.0f;
	}

	//FTetInfo(const AMD::FmTet* tet);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		int TetId;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		TArray<int> VertIds;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		float Mass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		float FrictionCoeff;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		TArray<int> FaceIncidentTetIds;
};

static FTetVertNeighbors CreateVertNeighbors(const AMD::FmVertNeighbors* vertNeighbors);

extern FTetVertex CreateTetVertex(const AMD::FmTetMesh* TetMesh, int VertId);

extern FTetInfo CreateTetInfo(const AMD::FmTetMesh* TetMesh, uint32 tetId);
