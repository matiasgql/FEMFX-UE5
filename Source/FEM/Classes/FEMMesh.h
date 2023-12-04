//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FEMMeshTypes.h"
#include "FEMCommon.h"
#include "RenderTetAssignment.h"
#include "FEMResource.h"
#include <vector>

#include "FEMMesh.generated.h"


class UFEMMeshResource;


UCLASS(hidecategories = Object, BlueprintType)
class FEM_API UFEMTetMesh : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	FORCEINLINE TArray<FVector3f>                          GetVertexPositions()           const { return FEMMeshVertexPositions; }
	FORCEINLINE TArray<FFEMFXMeshTetRotation>              GetVertexRotations()           const { return FEMMeshVertexRotations; }
	FORCEINLINE TArray<FFEMFXMeshTetVertexIds>             GetTetVertexIds()              const { return FEMMeshTetVertexIds; }
	FORCEINLINE TArray<float>                              GetDeformations()              const { return FEMMeshDeformations; }
	FORCEINLINE int32								       GetInteriorMeshSection()       const { return FEMMeshInteriorMeshSection; }
	FORCEINLINE TArray<FFEMFXTetFractureNewRenderFaces>&   GetTetFractureNewRenderFaces() { return FEMMeshTetFractureNewRenderFaces; }
    FORCEINLINE TArray<FTetFractureShardVerticesToUpdate>& GetTetFractureShardVerticesToUpdate() { return TetFractureShardVerticesToUpdate; }

	void InitTetFractureNewRenderFaces(int num) { FEMMeshTetFractureNewRenderFaces.AddDefaulted(num); }

private:

	FORCEINLINE TArray<FFEMFXTetFractureNewRenderFaces>& GetTetFractureNewRenderFacesRef() { return FEMMeshTetFractureNewRenderFaces; }

	FBox UpdateTetMesh(AMD::FmTetMeshBuffer* tetMeshBuffer);

	friend class UFEMMesh;
	friend class UFEMFactory;
	friend class AFEMBlockActor;

	/*void UpdateTetMeshData_Internal(const TArray<FVector>& NewVertexPositions, const TArray<FFEMFXMeshTetRotation>& NewVertexRotations, bool PadVerticesForFracture);

	void UpdateTetVertexIds_Internal(const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds);*/

	UPROPERTY()
	TArray<FVector3f> FEMMeshVertexPositions;
	UPROPERTY()
	TArray<FFEMFXMeshTetRotation> FEMMeshVertexRotations;
	UPROPERTY()
	TArray<FFEMFXMeshTetVertexIds> FEMMeshTetVertexIds;
	UPROPERTY()
	TArray<float> FEMMeshDeformations;

	UPROPERTY()
	TArray<FFEMFXTetFractureNewRenderFaces> FEMMeshTetFractureNewRenderFaces;

    UPROPERTY()
    TArray<FTetFractureShardVerticesToUpdate> TetFractureShardVerticesToUpdate;

	UPROPERTY()
	int32 FEMMeshInteriorMeshSection;
};

UCLASS(hidecategories = Object, BlueprintType)
class UFEMMeshResource : public UObject
{
public:

	GENERATED_UCLASS_BODY()

	FORCEINLINE int32                      GetNumSections()  const { return FEMFXMeshSections.Num(); }
	FORCEINLINE TArray<FFEMFXMeshSection>& GetMeshSections() { return FEMFXMeshSections; }

private:

	friend class UFEMMesh;

	/** Array of sections of mesh */
	UPROPERTY()
	TArray<FFEMFXMeshSection> FEMFXMeshSections;

};

class FEM_API ProceduralMeshOptions
{
public:

	bool Randomize;
	int NumCubesX;
	int NumCubesY;
	int NumCubesZ;
	float CubeX;
	float CubeY;
	float CubeZ;
	float Scale;
	bool IsWoodPanel;

	ProceduralMeshOptions()
	{
		Randomize = false;
		NumCubesX = 0;
		NumCubesY = 0;
		NumCubesZ = 0;
		CubeX = 0;
		CubeY = 0;
		CubeZ = 0;
		Scale = 0;
		IsWoodPanel = false;

	}

};

UCLASS(hidecategories=Object, BlueprintType)
class FEM_API UFEMMesh : public UObject
{
	GENERATED_UCLASS_BODY()

	friend class UFEMFactory;
	friend class AFEMBlockActor;
public:

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "FEM")
	FBoxSphereBounds UpdateBounds();

	bool IsCreated();

	FORCEINLINE UFEMMeshResource* GetImportedResource() const { return ImportedResource; }

	FORCEINLINE UFEMTetMesh* GetTetMesh() const { return TetMesh; }

	FORCEINLINE FBoxSphereBounds GetLocalBounds() const { return LocalBounds; }

	FORCEINLINE FComponentResources GetComponentResource() const { return ComponentResources; }

	FORCEINLINE int32 GetNumberOfCornersPerShard() const { return NumberOfCornersPerShard; }

	FORCEINLINE bool GetIsWoodPanel() const { return IsWoodPanel; }

	FORCEINLINE int GetNumberOfShards() const { return NumberOfShards; }

    FORCEINLINE const TArray<FShardVertTetAssignments>& GetTetAssignments() const { return ShardVertTetAssignmentsBuffer; }

	FFEMFXMeshSection* CreateRenderMeshFromTetMesh(AMD::FmTetMeshBuffer* tetMeshBuffer);
	FFEMFXMeshSection* CreateMeshSection(UStaticMesh* mesh, AMD::FmTetMeshBuffer* tetMeshBuffer, AMD::FmBvh* BvHierarchy, int sectionIdx);
	FFEMFXMeshSection* CreateMeshSectionFromFEMFile(AMD::FmTetMeshBuffer* tetMeshBuffer, AMD::FmBvh* BvHierarchy, int sectionIdx);
	
	void CreateProceduralMesh(ProceduralMeshOptions options);

	AMD::FmTetMeshBuffer* LoadTempBuffer(AMD::FmVector3* RestPositions, int NumTets, int NumVerts, AMD::FmTetVertIds* TetVertIds, bool FractureEnabled);

	/* Mesh Creating Functions */
	/**
	*	Create/replace a section for this procedural mesh component.
	*	This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.
	*	@param	SectionIndex		Index of the section to create or replace.
	*	@param	Vertices			Vertex buffer of all vertex positions to use for this mesh section.
	*	@param	Triangles			Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.
	*	@param	Normals				Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	UV0					Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.
	*	@param	VertexColors		Optional array of colors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	Tangents			Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.
	*	@param	bCreateCollision	Indicates whether collision should be created for this section. This adds significant cost.
	*/
	FFEMFXMeshSection* CreateMeshSection(int32 SectionIndex, const TArray<FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<FVector3f>& Normals, const TArray<FVector2f>& UV0, const TArray<FColor>& VertexColors, const TArray<FFEMFXMeshTangent>& Tangents,
		const TArray<int>& BarycentricPosOffsetIds, const TArray<int>& BarycentricPosBaseIds, const TArray<int>& BarycentricPosOffsets, const TArray<FFEMFXMeshBarycentricPos>& BarycentricPositions, bool bCreateCollision, int32 MaxTriIndices = 0);

	/**
	*	Create/replace a section for this procedural mesh component.
	*	@param	SectionIndex		Index of the section to create or replace.
	*	@param	Vertices			Vertex buffer of all vertex positions to use for this mesh section.
	*	@param	Triangles			Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.
	*	@param	Normals				Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	UV0					Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.
	*	@param	VertexColors		Optional array of colors for each vertex. If supplied, must be same length as Vertices array.
	*	@param	Tangents			Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.
	*	@param	bCreateCollision	Indicates whether collision should be created for this section. This adds significant cost.
	*/
	FFEMFXMeshSection* CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector3f>& Vertices, const TArray<int32>& Triangles, const TArray<FVector3f>& Normals, const TArray<FVector2f>& UV0, const TArray<FLinearColor>& VertexColors, const TArray<FFEMFXMeshTangent>& Tangents,
		const TArray<int>& BarycentricPosOffsetIds, const TArray<int>& BarycentricPosBaseIds, const TArray<int>& BarycentricPosOffsets, const TArray<FFEMFXMeshBarycentricPos>& BarycentricPositions, bool bCreateCollision, int32 MaxTriIndices = 0);

	void UpdateLocalBounds();

private:

	UPROPERTY()
	bool IsWoodPanel;

	UPROPERTY()
	int32 NumberOfCornersPerShard;

	UPROPERTY()
	int32 NumberOfShards;

	UPROPERTY()
	FBoxSphereBounds LocalBounds;

	/** Rendering resources create at import time. */
	UPROPERTY()
	FComponentResources ComponentResources;

	UPROPERTY()
	UFEMMeshResource* ImportedResource;

	UPROPERTY()
	UFEMTetMesh* TetMesh;

	UPROPERTY()
	TArray<FShardVertTetAssignments> ShardVertTetAssignmentsBuffer;
};