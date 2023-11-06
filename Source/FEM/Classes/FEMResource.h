//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DataAsset.h"
#include "FEMCommon.h"

#include <vector>

#include "FEMResource.generated.h"


//class UFEMFXMeshComponent;

/**
* This class is going to mimick the .fem file structure
*/
USTRUCT()
struct FTet
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int TetIndex;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<int> Indicies;
};


USTRUCT()
struct FNodeResource
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsBoundaryMarker;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumAttributes;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumDimensions;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumPoints;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<float> Data;
};

USTRUCT()
struct FEleResource
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsRegionAttribute;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumNodesPerTets;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumTetrahedra;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FTet> Data;
};

USTRUCT(Blueprintable)
struct FMaterialTetAssignment
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, Category = "FEM")
		FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<uint32> TetIds;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<uint32> NoFractureFaces;

	FMaterialTetAssignment()
	{
		Name = "";
	}
};

USTRUCT(Blueprintable)
struct FNameIndexMap
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<uint32> TetIds;

	FNameIndexMap()
	{
		Name = "";
	}
};

USTRUCT()
struct FRigidBody
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector Position;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector Dimensions;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector4 Rotation;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	float mass;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<float> BodyInertiaTensor;
};

USTRUCT()
struct FAngleConstraint
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int BodyA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int BodyB;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector AxisBodySpaceA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector AxisBodySpaceB;
};

USTRUCT()
struct FGlueConstraint
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int BodyA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsRigidBodyA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int BodyB;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsRigidBodyB;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector4 PosBodySpaceA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector4 PosBodySpaceB;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int TetIdA;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int TetIdB;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	float BreakThreshold;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	unsigned int MinGlueConstraints;
};

USTRUCT()
struct FFEMPlane
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	float Bias;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool NonNegative;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector PlaneNormal;
};

USTRUCT()
struct FPlaneConstraint : public FGlueConstraint
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumberOfPlanes;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FFEMPlane> Planes;
};

USTRUCT()
struct FMeshSection
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<int> AssignedTetFace;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> Barycentrics;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<int32> BarycentricsPosIds;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<int> TetAssignment;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> VertexColor;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> VertexNormal;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> VertexPosition;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> VertexTangent;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> VertexUVs;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<int32> ShardVertexIds;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<int32> Triangles;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		TArray<float> Centroids;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
		int32 NumberOfShardVertices;

};


USTRUCT()
struct FComponent
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int32 NumberOfCornersPerShard;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsFracturable;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int CollisionGroup;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumTags;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FNameIndexMap> Tags;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumMaterials;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FMaterialTetAssignment> Materials;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FEleResource EleFile;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FNodeResource NodeFile;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumFBXFiles;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FString> FBXFiles;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FMeshSection> MeshSections;
};

USTRUCT()
struct FTetVertIds
{
	GENERATED_BODY()

	UPROPERTY()
	unsigned int Ids[4];
};

USTRUCT()
struct FTetIdxToMaterial
{
	GENERATED_BODY()

	UINT tetIndex;

};

USTRUCT()
struct FBVSizes
{
	GENERATED_BODY()

	int totalSize;
	int nodeSize;
	int primBoxesSize;
	int boxesSize;
	int mortonCodesSize;
	int mortonCodesSortedSize;
	int primIndicesSortedSize;
	int numPrimsSize;

	FBVSizes()
	{
		totalSize = 0;
		nodeSize = 0;
		primBoxesSize = 0;
		boxesSize = 0;
		mortonCodesSize = 0;
		mortonCodesSortedSize = 0;
		primIndicesSortedSize = 0;
		numPrimsSize = sizeof(unsigned int);
	}

	void CalculateTotalSize()
	{
		totalSize += nodeSize;
		totalSize += primBoxesSize;
		totalSize += boxesSize;
		totalSize += mortonCodesSize;
		totalSize += mortonCodesSortedSize;
		totalSize += primIndicesSortedSize;
		totalSize += numPrimsSize;
	}
};

USTRUCT()
struct FTetMeshBufferInfo
{
	GENERATED_BODY()

	UPROPERTY()
	uint32 pBufferOffset;
	UPROPERTY()
	uint32 subTetMeshOffset;
	UPROPERTY()
	uint32 subMPCFSolverDataOffset;

	UPROPERTY()
	uint32 subTetMeshVertOffsetsOffset;
	UPROPERTY()
	uint32 vertReferenceOffset;
	UPROPERTY()
	uint32 tetReferenceOffset;
};

USTRUCT()
struct FComponentResources
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int32 NumberOfCornersPerShard;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Name;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	bool IsFracturable;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int CollisionGroup;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FNameIndexMap> Tags;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FMaterialTetAssignment> Materials;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FString> FBXFiles;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumVerts;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int NumTets;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	float RestVolume;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector minPos;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FVector maxPos;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	int MaxVerts;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<uint8> restPositions;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<uint8> tetVertIds;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<unsigned int> vertIncidentTets;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<int> VertexIndices;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FMeshSection> meshSections;
};

USTRUCT()
struct FActorResource
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FRigidBody> RigidBodies;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FAngleConstraint> AngleConstraints;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FGlueConstraint> GlueConstraints;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FPlaneConstraint> PlaneConstraints;
};

UCLASS()
class FEM_API UFEMResource : public UDataAsset
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FString Version;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	TArray<FComponentResources> ComponentResources;

	UPROPERTY(VisibleAnywhere, Category = "FEM")
	FActorResource ActorResource;

	static FComponentResources ProcessResource(AMD::FmVector3* restPositions, AMD::FmTetVertIds* tetVertIds, std::vector<unsigned int>* vertIncidentTets, int numVerts, int numTets);

	void ProcessResource();

	void AddComponent(FComponent comp);

private:

	TArray<FComponent> Components;
};