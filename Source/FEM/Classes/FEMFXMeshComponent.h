// Mesh component for FEM mesh rendering, derived from code in Unreal Engine 4.18:
// 
// ProceduralMeshComponent.[h,cpp]
// LocalVertexFactory.[h,cpp]
// Original code copyright:
// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RHICommandList.h"
#include "UObject/ObjectMacros.h"
#include "Interfaces/Interface_CollisionDataProvider.h"
#include "Components/MeshComponent.h"
#include "PhysicsEngine/ConvexElem.h"
#include "FEMMeshTypes.h"
#include "FEMFXRender.h"
#include "FEMCommon.h"
#include "FEMFXTetMeshParameters.h"
#include "FEMResource.h"
#include "RenderTetAssignment.h"
#include "TetBlueprintHelpers.h"
#include "PrimitiveSceneProxy.h"

#include "FEMFXMeshComponent.generated.h"

class APreProcessedMeshHelper;

class UFEMMesh;
class UFEMFXMeshSimResource;
class AFEMFXScene;
class UFEMFXMeshComponent;


struct PreProcessedMesh;

/**
*	Struct used to send update to mesh data
*	Arrays may be empty, in which case no update is performed.
*/
class FFEMFXMeshSectionVertexUpdateData
{
public:
	/** Section to update */
	int32 TargetSection;
	/** New vertex information */
	TArray<FFEMFXMeshVertex> NewVertexBuffer;
};

/**
*	Struct used to send update to mesh data
*	Arrays may be empty, in which case no update is performed.
*/
class FFEMFXMeshSectionIndexUpdateData
{
public:
	/** Section to update */
	int32 TargetSection;
	/** Indices offset for adding */
	int32 IndexOffset;
	/** New index information */
	TArray<int32> AddedIndexBuffer;
};

/** Procedural mesh scene proxy */
class FFEMFXMeshSceneProxy : public FPrimitiveSceneProxy
{
public:

	FFEMFXMeshSceneProxy(UFEMFXMeshComponent* comp);
	~FFEMFXMeshSceneProxy();

	virtual FPrimitiveViewRelevance GetViewRelevance(const FSceneView* View) const override;
	virtual bool CanBeOccluded() const override;

	virtual uint32 GetMemoryFootprint(void) const override;
	uint32 GetAllocatedSize(void) const;

	virtual SIZE_T GetTypeHash() const override = 0;
	
	void UpdateRenderData(FRHICommandListBase& RHICmdList, 
	                      const TArray<FVector3f>& NewVertexPositions,
		                  const TArray<FFEMFXMeshTetRotation>& NewVertexRotations,
		                  const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds,
						  const TArray<float>& NewDeformations,
		                  bool PadVerticesForFracture);

	void UpdateSection_RenderThread(FRHICommandListBase& RHICmdList, FFEMFXMeshSectionVertexUpdateData* SectionData);
	void UpdateSection_RenderThread(FRHICommandListBase& RHICmdList, FFEMFXMeshSectionIndexUpdateData* SectionData);

	void UpdateSection(int32 SectionIdx, const TArray<int32>& NewBarycentricPosIds);
	void UpdateSection(int32 SectionIdx, const TArray<FFEMFXMeshBarycentricPos>& NewBarycentricPositions);

	void UpdateTetMesh(const FFEMTetMeshRenderData RenderData, bool PadVerticesForFracture);
	void UpdateTetMesh(const TArray<FVector3f>& NewVertexPositions, const TArray<FFEMFXMeshTetRotation>& NewVertexRotations, const TArray<float>& NewDeformations, bool PadVerticesForFracture);
	void UpdateTetVertexIds(const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds);

	void SetSectionVisibility_RenderThread(int32 SectionIndex, bool bNewVisibility);
	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const override;

	FFEMFXMeshProxySection* GetSection(int index) { return Sections[index]; }

private:
	/** Array of sections */
	TArray<FFEMFXMeshProxySection*> Sections;

	FStructuredBufferAndSRV<FFEMFXMeshTetVertexIds> TetVertexIds;              // Per-tetrahedron vertex ids in FEM mesh
	FStructuredBufferAndSRV<FVector3f> TetMeshVertexPositions;                   // Tet mesh vertex positions
	FStructuredBufferAndSRV<FFEMFXMeshTetRotation> TetMeshVertexRotations;     // Tet mesh vertex rotations
	FStructuredBufferAndSRV<float> TetMeshDeformations;

	UFEMFXMeshComponent* Component;

	FMaterialRelevance MaterialRelevance;
};



USTRUCT(BlueprintType)
struct FTetQueryData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	int numTets;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	TArray<float> deltas;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	TArray<int> tetIds;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	UFEMFXMeshComponent* Owner;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	int SubMeshId;
};

USTRUCT(BlueprintType)
struct FEMCollision
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	UFEMFXMeshComponent* OtherComponent;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	FVector3f Normal;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	FVector3f Position;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	FTetInfo TetInfo;

	UPROPERTY(BlueprintReadWrite, Category = "FEM")
	TArray<float> BarCentricPositions;
};
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFEMCollision, FEMCollision, Collision);

USTRUCT(BlueprintType)
struct FFEMFracture
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	FTetInfo TetInfo;

	UPROPERTY(BlueprintReadOnly, Category = "FEM")
	int SubMeshIndex;

	/*UPROPERTY(BlueprintReadOnly, Category = "FEM")
	FVector WorldPosition;*/
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFEMFracture, TArray<FFEMFracture>, Fracture);

/**
*	Component that allows you to specify custom triangle mesh geometry
*	Beware! This feature is experimental and may be substantially changed in future releases.
*/
UCLASS(BlueprintType, Blueprintable, hidecategories = (Object, LOD), meta = (BlueprintSpawnableComponent), ClassGroup = Rendering)
class FEM_API UFEMFXMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category = "FEM")
	virtual void OnComponentDestroyed(bool bDestroyingHierarchy) override;

	AMD::FmTetMeshBuffer* GetTetMeshBuffer();

	UFUNCTION(BlueprintCallable, Category ="FEM")
	void CreateFEMMeshFromTetMesh();

	void CleanResources();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FEMMesh")
	TArray<UStaticMesh*> staticMeshes;

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void SetTetMeshPositionAndRotation(FVector position, FRotator rotation);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void Reset(FTransform startTrans);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	virtual void BeginPlay() override;

#ifdef WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
#endif

	unsigned int maxTriangles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEMMesh")
	TArray<UMaterialInterface*> RenderMaterials;

	/** Begin UPrimitiveComponent Interface */
	virtual int32 GetNumMaterials() const override;
	virtual UMaterialInterface* GetMaterial(int32 ElementIndex) const override;
	//virtual void SetMaterial(int32 ElementIndex, UMaterialInterface* Material) override;
	virtual void SetMaterialByName(FName MaterialSlotName, class UMaterialInterface* Material) override;
	virtual void GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials = false) const override;

	//virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
    //~ End UPrimitiveComponent Interface

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FTetQueryData> TetMeshRadialQuery(FVector Pos, FVector Direction, float Radius);

    UFUNCTION(BlueprintCallable, Category = "Components|FEMFXMesh", meta = (DeprecatedFunction, DeprecationMessage = "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead.", DisplayName = "Update Mesh Section FColor", AutoCreateRefTerm = "Normals,UV0,VertexColors,Tangents"))
        void UpdateMeshSectionVertexBaryPosIds(int32 SectionIndex, const TArray<int32>& VertexBaryPosIds);

    UFUNCTION(BlueprintCallable, Category = "Components|FEMFXMesh", meta = (DeprecatedFunction, DeprecationMessage = "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead.", DisplayName = "Update Mesh Section FColor", AutoCreateRefTerm = "Normals,UV0,VertexColors,Tangents"))
        void UpdateMeshSectionVertexBaryPositions(int32 SectionIndex, const TArray<FFEMFXMeshBarycentricPos>& VertexBaryPositions);
 
	UFUNCTION(BlueprintCallable, Category = "Components|FEMFXMesh", meta = (DeprecatedFunction, DeprecationMessage = "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead.", DisplayName = "Update Mesh Section FColor", AutoCreateRefTerm = "Normals,UV0,VertexColors,Tangents"))
        void UpdateMeshSectionIndices(int32 SectionIndex, const TArray<int32>& AddedIndices);

    /** Control visibility of a particular section */
    UFUNCTION(BlueprintCallable, Category = "Components|FEMFXMesh")
        void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);

    /**
    *	Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.
    *	Should be set to false if this component is going to be given simple collision and simulated.
    */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Procedural Mesh")
        bool bUseComplexAsSimpleCollision;

	AMD::FmTetMesh* GetTetMeshPtr();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FVector3f GetVertPositionByIndex(int index, int subMeshIndex);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FVector3f GetTetMeshCenterOfMass(int subMeshIndex);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	float GetDestructionValue();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void SetTetMeshMaterial(UFEMFXTetMeshParameters* newParameters, float plasticAttenuation = 1.0f);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void SetTetMaterial_NoFracture(UFEMFXTetMeshParameters * newParameters, int TetId, int NoFractureFaces);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void SetTetMaterial(UFEMFXTetMeshParameters* newParameters, int TetId);

	UFUNCTION()
	void LoadResource();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FNameIndexMap> GetTags();

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FTetVertex GetTetVertById(int id, int subTetMesh);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	FNameIndexMap GetTagByName(FString TagName);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FTetInfo> GetTetsByTag(FString tag);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void SetTetKinematic(int TetId, bool IsKinematic, bool IsRemovable, FVector KinematicVelocity);

	UFUNCTION()
	void UpdateSceneProxy();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	bool EditorOnly;

    FORCEINLINE TArray<FShardVertTetAssignments>& GetShardVertTetAssignments() { return UpdatingShardVertTetAssignmentsBuffer; }

private:
    //~ Begin USceneComponent Interface.
    virtual FBoxSphereBounds CalcBounds(const FTransform& LocalToWorld) const override;
    //~ Begin USceneComponent Interface.


    /** Update LocalBounds member from the local box of each section */
    void UpdateLocalBounds();
    /** Mark collision data as dirty, and re-create on instance if necessary */
    void UpdateCollision();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	UFEMMesh* FEMMesh;

private:

    /** Convex shapes used for simple collision */
    UPROPERTY()
        TArray<FKConvexElem> CollisionConvexElems;

    /** Local space bounds of mesh */
    UPROPERTY()
        FBoxSphereBounds LocalBounds;

    friend class FFEMFXMeshSceneProxy;
    friend class AFEMFXScene;

public:

	// This is important that you use the same name across all FEMMeshComponents that share mesh render.
	// This will be used as the key in the map of PreProcessedMeshes in FEMSceneManager
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FString Name;

	void CleanUpAfterImport();

	AMD::FmBvh* GetBvHierarchy() { return BvHierarchy; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	APreProcessedMeshHelper* MeshHelper;

	UFUNCTION(BlueprintCallable, Category = "FEM")
	TArray<FTetQueryData> ApplyExplosionForce(const FVector& origin, float shokwavePressure0, float shokwaveArea0, float speed, float timestep, float timeSinceDetonation);

	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = "FEM")
	FOnFEMCollision CollisionEvent;

	UPROPERTY(EditAnywhere, BlueprintAssignable, Category = "FEM")
	FOnFEMFracture FractureEvent;

	UFUNCTION(BlueprintNativeEvent, CallInEditor, BlueprintCallable, Category = "FEM")
	void OnHit(FEMCollision otherComponent);

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void ResetFromRestPosition(FTransform transform, FVector velocity);

	UFUNCTION()
	void PostEditSceneProxyUpdate();

	int SceneBufferIndex;

	UFUNCTION(BlueprintCallable, Category = "FEM")
	void LoadSimObject();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	TMap<FString, UFEMFXTetMeshParameters*> MeshParameters;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    float Mass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    int CollisionGroup;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    float SleepMaxSpeedThreshold;  // Max speed must be under this threshold for sleeping 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    float SleepAvgSpeedThreshold;  // Average speed must be under this threshold for sleeping

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    int SleepStableCount; // Number of steps that speeds must fall under thresholds to initiate sleeping

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
    float RemoveKinematicVertexStressThreshold;

	void UpdateRenderingDataFromFracture();

	unsigned int GetBufferId();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	AFEMFXScene* Scene;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	bool Kinematic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	bool PlasticityEnabled;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FEM")
	bool FractureEnabled;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FEM")
	bool AddToSimulation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FEM")
	bool bUseDebugAsRenderMesh;

	bool ResourceInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM")
	FTransform InitialTransform;

	void UpdateSceneProxyFromFracture();

	bool ConvertUnits;

	bool IsWoodPanel;

private:

	AMD::FmTetMeshBuffer* TetMeshBuffer;
	AMD::FmTetMesh* TetMesh;
	AMD::FmVector3* RestPositions;
	AMD::FmTetVertIds* TetVertIds;
	AMD::FmBvh* BvHierarchy;

    bool TetAssignmentsNeedUpdate;
	TArray<FShardVertTetAssignments> TempShardVertTetAssignmentsBuffer;

    // Offsets modified after fracture to change tet assignment for vertices.
    TArray<TArray<int32> > SectionUpdatingBaryPosOffsets;
    TArray<bool> SectionBaryPosOffsetNeedsUpdate;

    TArray<int32> ExposedTriangleVertexIndices; // Array to hold exposed triangle indices collected during fracture; TODO: support multiple mesh sections

    TArray<FShardVertTetAssignments> UpdatingShardVertTetAssignmentsBuffer;
};


