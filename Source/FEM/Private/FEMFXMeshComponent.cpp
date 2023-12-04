// Mesh component for FEM mesh rendering, derived from code in Unreal Engine 4.18:
// 
// ProceduralMeshComponent.[h,cpp]
// LocalVertexFactory.[h,cpp]
// Original code copyright:
// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FEMFXMeshComponent.h"
#include "CoreMinimal.h"
#include "Engine/StaticMesh.h"

#include "VertexFactory.h"

#include "PrimitiveViewRelevance.h"
#include "RenderResource.h"
#include "RenderingThread.h"
#include "PrimitiveSceneProxy.h"
#include "Containers/ResourceArray.h"
#include "EngineGlobals.h"
#include "VertexFactory.h"
#include "MaterialShared.h"
#include "Materials/Material.h"
#include "LocalVertexFactory.h"
#include "Engine/Engine.h"
#include "SceneManagement.h"
#include "FEMFXLocalVertexFactory.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "AMD_FEMFX.h"
#include "DynamicMeshBuilder.h"
#include "FEMFXVectormath.h"
#include "FEMMesh.h"
#include "FEMFXMathConversion.h"
#include "RenderTetAssignment.h"
#include "FEMFXScene.h"
#include "..\Classes\FEMPreProcessedMesh.h"

#include "RawIndexBuffer.h"
#include "FEMMeshQueries.h"

#include "Runtime/CoreUObject/Public/UObject/Class.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "IFEM.h"
#include "MaterialDomain.h"
#include "Materials/MaterialRenderProxy.h"

//DECLARE_CYCLE_STAT(TEXT("Create FEMFXMesh Proxy"), STAT_FEMFXMesh_CreateSceneProxy, STATGROUP_FEMFXMesh);
//DECLARE_CYCLE_STAT(TEXT("Create Mesh Section"), STAT_FEMFXMesh_CreateMeshSection, STATGROUP_FEMFXMesh);
//DECLARE_CYCLE_STAT(TEXT("UpdateSection GT"), STAT_FEMFXMesh_UpdateSectionGT, STATGROUP_FEMFXMesh);
//DECLARE_CYCLE_STAT(TEXT("UpdateSection RT"), STAT_FEMFXMesh_UpdateSectionRT, STATGROUP_FEMFXMesh);
//DECLARE_CYCLE_STAT(TEXT("Get FEMFXMesh Elements"), STAT_FEMFXMesh_GetMeshElements, STATGROUP_FEMFXMesh);
//DECLARE_CYCLE_STAT(TEXT("Update Collision"), STAT_FEMFXMesh_UpdateCollision, STATGROUP_FEMFXMesh);


static void ConvertFEMFXMeshToDynMeshVertex(FFEMFXMeshRenderVertex& Vert, const FFEMFXMeshVertex& ProcVert)
{
    Vert.Position = ProcVert.Position;	
    Vert.Color = ProcVert.Color;
    Vert.TextureCoordinate = ProcVert.UV0;
    Vert.TangentX = ProcVert.Tangent.TangentX;
    Vert.TangentZ = ProcVert.Normal;
    Vert.TangentZ.Vector.W = ProcVert.Tangent.bFlipTangentY ? 0 : 255;
    Vert.ShardId = ProcVert.ShardId;
    Vert.BaryPosBaseId = ProcVert.BaryPosBaseId;
}



FFEMFXMeshSceneProxy::FFEMFXMeshSceneProxy(UFEMFXMeshComponent* Component)
        : FPrimitiveSceneProxy(Component)
        //, BodySetup(Component->GetBodySetup())
        , MaterialRelevance(Component->GetMaterialRelevance(GetScene().GetFeatureLevel()))
{
    // Copy each section
	if (IsValid(Component->FEMMesh)) 
	{
		this->Component = Component;

		const int32 NumSections = Component->FEMMesh->GetImportedResource()->GetNumSections();
		Sections.AddZeroed(NumSections);
		for (int SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
		{
			FFEMFXMeshSection SrcSection = Component->FEMMesh->GetImportedResource()->GetMeshSections()[SectionIdx];
			if (SrcSection.IndexBuffer.Num() > 0 && SrcSection.VertexBuffer.Num() > 0)
			{
				FFEMFXMeshProxySection* NewSection = new FFEMFXMeshProxySection(ERHIFeatureLevel::SM6);

				// Copy data from vertex buffer
				const int32 NumVerts = SrcSection.VertexBuffer.Num();

				// Allocate verts
				NewSection->VertexBuffers.StaticMeshVertexBuffer.Vertices.SetNumUninitialized(NumVerts);
				// Copy verts
				for (int VertIdx = 0; VertIdx < NumVerts; VertIdx++)
				{
					const FFEMFXMeshVertex& ProcVert = SrcSection.VertexBuffer[VertIdx];
					FFEMFXMeshRenderVertex& Vert = NewSection->VertexBuffers.StaticMeshVertexBuffer.Vertices[VertIdx];
					ConvertFEMFXMeshToDynMeshVertex(Vert, ProcVert);
				}

				// Copy index buffer
				NewSection->IndexBuffer.Indices = SrcSection.IndexBuffer;

				// Init vertex factory
				NewSection->VertexFactory.Init(&NewSection->VertexBuffers.StaticMeshVertexBuffer);

				// Enqueue initialization of render resource
				BeginInitResource(&NewSection->VertexBuffers.StaticMeshVertexBuffer);
				BeginInitResource(&NewSection->IndexBuffer);
				BeginInitResource(&NewSection->VertexFactory);

				NewSection->VertexBarycentricPosOffsets.Init(SrcSection.BarycentricPosIds);
				NewSection->VertexBarycentricPositions.Init(SrcSection.BarycentricPositions);

				// Grab material
				NewSection->MaterialIndex = SrcSection.MaterialIndex;

				// Copy visibility info
				NewSection->bSectionVisible = SrcSection.bSectionVisible;

				// Save ref to new section
				Sections[SectionIdx] = NewSection;
			}
		}

		TetVertexIds.Init(Component->FEMMesh->GetTetMesh()->GetTetVertexIds());
		TetMeshVertexPositions.Init(Component->FEMMesh->GetTetMesh()->GetVertexPositions());
		TetMeshVertexRotations.Init(Component->FEMMesh->GetTetMesh()->GetVertexRotations());
		TetMeshDeformations.Init(Component->FEMMesh->GetTetMesh()->GetDeformations());
	}
}

FFEMFXMeshSceneProxy::~FFEMFXMeshSceneProxy()
{
    for (FFEMFXMeshProxySection* Section : Sections)
    {
        if (Section != nullptr)
        {
            Section->VertexBuffers.StaticMeshVertexBuffer.ReleaseResource();
            Section->IndexBuffer.ReleaseResource();
            Section->VertexFactory.ReleaseResource();
            delete Section;
        }
    }
}

void FFEMFXMeshSceneProxy::UpdateRenderData(
	FRHICommandListBase& RHICmdList, 
	const TArray<FVector3f>& NewVertexPositions,
	const TArray<FFEMFXMeshTetRotation>& NewVertexRotations,
	const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds,
	const TArray<float>& NewDeformations,
	bool PadVerticesForFracture)
{
	UpdateTetMesh(NewVertexPositions, NewVertexRotations, NewDeformations, PadVerticesForFracture);
	UpdateTetVertexIds(NewTetVertexIds);
}

static void ConvertProcMeshToDynMeshVertex(FDynamicMeshVertex& Vert, const FFEMFXMeshVertex& ProcVert)
{
	Vert.Position = ProcVert.Position;
	Vert.Color = ProcVert.Color;
	Vert.TextureCoordinate[0] = ProcVert.UV0;	// LWC_TODO: Precision loss
	Vert.TextureCoordinate[1] = ProcVert.UV1;	// LWC_TODO: Precision loss
	Vert.TextureCoordinate[2] = ProcVert.UV2;	// LWC_TODO: Precision loss
	Vert.TextureCoordinate[3] = ProcVert.UV3;	// LWC_TODO: Precision loss
	Vert.TangentX = ProcVert.Tangent.TangentX;
	Vert.TangentZ = ProcVert.Normal;
	Vert.TangentZ.Vector.W = ProcVert.Tangent.bFlipTangentY ? -127 : 127;
}

/** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateSection_RenderThread(FRHICommandListBase& RHICmdList, FFEMFXMeshSectionVertexUpdateData* SectionData)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);
	UE_LOG(LogTemp, Warning, TEXT("FEMFXMeshSceneProxy::UpdateSection_RenderThread"));
    //check(IsInRenderingThread());

    // Check we have data 
    if (SectionData != nullptr)
    {
        // Check it references a valid section
        if (SectionData->TargetSection < Sections.Num() &&
            Sections[SectionData->TargetSection] != nullptr)
        {
            FFEMFXMeshProxySection* Section = Sections[SectionData->TargetSection];

            // Lock vertex buffer
            const int32 NumVerts = SectionData->NewVertexBuffer.Num();
            // Iterate through vertex data, copying in new info
			for(int32 i=0; i<NumVerts; i++)
			{
				const FFEMFXMeshVertex& ProcVert = SectionData->NewVertexBuffer[i];
				FDynamicMeshVertex Vertex;
				ConvertProcMeshToDynMeshVertex(Vertex, ProcVert);

				Section->VertexBuffers.PositionVertexBuffer.VertexPosition(i) = Vertex.Position;
				Section->VertexBuffers.StaticMeshVertexBuffer.SetVertexTangents(i, Vertex.TangentX.ToFVector3f(), Vertex.GetTangentY(), Vertex.TangentZ.ToFVector3f());
				Section->VertexBuffers.StaticMeshVertexBuffer.SetVertexUV(i, 0, Vertex.TextureCoordinate[0]);
				Section->VertexBuffers.StaticMeshVertexBuffer.SetVertexUV(i, 1, Vertex.TextureCoordinate[1]);
				Section->VertexBuffers.StaticMeshVertexBuffer.SetVertexUV(i, 2, Vertex.TextureCoordinate[2]);
				Section->VertexBuffers.StaticMeshVertexBuffer.SetVertexUV(i, 3, Vertex.TextureCoordinate[3]);
				Section->VertexBuffers.ColorVertexBuffer.VertexColor(i) = Vertex.Color;
			}

			{
				auto& VertexBuffer = Section->VertexBuffers.PositionVertexBuffer;
				void* VertexBufferData = RHICmdList.LockBuffer(VertexBuffer.VertexBufferRHI, 0, VertexBuffer.GetNumVertices() * VertexBuffer.GetStride(), RLM_WriteOnly);
				FMemory::Memcpy(VertexBufferData, VertexBuffer.GetVertexData(), VertexBuffer.GetNumVertices() * VertexBuffer.GetStride());
				RHICmdList.UnlockBuffer(VertexBuffer.VertexBufferRHI);
			}

			{
				auto& VertexBuffer = Section->VertexBuffers.ColorVertexBuffer;
				void* VertexBufferData = RHICmdList.LockBuffer(VertexBuffer.VertexBufferRHI, 0, VertexBuffer.GetNumVertices() * VertexBuffer.GetStride(), RLM_WriteOnly);
				FMemory::Memcpy(VertexBufferData, VertexBuffer.GetVertexData(), VertexBuffer.GetNumVertices() * VertexBuffer.GetStride());
				RHICmdList.UnlockBuffer(VertexBuffer.VertexBufferRHI);
			}

			{
				auto& VertexBuffer = Section->VertexBuffers.StaticMeshVertexBuffer;
				void* VertexBufferData = RHICmdList.LockBuffer(VertexBuffer.TangentsVertexBuffer.VertexBufferRHI, 0, VertexBuffer.GetTangentSize(), RLM_WriteOnly);
				FMemory::Memcpy(VertexBufferData, VertexBuffer.GetTangentData(), VertexBuffer.GetTangentSize());
				RHICmdList.UnlockBuffer(VertexBuffer.TangentsVertexBuffer.VertexBufferRHI);
			}

			{
				auto& VertexBuffer = Section->VertexBuffers.StaticMeshVertexBuffer;
				void* VertexBufferData = RHICmdList.LockBuffer(VertexBuffer.TexCoordVertexBuffer.VertexBufferRHI, 0, VertexBuffer.GetTexCoordSize(), RLM_WriteOnly);
				FMemory::Memcpy(VertexBufferData, VertexBuffer.GetTexCoordData(), VertexBuffer.GetTexCoordSize());
				RHICmdList.UnlockBuffer(VertexBuffer.TexCoordVertexBuffer.VertexBufferRHI);
			}

// #if RHI_RAYTRACING
// 			if (IsRayTracingEnabled())
// 			{
// 				Section->RayTracingGeometry.ReleaseResource();
//
// 				FRayTracingGeometryInitializer Initializer;
// 				Initializer.IndexBuffer = Section->IndexBuffer.IndexBufferRHI;
// 				Initializer.TotalPrimitiveCount = Section->IndexBuffer.Indices.Num() / 3;
// 				Initializer.GeometryType = RTGT_Triangles;
// 				Initializer.bFastBuild = true;
// 				Initializer.bAllowUpdate = false;
//
// 				Section->RayTracingGeometry.SetInitializer(Initializer);
// 				Section->RayTracingGeometry.InitResource(RHICmdList);
//
// 				FRayTracingGeometrySegment Segment;
// 				Segment.VertexBuffer = Section->VertexBuffers.PositionVertexBuffer.VertexBufferRHI;
// 				Segment.NumPrimitives = Section->RayTracingGeometry.Initializer.TotalPrimitiveCount;
// 				Segment.MaxVertices = Section->VertexBuffers.PositionVertexBuffer.GetNumVertices();
// 				Section->RayTracingGeometry.Initializer.Segments.Add(Segment);
//
// 				Section->RayTracingGeometry.UpdateRHI(RHICmdList);
// 			}
// #endif
        }
		// Free data sent from game thread
		delete SectionData;
    }
}

/** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateSection_RenderThread(FRHICommandListBase& RHICmdList, FFEMFXMeshSectionIndexUpdateData* SectionData)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);
	UE_LOG(LogTemp, Warning, TEXT("FEMFXMeshSceneProxy::UpdateSection_RenderThread"));
    check(IsInRenderingThread());

    // Check we have data 
    if (SectionData != nullptr)
    {
        // Check it references a valid section
        if (SectionData->TargetSection < Sections.Num() &&
            Sections[SectionData->TargetSection] != nullptr)
        {
            FFEMFXMeshProxySection* Section = Sections[SectionData->TargetSection];

            const int32 NumIndicesToAdd = SectionData->AddedIndexBuffer.Num();

            for (int32 AddI = 0; AddI < NumIndicesToAdd; AddI++)
            {
                Section->IndexBuffer.Indices.Add(SectionData->AddedIndexBuffer[AddI]);
            }

#if 1
            // Rewrite entire index buffer
            int32 NumIndices = Section->IndexBuffer.Indices.Num();

            // Lock index buffer
            int32* IndexBufferData = (int32*)RHICmdList.LockBuffer(Section->IndexBuffer.IndexBufferRHI, 0, NumIndices * sizeof(int32), RLM_WriteOnly);

            // Iterate through index data, copying in new info
            for (int32 AddI = 0; AddI<NumIndices; AddI++)
            {
                IndexBufferData[AddI] = Section->IndexBuffer.Indices[AddI];
            }
#else
            // Having issues updating part of buffer
            int32 NumIndices = Section->IndexBuffer.Indices.Num();

            // Lock index buffer
            int32* IndexBufferData = (int32*)RHICmdList.LockBuffer(Section->IndexBuffer.IndexBufferRHI, SectionData->IndexOffset * sizeof(int32), NumIndicesToAdd * sizeof(int32), RLM_WriteOnly);

            // Iterate through index data, copying in new info
            for (int32 AddI = 0; AddI<NumIndicesToAdd; AddI++)
            {
                IndexBufferData[AddI] = SectionData->AddedIndexBuffer[AddI];
            }
#endif

            // Unlock index buffer
            RHICmdList.UnlockBuffer(Section->IndexBuffer.IndexBufferRHI);
        }

        // Free data sent from game thread
        delete SectionData;
    }
}

/** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateSection(int32 SectionIdx, const TArray<int32>& NewBarycentricPosOffsets)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);

    // Check it references a valid section
    if (SectionIdx < Sections.Num() &&
        Sections[SectionIdx] != nullptr)
    {
        FFEMFXMeshProxySection* Section = Sections[SectionIdx];
        if (NewBarycentricPosOffsets.Num() > Section->VertexBarycentricPosOffsets.NumElements)
        {
            Section->VertexBarycentricPosOffsets.Init(NewBarycentricPosOffsets);
        }
        else
        {
            Section->VertexBarycentricPosOffsets.Update(NewBarycentricPosOffsets);
        }
    }
}

/** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateSection(int32 SectionIdx, const TArray<FFEMFXMeshBarycentricPos>& NewBarycentricPositions)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);

    // Check it references a valid section
    if (SectionIdx < Sections.Num() &&
        Sections[SectionIdx] != nullptr)
    {
        FFEMFXMeshProxySection* Section = Sections[SectionIdx];
        if (NewBarycentricPositions.Num() > Section->VertexBarycentricPositions.NumElements)
        {
            Section->VertexBarycentricPositions.Init(NewBarycentricPositions);
        }
        else
        {
            Section->VertexBarycentricPositions.Update(NewBarycentricPositions);
        }
    }
}

void FFEMFXMeshSceneProxy::UpdateTetMesh(const FFEMTetMeshRenderData RenderData, bool PadVerticesForFracture)
{
	UpdateTetMesh(RenderData.FEMMeshVertexPositions, RenderData.FEMMeshVertexRotations, RenderData.FEMMeshDeformations, PadVerticesForFracture);
	UpdateTetVertexIds(RenderData.FEMMeshTetVertexIds);
}

   /** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateTetMesh(const TArray<FVector3f>& NewVertexPositions, const TArray<FFEMFXMeshTetRotation>& NewVertexRotations,
     const TArray<float>& NewDeformations, bool PadVerticesForFracture)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);

    if (NewVertexPositions.Num() != NewVertexRotations.Num())
    {
        UE_LOG(FEMLog, Warning, TEXT("UpdateTetMesh: vert array sizes don't match"));
        return;
    }

    if (NewVertexPositions.Num() > TetMeshVertexPositions.NumElements)
    {
        if (PadVerticesForFracture)
        {
        	TetMeshVertexPositions.Init(NewVertexPositions.Num() * 2);
            TetMeshVertexPositions.Update(NewVertexPositions);

            TetMeshVertexRotations.Init(NewVertexRotations.Num() * 2);
            TetMeshVertexRotations.Update(NewVertexRotations);

			TetMeshDeformations.Init(NewDeformations.Num() * 2);
			TetMeshDeformations.Update(NewDeformations);
        }
        else
        {
            TetMeshVertexPositions.Init(NewVertexPositions);
            TetMeshVertexRotations.Init(NewVertexRotations);
			TetMeshDeformations.Init(NewDeformations);
        }
    }
    else
    {
        TetMeshVertexPositions.Update(NewVertexPositions);
        TetMeshVertexRotations.Update(NewVertexRotations);
		TetMeshDeformations.Update(NewDeformations);
    }
}

/** Called on render thread to assign new dynamic data */
void FFEMFXMeshSceneProxy::UpdateTetVertexIds(const TArray<FFEMFXMeshTetVertexIds>& NewTetVertexIds)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionRT);

    if (NewTetVertexIds.Num() > TetVertexIds.NumElements)
    {
        TetVertexIds.Init(NewTetVertexIds);
    }
    else
    {
        TetVertexIds.Update(NewTetVertexIds);
    }
}

void FFEMFXMeshSceneProxy::SetSectionVisibility_RenderThread(int32 SectionIndex, bool bNewVisibility)
{
    check(IsInRenderingThread());

    if (SectionIndex < Sections.Num() &&
        Sections[SectionIndex] != nullptr)
    {
        Sections[SectionIndex]->bSectionVisible = bNewVisibility;
    }
}


void FFEMFXMeshSceneProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& Collector) const
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_GetMeshElements);


    // Set up wireframe material (if needed)
    const bool bWireframe = AllowDebugViewmodes() && ViewFamily.EngineShowFlags.Wireframe;

    FColoredMaterialRenderProxy* WireframeMaterialInstance = NULL;
    if (bWireframe)
    {
        WireframeMaterialInstance = new FColoredMaterialRenderProxy(
            GEngine->WireframeMaterial ? GEngine->WireframeMaterial->GetRenderProxy() : NULL,
            FLinearColor(0, 0.5f, 1.f)
        );

        Collector.RegisterOneFrameMaterialProxy(WireframeMaterialInstance);
    }
	
    // Iterate over sections
    for (const FFEMFXMeshProxySection* Section : Sections)
    {
        if (Section != nullptr && Section->bSectionVisible)
        {
			
			UMaterialInterface* Mat = Component->GetMaterial(Section->MaterialIndex);
			if (Mat == nullptr) {
				Mat = UMaterial::GetDefaultMaterial(MD_Surface);
			}

			FMaterialRenderProxy* MaterialProxy = bWireframe ? WireframeMaterialInstance : Mat->GetRenderProxy();
			// For each view..
            for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
            {
                if (VisibilityMap & (1 << ViewIndex))
                {
                    // Set SRV references in user data
                    FFEMFXMeshBatchElementParams* BatchElementParams = new FFEMFXMeshBatchElementParams;
                    BatchElementParams->TetMeshVertexPosBufferSRV = TetMeshVertexPositions.SRV;
                    BatchElementParams->TetMeshVertexRotBufferSRV = TetMeshVertexRotations.SRV;
					BatchElementParams->TetMeshDeformationBufferSRV = TetMeshDeformations.SRV;
                    BatchElementParams->TetVertexIdBufferSRV = TetVertexIds.SRV;
                    BatchElementParams->BarycentricPosIdBufferSRV = Section->VertexBarycentricPosOffsets.SRV;
                    BatchElementParams->BarycentricPosBufferSRV = Section->VertexBarycentricPositions.SRV;

                    // Draw the mesh.
                    FMeshBatch& Mesh = Collector.AllocateMesh();
                	FBoxSphereBounds OutBounds;
                	GetPreSkinnedLocalBounds(OutBounds);
                    FMeshBatchElement& BatchElement = Mesh.Elements[0];
                    BatchElement.UserData = BatchElementParams;
                    BatchElement.IndexBuffer = &Section->IndexBuffer;
                    Mesh.bWireframe = bWireframe;
                    Mesh.VertexFactory = &Section->VertexFactory;
                    Mesh.MaterialRenderProxy = MaterialProxy;
                    BatchElement.PrimitiveUniformBuffer = CreatePrimitiveUniformBufferImmediate(GetLocalToWorld(), GetBounds(), GetLocalBounds(), OutBounds, true, false);
                    BatchElement.FirstIndex = 0;
                    BatchElement.NumPrimitives = Section->IndexBuffer.Indices.Num() / 3;
                    BatchElement.MinVertexIndex = 0;
                    BatchElement.MaxVertexIndex = Section->VertexBuffers.StaticMeshVertexBuffer.Vertices.Num() - 1;
                    Mesh.ReverseCulling = IsLocalToWorldDeterminantNegative();
                    Mesh.Type = PT_TriangleList;
                    Mesh.DepthPriorityGroup = SDPG_World;
                    Mesh.bCanApplyViewModeOverrides = false;
                    Collector.AddMesh(ViewIndex, Mesh);
                }
            }
        }
    }

     // Draw bounds
#if !(UE_BUILD_SHIPPING || UE_BUILD_TEST)
     for (int32 ViewIndex = 0; ViewIndex < Views.Num(); ViewIndex++)
     {
         if (VisibilityMap & (1 << ViewIndex))
         {
             // Draw simple collision as wireframe if 'show collision', and collision is enabled, and we are not using the complex as the simple
			 if (ViewFamily.EngineShowFlags.Bounds)
             {
				 RenderBounds(Collector.GetPDI(ViewIndex), ViewFamily.EngineShowFlags, GetBounds(), IsSelected());
             }
         }
     }
#endif
}

FPrimitiveViewRelevance FFEMFXMeshSceneProxy::GetViewRelevance(const FSceneView* View) const
{
    FPrimitiveViewRelevance Result;
    Result.bDrawRelevance = IsShown(View);
    Result.bShadowRelevance = IsShadowCast(View);
    Result.bDynamicRelevance = true;
    Result.bRenderInMainPass = ShouldRenderInMainPass();
    Result.bUsesLightingChannels = GetLightingChannelMask() != GetDefaultLightingChannelMask();
    Result.bRenderCustomDepth = ShouldRenderCustomDepth();
    MaterialRelevance.SetPrimitiveViewRelevance(Result);
    return Result;
}

bool FFEMFXMeshSceneProxy::CanBeOccluded() const
{
    return !MaterialRelevance.bDisableDepthTest;
}

uint32 FFEMFXMeshSceneProxy::GetMemoryFootprint(void) const
{
    return(sizeof(*this) + GetAllocatedSize());
}
//////////////////////////////////////////////////////////////////////////

UFEMFXMeshComponent::UFEMFXMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), maxTriangles(0), FEMMesh(nullptr), MeshHelper(nullptr), Scene(nullptr),
	  Kinematic(false),
	  FractureEnabled(false),
	  TetMeshBuffer(nullptr),
	  TetMesh(nullptr),
	  RestPositions(nullptr), TetVertIds(nullptr),
	  BvHierarchy(nullptr)
{
	bUseComplexAsSimpleCollision = true;

	ResourceInitialized = false;

	PlasticityEnabled = false;

	SceneBufferIndex = 0;
	ConvertUnits = true;
	bUseDebugAsRenderMesh = false;
	IsWoodPanel = false;
	AddToSimulation = true;

	bCachedMaterialParameterIndicesAreDirty = true;

	InitialTransform = FTransform::Identity;

	MeshParameters.Add(FString("Default"));

	// These values are applied to tet mesh if changed from defaults
	Mass = 0.0f;
	CollisionGroup = -1;
	SleepMaxSpeedThreshold = 0.0f;
	SleepAvgSpeedThreshold = 0.0f;
	SleepStableCount = -1;
	RemoveKinematicVertexStressThreshold = 0.0f;

	TetAssignmentsNeedUpdate = true;

	EditorOnly = false;
}

unsigned int UFEMFXMeshComponent::GetBufferId()
{
	return AMD::FmGetTetMeshBufferId(*TetMeshBuffer);
}


void UFEMFXMeshComponent::SetTetMaterial_NoFracture(UFEMFXTetMeshParameters* newParameters, int TetId, int NoFractureFaces)
{

	UFEMFXTetMeshParameters* temp = newParameters;// .GetDefaultObject();

	if (temp == nullptr)
	{
		FString debugString = GetName() + ": Attempting to apply null material [SetTetMaterial]";
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, debugString);
	}
	else
	{
		AMD::FmTetMaterialParams tempMeshParams;
		tempMeshParams.fractureStressThreshold = temp->fractureStressThreshold;
		tempMeshParams.lowerDeformationLimit = temp->lowerDeformationLimit;
		tempMeshParams.maxUnconstrainedSolveIterations = temp->maxUnconstrainedSolveIterations;
		tempMeshParams.plasticCreep = temp->plasticCreep;
		tempMeshParams.plasticMax = temp->plasticMax;
		tempMeshParams.plasticMin = temp->plasticMin;
		tempMeshParams.plasticYieldThreshold = temp->plasticYieldThreshold;
		tempMeshParams.poissonsRatio = temp->poissonsRatio;
		tempMeshParams.restDensity = temp->restDensity;
		tempMeshParams.upperDeformationLimit = temp->upperDeformationLimit;
		tempMeshParams.youngsModulus = temp->youngsModulus;

		AMD::FmUpdateTetMaterialParams(Scene->GetSceneBuffer(), AMD::FmGetTetMesh(*TetMeshBuffer, 0), TetId, tempMeshParams);
        AMD::FmAddTetFlags(AMD::FmGetTetMesh(*TetMeshBuffer, 0), TetId, NoFractureFaces);
	}
}

void UFEMFXMeshComponent::SetTetMaterial(UFEMFXTetMeshParameters* newParameters, int TetId)
{

	UFEMFXTetMeshParameters* temp = newParameters;// .GetDefaultObject();

	if (temp == nullptr)
	{
		FString debugString = GetName() + ": Attempting to apply null material [SetTetMaterial]";
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, debugString);
	}
	else
	{
		AMD::FmTetMaterialParams tempMeshParams;
		tempMeshParams.fractureStressThreshold = temp->fractureStressThreshold;
		tempMeshParams.lowerDeformationLimit = temp->lowerDeformationLimit;
		tempMeshParams.maxUnconstrainedSolveIterations = temp->maxUnconstrainedSolveIterations;
		tempMeshParams.plasticCreep = temp->plasticCreep;
		tempMeshParams.plasticMax = temp->plasticMax;
		tempMeshParams.plasticMin = temp->plasticMin;
		tempMeshParams.plasticYieldThreshold = temp->plasticYieldThreshold;
		tempMeshParams.poissonsRatio = temp->poissonsRatio;
		tempMeshParams.restDensity = temp->restDensity;
		tempMeshParams.upperDeformationLimit = temp->upperDeformationLimit;
		tempMeshParams.youngsModulus = temp->youngsModulus;

		AMD::FmUpdateTetMaterialParams(Scene->GetSceneBuffer(), AMD::FmGetTetMesh(*TetMeshBuffer, 0), TetId, tempMeshParams);
	}
}

void UFEMFXMeshComponent::SetTetMeshMaterial(UFEMFXTetMeshParameters* newParameters, float plasticAttenuation)
{
	if (GetTetMeshBuffer() == nullptr)
	{
		return;
	}

	UFEMFXTetMeshParameters* temp = newParameters;// .GetDefaultObject();

	AMD::FmTetMaterialParams tempMeshParams;
	tempMeshParams.fractureStressThreshold = temp->fractureStressThreshold;
	tempMeshParams.lowerDeformationLimit = temp->lowerDeformationLimit;
	tempMeshParams.maxUnconstrainedSolveIterations = temp->maxUnconstrainedSolveIterations;
	tempMeshParams.plasticCreep = temp->plasticCreep;
	tempMeshParams.plasticMax = temp->plasticMax;
	tempMeshParams.plasticMin = temp->plasticMin;
	tempMeshParams.plasticYieldThreshold = temp->plasticYieldThreshold;
	tempMeshParams.poissonsRatio = temp->poissonsRatio;
	tempMeshParams.restDensity = temp->restDensity;
	tempMeshParams.upperDeformationLimit = temp->upperDeformationLimit;
	tempMeshParams.youngsModulus = temp->youngsModulus;

	MeshParameters["Default"] = newParameters;

	AMD::FmUpdateAllTetMaterialParams(Scene->GetSceneBuffer(), AMD::FmGetTetMesh(*GetTetMeshBuffer(), 0), tempMeshParams, plasticAttenuation);
}

float UFEMFXMeshComponent::GetDestructionValue()
{

	float totalDamage = 0;

	FVector transform = GetComponentLocation();
	AMD::FmVector3 deltaPos = ConvertUnrealToFEMFXVector(transform) / 100;

    AMD::uint NumVerts = FmGetNumVerts(*TetMesh);
	for (AMD::uint i = 0; i < NumVerts; ++i)
	{
        AMD::FmVector3 pos = FmGetVertPosition(*TetMesh, i);
        AMD::FmVector3 restPos = FmGetVertRestPosition(*TetMesh, i);
        AMD::FmVector3 deltaVector = abs((pos - (restPos + deltaPos)));

		float length = abs(sqrt(deltaVector.x * deltaVector.x + deltaVector.y * deltaVector.y + deltaVector.z * deltaVector.z));

		totalDamage += length;
	}

	return totalDamage;
}

void UFEMFXMeshComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(FEMMesh))
	{
		FName name = MakeUniqueObjectName(this, UFEMMesh::StaticClass(), *GetName());
		FEMMesh = NewObject<UFEMMesh>(this, name);
	}

    // Copy barycentric bosition offsets for each section so they can be modified per instance
    int32 NumSections = FEMMesh->GetImportedResource()->GetMeshSections().Num();

    SectionUpdatingBaryPosOffsets.Reset();
    SectionUpdatingBaryPosOffsets.AddDefaulted(NumSections);

    SectionBaryPosOffsetNeedsUpdate.Reset();

    for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
    {
        SectionUpdatingBaryPosOffsets[SectionIdx] = FEMMesh->GetImportedResource()->GetMeshSections()[SectionIdx].BarycentricPosIds;
        SectionBaryPosOffsetNeedsUpdate.Add(true);
    }

    ExposedTriangleVertexIndices.Reset();

    UpdatingShardVertTetAssignmentsBuffer = FEMMesh->GetTetAssignments();

	ResourceInitialized = true;

	TArray<AActor*> ActorsFound;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFEMFXScene::StaticClass(), ActorsFound);

	if (ActorsFound.Num() > 0)
	{
		Scene = Cast<AFEMFXScene>(ActorsFound[0]);
	}

	TArray<AActor*> MeshHelpersFound;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFEMPreProcessedMeshHelper::StaticClass(), MeshHelpersFound);

	if (MeshHelpersFound.Num() > 1)
	{
		UE_LOG(FEMLog, Warning, TEXT("Found more then 1 PreProcessedMeshHelper. There should only be one as this could cause negative performance inpacts."));
	}

	if (MeshHelpersFound.Num() == 0)
	{
		UE_LOG(FEMLog, Warning, TEXT("Did not find a PreProcessedMeshHelper. There should be 1 in the scene to have positive performance inpacts."));
	}

	if (MeshHelpersFound.Num() > 0)
	{
		MeshHelper = Cast<AFEMPreProcessedMeshHelper>(MeshHelpersFound[0]);
	}
}

//It only does position for now
void UFEMFXMeshComponent::SetTetMeshPositionAndRotation(FVector position, FRotator rotation)
{
	AMD::FmVector3 newPos = ConvertUnrealToFEMFXVector(position) / 100;

    AMD::FmResetFromRestPositions(NULL, TetMesh, AMD::FmMatrix3::identity(), newPos);
}

void UFEMFXMeshComponent::CleanUpAfterImport()
{
	CleanResources();

    if (TetMeshBuffer)
    {
        FmAlignedFree(TetMeshBuffer);
    }
	TetMeshBuffer = nullptr;

	TetMesh = nullptr;
}

void UFEMFXMeshComponent::CleanResources()
{
	delete RestPositions;
	RestPositions = nullptr;

	delete TetVertIds;
	TetVertIds = nullptr;

    AMD::FmDestroyBvh(BvHierarchy);
	BvHierarchy = nullptr;
}

void UFEMFXMeshComponent::LoadResource()
{
	if (EditorOnly)
		return;

	RestPositions = new AMD::FmVector3[FEMMesh->GetComponentResource().NumVerts];
	FMemory::Memcpy(RestPositions, FEMMesh->GetComponentResource().restPositions.GetData(), sizeof(AMD::FmVector3) * FEMMesh->GetComponentResource().NumVerts);

	TetVertIds = new AMD::FmTetVertIds[FEMMesh->GetComponentResource().NumTets];
	FMemory::Memcpy(TetVertIds, FEMMesh->GetComponentResource().tetVertIds.GetData(), sizeof(AMD::FmTetVertIds) * FEMMesh->GetComponentResource().NumTets);

	BvHierarchy = AMD::FmCreateBvh(FEMMesh->GetComponentResource().NumTets);
	AMD::FmBuildRestMeshTetBvh(BvHierarchy, RestPositions, TetVertIds, FEMMesh->GetComponentResource().NumTets);

	//isInitialized = true;
}

void UFEMFXMeshComponent::LoadSimObject()
{
	if (EditorOnly)
		return;

	// int MaxVerts = MAX_VERTS_PER_MESH_BUFFER;
	// int MaxExteriorFaces = FEMMesh->GetComponentResource().NumTets * 4;
	//
	// if (!FractureEnabled)
	// {
	// 	MaxVerts = FEMMesh->GetComponentResource().NumVerts;
	// }

	AMD::FmArray<unsigned int>* vertIncidentTets = new AMD::FmArray<unsigned int>[FEMMesh->GetComponentResource().NumVerts];
	int currentNum = 0;
	int lastNum = 0;
	int currentArray = 0;
	for (int i = 0; i < FEMMesh->GetComponentResource().vertIncidentTets.Num(); ++i)
	{
		if (i == 0)
		{
			currentNum = FEMMesh->GetComponentResource().vertIncidentTets[i];
		}
		else
		{
			if (lastNum + currentNum >= i)
			{
				vertIncidentTets[currentArray].Add(FEMMesh->GetComponentResource().vertIncidentTets[i]);
			}
			else
			{
				currentArray++;
				currentNum = FEMMesh->GetComponentResource().vertIncidentTets[i];
				lastNum = i;
			}
		}
	}


    AMD::FmFractureGroupCounts* fractureGroupCounts = new AMD::FmFractureGroupCounts[FEMMesh->GetComponentResource().NumTets];
    AMD::uint* tetFractureGroupIds = new AMD::uint[FEMMesh->GetComponentResource().NumTets];

    AMD::FmTetMeshBufferBounds bounds;
    AMD::FmComputeTetMeshBufferBounds(
        &bounds,
        fractureGroupCounts,
        tetFractureGroupIds,
        vertIncidentTets, (AMD::FmTetVertIds*)FEMMesh->GetComponentResource().tetVertIds.GetData(), NULL,
        FEMMesh->GetComponentResource().NumVerts, FEMMesh->GetComponentResource().NumTets, FractureEnabled);

	AMD::FmTetMeshBufferSetupParams tetMeshParams;
    tetMeshParams.numVerts = bounds.numVerts;
    tetMeshParams.maxVerts = bounds.maxVerts;
    tetMeshParams.numTets = bounds.numTets;
    tetMeshParams.maxVertAdjacentVerts = bounds.maxVertAdjacentVerts;
    tetMeshParams.numTets = bounds.numTets;
    tetMeshParams.numVertIncidentTets = bounds.numVertIncidentTets;
    tetMeshParams.maxExteriorFaces = bounds.maxExteriorFaces;
    tetMeshParams.maxTetMeshes = bounds.maxTetMeshes;
    tetMeshParams.enablePlasticity = PlasticityEnabled;
    tetMeshParams.enableFracture = FractureEnabled;
    tetMeshParams.isKinematic = Kinematic;
    tetMeshParams.collisionGroup = FEMMesh->GetComponentResource().CollisionGroup;

    TetMeshBuffer = FmCreateTetMeshBuffer(tetMeshParams, fractureGroupCounts, tetFractureGroupIds, &TetMesh);

    delete[] fractureGroupCounts;
    delete[] tetFractureGroupIds;

	AMD::FmTetMesh& tetMesh = *TetMesh;
	FQuat rot = GetComponentQuat();
	AMD::FmVector3 position = ConvertUnrealToFEMFXVector(GetComponentLocation()) / 100;
	AMD::FmMatrix3 rotation = ConvertUnrealAxesToFEMFXMatrix(
		rot.GetAxisX(),
		rot.GetAxisY(),
		rot.GetAxisZ());
	AMD::FmVector3 velocity = AMD::FmVector3(0.0f, 0.0f, 0.0f);

	AMD::FmInitVertState(&tetMesh, RestPositions, rotation, position, 1.0f, velocity);

	UFEMFXTetMeshParameters* MeshP = MeshParameters["Default"];
	AMD::FmTetMaterialParams tetMeshMaterialParams = AMD::FmTetMaterialParams();
	if (IsValid(MeshP)) {
		tetMeshMaterialParams.fractureStressThreshold = MeshP->fractureStressThreshold;
		tetMeshMaterialParams.lowerDeformationLimit = MeshP->lowerDeformationLimit;
		tetMeshMaterialParams.maxUnconstrainedSolveIterations = MeshP->maxUnconstrainedSolveIterations;
		tetMeshMaterialParams.plasticCreep = MeshP->plasticCreep;
		tetMeshMaterialParams.plasticMax = MeshP->plasticMax;
		tetMeshMaterialParams.plasticMin = MeshP->plasticMin;
		tetMeshMaterialParams.plasticYieldThreshold = MeshP->plasticYieldThreshold;
		tetMeshMaterialParams.poissonsRatio = MeshP->poissonsRatio;
		tetMeshMaterialParams.restDensity = MeshP->restDensity;
		tetMeshMaterialParams.upperDeformationLimit = MeshP->upperDeformationLimit;
		tetMeshMaterialParams.youngsModulus = MeshP->youngsModulus;
	}

	AMD::FmInitTetState(&tetMesh, TetVertIds, tetMeshMaterialParams, 0.6f);

	AMD::FmComputeMeshConstantMatrices(&tetMesh);

	AMD::FmSetMassesFromRestDensities(&tetMesh);

    if (!AMD::FmInitConnectivity(&tetMesh, vertIncidentTets))
    {
        FString debugString = "InitConnectivity failed for " + Name + ".  Model has more than the max number of tets incident on a vertex (" + FString::FromInt(FM_MAX_VERT_INCIDENT_TETS) + ")";
        GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, debugString);
        UE_LOG(FEMLog, Error, TEXT("InitConnectivity failed for %s.  Model has more than the max number of tets incident on a vertex (%u)"), *Name, FM_MAX_VERT_INCIDENT_TETS);
        return;
    }

	AMD::FmFinishTetMeshInit(&tetMesh);

    //if (!AMD::ValidateMesh(tetMesh))
    //{
    //    FString debugString = "ValidateMesh false for " + Name;
    //    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, debugString);
    //    UE_LOG(FEMLog, Error, TEXT("ValidateMesh false for %s"), *Name);
    //}

	ResourceInitialized = true;

	if (IsValid(Scene))
	{
		for (int i = 0; i < FEMMesh->GetComponentResource().Materials.Num(); i++)
		{
			for (int j = 0; j < FEMMesh->GetComponentResource().Materials[i].TetIds.Num(); j++)
			{
				if(FEMMesh->GetComponentResource().Materials[i].NoFractureFaces.Num() > 0)
				{
					SetTetMaterial_NoFracture(MeshParameters[FEMMesh->GetComponentResource().Materials[i].Name], FEMMesh->GetComponentResource().Materials[i].TetIds[j],
						FEMMesh->GetComponentResource().Materials[i].NoFractureFaces[j]);
				}
				else
				{
					SetTetMaterial(MeshParameters[FEMMesh->GetComponentResource().Materials[i].Name], FEMMesh->GetComponentResource().Materials[i].TetIds[j]);
				}
			}
		}
	}

    // Override defaults if values set in editor
    if (Mass > 0.0f)
    {
        FmSetTotalMass(&tetMesh, Mass);
    }

    if (CollisionGroup >= 0 && CollisionGroup < 32)
    {
        FmSetCollisionGroup(&tetMesh, CollisionGroup);
    }

    if (SleepMaxSpeedThreshold > 0.0f)
    {
        FmSetSleepMaxSpeedThreshold(&tetMesh, SleepMaxSpeedThreshold);
    }

    if (SleepAvgSpeedThreshold > 0.0f)
    {
        FmSetSleepAvgSpeedThreshold(&tetMesh, SleepAvgSpeedThreshold);
    }

    if (SleepStableCount >= 0)
    {
        FmSetSleepStableCount(&tetMesh, SleepStableCount);
    }

    if (RemoveKinematicVertexStressThreshold > 0.0f)
    {
        FmSetRemoveKinematicThreshold(&tetMesh, RemoveKinematicVertexStressThreshold);
    }

    // Condition number check
    FString KeyName = Name;
    if (FEMMesh->GetComponentResource().Materials.Num() > 0)
    {
        KeyName += " " + FEMMesh->GetComponentResource().Materials[0].Name;
    }
    KeyName += FString::SanitizeFloat(FmGetNumVerts(tetMesh));

    if (Scene && !Kinematic && !Scene->IsConditionChecked(KeyName))
    {
        Scene->AddConditionCheckedMesh(KeyName);

        AMD::FmSceneControlParams defaultParams;
        float meshCondition = AMD::FmCheckMaxTetMeshCondition(TetMeshBuffer, defaultParams);

        const float conditionThreshold = 20000.0f;
        if (meshCondition > conditionThreshold)
        {
#define PRINT_CONDITION_ONSCREEN 0
#if PRINT_CONDITION_ONSCREEN
            static bool PrintedConditioningTips = false;
            FString debugString;

            if (!PrintedConditioningTips)
            {
                PrintedConditioningTips = true;
                debugString = "One or more FEM models has high condition number (> " + FString::SanitizeFloat(conditionThreshold) + "). See Output Log.\n";
                debugString += "Can improve conditioning by increasing mass, lowering Young's modulus, lowering Poisson's ratio, or lowering aspect ratios of tetrahedra";
                GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Yellow, debugString);
            }
            debugString = Name + " Condition: " + FString::SanitizeFloat(meshCondition);
            GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, debugString);
#endif
        }

        UE_LOG(FEMLog, Warning, TEXT("FEM component %s condition of mesh: %f"), *Name, meshCondition);
    }
}

TArray<FNameIndexMap> UFEMFXMeshComponent::GetTags()
{
	return FEMMesh->GetComponentResource().Tags;
}

FNameIndexMap UFEMFXMeshComponent::GetTagByName(FString TagName)
{
	FNameIndexMap tag = FNameIndexMap();

	for (int i = 0; i < GetTags().Num(); ++i)
	{
		if (GetTags()[i].Name == TagName)
		{
			tag = GetTags()[i];
			break;
		}
	}

	return tag;
}

FTetVertex UFEMFXMeshComponent::GetTetVertById(int id, int subTetMesh)
{
	return CreateTetVertex(AMD::FmGetTetMesh(*TetMeshBuffer, subTetMesh), id);
}

TArray<FTetInfo> UFEMFXMeshComponent::GetTetsByTag(FString tagName)
{
	TArray<FTetInfo> tets;
	FNameIndexMap tag = GetTagByName(tagName);

	for (int i = 0; i < tag.TetIds.Num(); ++i)
	{
		tets.Push(CreateTetInfo(TetMesh, tag.TetIds[i]));
	}

	return tets;
}

AMD::FmTetMesh* UFEMFXMeshComponent::GetTetMeshPtr()
{
	return TetMesh;
}


#ifdef WITH_EDITOR
void UFEMFXMeshComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property)
	{
		const FName MemberPropName = PropertyChangedEvent.Property->GetFName();
		if (MemberPropName == GET_MEMBER_NAME_CHECKED(UFEMFXMeshComponent, MeshParameters))
		{
			MeshParameters["Default"] = MeshParameters["Default"];
		}
	}
}
#endif

void UFEMFXMeshComponent::UpdateRenderingDataFromFracture()
{
	TArray<FFEMFracture> FractureData;

	// Iterate over sub-meshes of the tet mesh buffer, to add new faces created during fracture
    AMD::uint NumTetMeshes = AMD::FmGetNumTetMeshes(*TetMeshBuffer);
	for (AMD::uint meshIdx = 0; meshIdx < NumTetMeshes; meshIdx++)
	{
		AMD::FmTetMesh& tetMesh = *AMD::FmGetTetMesh(*TetMeshBuffer, meshIdx);

		// Add newly exposed render mesh faces
		AMD::uint NumNewExteriorFaces = AMD::FmGetNumNewExteriorFaces(tetMesh);

		if (NumNewExteriorFaces > 0)
		{
            if (FEMMesh->GetTetMesh()->GetTetFractureShardVerticesToUpdate().Num() == 0) // original wood fracture import
            {
                TetAssignmentsNeedUpdate = true;
            }

			for (AMD::uint NewExtFaceIdx = 0; NewExtFaceIdx < NumNewExteriorFaces; NewExtFaceIdx++)
			{
				AMD::uint bufferTetId, bufferTetFaceId;

                AMD::uint TetId, FaceId;
                AMD::FmGetNewExteriorFace(&TetId, &FaceId, tetMesh, NewExtFaceIdx);

                AMD::FmGetNewExteriorFaceInTetMeshBuffer(&bufferTetId, &bufferTetFaceId, tetMesh, NewExtFaceIdx);

				if ((int32)bufferTetId < FEMMesh->GetTetMesh()->GetTetFractureNewRenderFaces().Num())
				{
					FFEMFracture fracture;
					fracture.TetInfo = CreateTetInfo(&tetMesh, TetId);
					fracture.SubMeshIndex = meshIdx;

					FractureData.Add(fracture);

                    // Add indices for triangles exposed after tet faces are fractured
					TArray<int32> NewIndices = FEMMesh->GetTetMesh()->GetTetFractureNewRenderFaces()[bufferTetId].GetIndices(bufferTetFaceId);
					int32 FaceNumIndices = NewIndices.Num();

					for (int32 NewIdxIdx = 0; NewIdxIdx < FaceNumIndices; NewIdxIdx++)
					{
                        ExposedTriangleVertexIndices.Add(NewIndices[NewIdxIdx]);
					}

                    // Update affected barypos ids for shard vertices
                    if ((int32)bufferTetId < FEMMesh->GetTetMesh()->GetTetFractureShardVerticesToUpdate().Num())
                    {
                        const TArray<FShardVertUpdateInfo>& ShardVertices = FEMMesh->GetTetMesh()->GetTetFractureShardVerticesToUpdate()[bufferTetId].GetShardVerticesOfFace(bufferTetFaceId);
                        int32 FaceNumShardVertices = ShardVertices.Num();

                        for (int32 ShardVertIdx = 0; ShardVertIdx < FaceNumShardVertices; ShardVertIdx++)
                        {
                            const FShardVertUpdateInfo& UpdateInfo = ShardVertices[ShardVertIdx];

                            TArray<int32>& BaryPosOffsets = SectionUpdatingBaryPosOffsets[UpdateInfo.meshSectionId];
                            int32 CurrentOffset = BaryPosOffsets[UpdateInfo.shardVertexId];

                            // Check if fracture requires changing the tet assignment
                            if (UpdateInfo.baryPosOffset < CurrentOffset)
                            {
                                BaryPosOffsets[UpdateInfo.shardVertexId] = UpdateInfo.baryPosOffset;

                                SectionBaryPosOffsetNeedsUpdate[UpdateInfo.meshSectionId] = true;
                            }
                        }
                    }
				}
			}
		}
	}

	FractureEvent.Broadcast(FractureData);
}

void UFEMFXMeshComponent::UpdateSceneProxyFromFracture()
{
    if (!IsValid(FEMMesh))
        return;

    if (ExposedTriangleVertexIndices.Num() > 0)
    {
        UpdateMeshSectionIndices(FEMMesh->GetTetMesh()->GetInteriorMeshSection(), ExposedTriangleVertexIndices);
        ExposedTriangleVertexIndices.Reset();
    }

    int32 NumSections = FEMMesh->GetImportedResource()->GetNumSections();

    if (!FEMMesh->GetIsWoodPanel() || TetMeshBuffer == nullptr || NumSections < 1)
        return;

    if (FEMMesh->GetTetMesh()->GetTetFractureShardVerticesToUpdate().Num() == 0)
    {
        // Original wood fracture import

        if (!TetAssignmentsNeedUpdate)
        {
            return;
        }

        TArray<int32>& NewBaryCentricPosIds = SectionUpdatingBaryPosOffsets[0];

        int32 NumShardVerts = NewBaryCentricPosIds.Num();

        for (int32 ShardVertIdx = 0; ShardVertIdx < NumShardVerts; ShardVertIdx++)
        {
            FShardVertTetAssignments& shardTetAssignments = GetShardVertTetAssignments()[ShardVertIdx];

            UpdateShardVertTetAssignments(&shardTetAssignments, *TetMeshBuffer);

            int32 BarycentricPosBase = ShardVertIdx * MAX_RENDER_VERT_TET_ASSIGNMENTS;
            int32 BarycentricPosOffset = shardTetAssignments.numTets - 1;

            NewBaryCentricPosIds[ShardVertIdx] = BarycentricPosBase + BarycentricPosOffset;
        }

        UpdateMeshSectionVertexBaryPosIds(0, NewBaryCentricPosIds);
        TetAssignmentsNeedUpdate = false;
    }
    else
    {
        for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
        {
            if (SectionBaryPosOffsetNeedsUpdate[SectionIdx])
            {
                UpdateMeshSectionVertexBaryPosIds(SectionIdx, SectionUpdatingBaryPosOffsets[SectionIdx]);

                SectionBaryPosOffsetNeedsUpdate[SectionIdx] = false;
            }
        }
    }
}

TArray<FTetQueryData> UFEMFXMeshComponent::ApplyExplosionForce(const FVector& origin,
	float shockwavePressure0, float shockwaveArea0,
	float speed, float timestep, float timeSinceDetonated)
{
	TArray<FTetQueryData> returnData;

	float innerRadius = speed * timeSinceDetonated;
	float outerRadius = speed * (timeSinceDetonated + timestep);

	float minDist = sqrtf(shockwaveArea0 / (4.0f * 3.14159265f));

    AMD::uint NumTetMeshes = FmGetNumTetMeshes(*TetMeshBuffer);
	for (AMD::uint tetMeshIdx = 0; tetMeshIdx < NumTetMeshes; tetMeshIdx++)
	{
		FTetQueryData data;
		data.Owner = this;
		data.SubMeshId = tetMeshIdx;
		data.numTets = 0;
		AMD::FmTetMesh* tetMesh = AMD::FmGetTetMesh(*TetMeshBuffer, tetMeshIdx);

        AMD::uint NumExteriorFaces = FmGetNumExteriorFaces(*tetMesh);
		for (AMD::uint extFaceId = 0; extFaceId < NumExteriorFaces; extFaceId++)
		{
            AMD::uint TetId, FaceId;
            AMD::FmGetExteriorFace(&TetId, &FaceId, *tetMesh, extFaceId);

            AMD::FmTetVertIds tetVertIds = FmGetTetVertIds(*tetMesh, TetId);
			AMD::FmFaceVertIds faceVertIds;
			AMD::FmGetFaceVertIds(&faceVertIds, FaceId, tetVertIds);

			AMD::FmVector3 pos0 = FmGetVertPosition(*tetMesh, faceVertIds.ids[0]);
			AMD::FmVector3 pos1 = FmGetVertPosition(*tetMesh, faceVertIds.ids[1]);
			AMD::FmVector3 pos2 = FmGetVertPosition(*tetMesh, faceVertIds.ids[2]);

			AMD::FmVector3 faceCenter = (pos0 + pos1 + pos2) / 3.0f;

			float lenSqr;
			AMD::FmVector3 orig = ConvertUnrealToFEMFXVector(origin);
			orig /= 100;
			AMD::FmVector3 explosionDir = AMD::FmNormalize(&lenSqr, faceCenter - orig);
			float distance = sqrtf(lenSqr);

			AMD::FmVector3 faceDir = normalize(cross(pos1 - pos0, pos2 - pos0));

			if (distance >= innerRadius && distance < outerRadius && dot(explosionDir, faceDir) < 0.0f)
			{
				AMD::FmVector3 xDir = FmVectormath::normalize(AMD::FmOrthogonalVector(explosionDir));
				AMD::FmVector3 yDir = FmVectormath::cross(xDir, explosionDir);

				pos0 -= faceCenter;
				pos1 -= faceCenter;
				pos2 -= faceCenter;
				float p0x = dot(pos0, xDir);
				float p0y = dot(pos0, yDir);
				float p1x = dot(pos1, xDir);
				float p1y = dot(pos1, yDir);
				float p2x = dot(pos2, xDir);
				float p2y = dot(pos2, yDir);
				float ax = p1x - p0x;
				float ay = p1y - p0y;
				float bx = p2x - p0x;
				float by = p2y - p0y;
				float faceArea = ax * by - ay * bx;

				float falloff;
				if (distance < minDist)
				{
					falloff = 1.0f;
				}
				else
				{
					float shockwaveArea = 4.0f * 3.14159265f * distance * distance;
					falloff = shockwaveArea0 / shockwaveArea;
				}

				float pressure = shockwavePressure0 * falloff;
				AMD::FmVector3 vertForce = explosionDir * pressure * faceArea * (1.0f / 3.0f);

				AMD::FmAddForceToVert(Scene->GetSceneBuffer(), tetMesh, faceVertIds.ids[0], vertForce);
				AMD::FmAddForceToVert(Scene->GetSceneBuffer(), tetMesh, faceVertIds.ids[1], vertForce);
				AMD::FmAddForceToVert(Scene->GetSceneBuffer(), tetMesh, faceVertIds.ids[2], vertForce);
				
				
				data.tetIds.Add(TetId);
				data.numTets++;
			}

			if (data.numTets > 0)
				returnData.Push(data);
		}
	}

	return returnData;
}

void UFEMFXMeshComponent::CreateFEMMeshFromTetMesh()
{
	if (!IsValid(FEMMesh))
		return;

	if (FEMMesh->IsCreated())
	{
		return;
	}

	UpdateBounds();
	MarkRenderTransformDirty();
	MarkRenderStateDirty();
}

void UFEMFXMeshComponent::Reset(FTransform startTrans)
{
	AMD::FmVector3 pos = ConvertUnrealToFEMFXVector(startTrans.GetTranslation()) / 100;
	FRotator Rotation = startTrans.Rotator();
	FVector temp = Rotation.RotateVector(FVector(1.0, 0.0, 0.0));

	AMD::FmVector3 Forward = ConvertUnrealToFEMFXVector(temp);

	AMD::FmVector3 Up(0.0f, 1.0f, 0.0f);
	AMD::FmVector3 Back = -Forward;

	AMD::FmVector3 ZVector = Back;
	AMD::FmVector3 XVector = normalize(cross(Up, ZVector));
	AMD::FmVector3 YVector = cross(ZVector, XVector);

	AMD::FmMatrix3 PlayerRotation;
	PlayerRotation.col0 = XVector;
	PlayerRotation.col1 = YVector;
	PlayerRotation.col2 = ZVector;
	
	AMD::FmResetFromRestPositions(Scene->GetSceneBuffer(), TetMesh, PlayerRotation, pos);
}

TArray<FTetQueryData> UFEMFXMeshComponent::TetMeshRadialQuery(FVector Pos, FVector Dir, float Radius)
{

	AMD::FmVector3 Position = ConvertUnrealToFEMFXVector(Pos) / 100;
	AMD::FmVector3 Direction = ConvertUnrealToFEMFXVector(Dir);

	TArray<FTetQueryData> data;

    AMD::uint NumTetMeshes = FmGetNumTetMeshes(*TetMeshBuffer);
	for (AMD::uint tetMeshIndex = 0; tetMeshIndex < NumTetMeshes; tetMeshIndex++)
	{
		AMD::FmTetMesh* tetMesh = AMD::FmGetTetMesh(*TetMeshBuffer, tetMeshIndex);
		AMD::TetMeshRayIntersectionResult result;
		if (AMD::FindRayIntersection(&result, tetMesh, Position, Direction, Radius))
		{
            AMD::uint NumTets = FmGetNumTets(*tetMesh);
			for (AMD::uint i = 0; i < NumTets; ++i)
			{
				FTetQueryData newData;
				newData.numTets = 0;

                AMD::FmTetVertIds TetVerts = FmGetTetVertIds(*tetMesh, i);

				for (int j = 0; j < 4; ++j)
				{
					AMD::FmVector3 deltaVector = (FmGetVertPosition(*tetMesh, TetVerts.ids[j]) - result.intersectionPoint);

					float length = abs(sqrt(deltaVector.x * deltaVector.x + deltaVector.y * deltaVector.y + deltaVector.z * deltaVector.z));

					if (length <= Radius)
					{
						newData.numTets++;
						newData.deltas.Push(length);
						newData.tetIds.Push(i);
						newData.Owner = this;
						newData.SubMeshId = tetMeshIndex;
						data.Push(newData);

						break;
					}
				}
			}
		}
	}

	return data;
}
//
// void UFEMFXMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<int32>& AddedIndices,
// 	const TArray<int32>& VertexBaryPosIds, const TArray<FFEMFXMeshBarycentricPos>& VertexBaryPositions)
// {
// 	//SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionGT);
// 	if (!IsValid(FEMMesh))
// 		return;
//
// 	if (SectionIndex < FEMMesh->GetImportedResource()->GetNumSections())
// 	{
// 		FProcMeshSection* Section = GetProcMeshSection(SectionIndex);
// 		TArray<FColor> Colors;
// 		TArray<FVector> Normals;
// 		TArray<FVector> Positions;
// 		TArray<FProcMeshTangent> Tangents;
// 		TArray<FVector2D> UVs;
// 		
// 		const int32 IndexOffset = Section->ProcIndexBuffer.Num();
// 		if (SceneProxy)
// 		{
// 			for (int i = 0; i < Section->ProcVertexBuffer.Num(); i++)
// 			{
// 				Colors.Add(Section->ProcVertexBuffer[i].Color);
// 				Normals.Add(Section->ProcVertexBuffer[i].Normal);
// 				Positions.Add(Section->ProcVertexBuffer[i].Position);
// 				Tangents.Add(Section->ProcVertexBuffer[i].Tangent);
// 			}
// 			UProceduralMeshComponent::UpdateMeshSection(FEMMesh, SectionIndex, Positions, Normals, UV0, Colors, Tangents);
// 		}
// 	}
// }

void UFEMFXMeshComponent::OnHit_Implementation(FEMCollision otherComponent)
{
	
}

SIZE_T FFEMFXMeshSceneProxy::GetTypeHash() const
{
	return 0;
}

AMD::FmTetMeshBuffer* UFEMFXMeshComponent::GetTetMeshBuffer() const
{
	return TetMeshBuffer;
}

FVector3f UFEMFXMeshComponent::GetVertPositionByIndex(int index, int subMeshIndex)
{
	AMD::FmTetMesh* tetMesh = AMD::FmGetTetMesh(*TetMeshBuffer, subMeshIndex);
	AMD::FmVector3 tempVec;
	if (tetMesh == nullptr)
	{
		UE_LOG(FEMLog, Warning, TEXT("subMeshIndex out of bounds."));
		tetMesh = TetMesh;
	}
	if (index >= (int)FmGetNumVerts(*tetMesh))
	{
		UE_LOG(FEMLog, Warning, TEXT("index out of bounds."));
		tempVec = AMD::FmInitVector3(0.0f);
	}
	else
	{
		tempVec = FmGetVertPosition(*tetMesh, index);
	}

	return ConvertFEMFXVectorToUnreal(tempVec) * 100;
}

FVector3f UFEMFXMeshComponent::GetTetMeshCenterOfMass(int subMeshIndex)
{
	const AMD::FmTetMesh* tetMesh = FmGetTetMesh(*TetMeshBuffer, subMeshIndex);
	AMD::FmVector3 tempVec;
	if (tetMesh)
	{
		tempVec = FmGetCenterOfMass(*tetMesh);
	}
	else
	{
		UE_LOG(FEMLog, Warning, TEXT("subMeshIndex out of bounds."));
	}
	return ConvertFEMFXVectorToUnreal(tempVec) * 100;
}

void UFEMFXMeshComponent::UpdateMeshSectionVertexBaryPosIds(int32 SectionIndex, const TArray<int32>& NewVertexBaryPosIds)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionGT);
	if (!IsValid(FEMMesh))
		return;

    if (SectionIndex < FEMMesh->GetImportedResource()->GetNumSections())
    {
        if (SceneProxy)
        {
            ((FFEMFXMeshSceneProxy*)SceneProxy)->UpdateSection(SectionIndex, NewVertexBaryPosIds);
        }
    }
}


void UFEMFXMeshComponent::UpdateMeshSectionVertexBaryPositions(int32 SectionIndex, const TArray<FFEMFXMeshBarycentricPos>& NewVertexBaryPositions)
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionGT);
	if (!IsValid(FEMMesh))
		return;

    if (SectionIndex < FEMMesh->GetImportedResource()->GetNumSections())
    {
        if (SceneProxy)
        {
            ((FFEMFXMeshSceneProxy*)SceneProxy)->UpdateSection(SectionIndex, NewVertexBaryPositions);
        }
    }
}

void UFEMFXMeshComponent::UpdateMeshSectionIndices(int32 SectionIndex, const TArray<int32>& AddedIndices)
{
	UE_LOG(LogTemp, Warning, TEXT("UpdateMeshSectionIndices executed"))
	//SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_UpdateSectionGT);
	if (!IsValid(FEMMesh))
		return;

	if (SectionIndex < FEMMesh->GetImportedResource()->GetNumSections())
	{
		FFEMFXMeshProxySection* Section = ((FFEMFXMeshSceneProxy*)SceneProxy)->GetSection(SectionIndex);//GetProcMeshSection(SectionIndex);

		const int32 IndexOffset = Section->IndexBuffer.Indices.Num();
		if (SceneProxy)
		{
			 // Create data to update section
			 FFEMFXMeshSectionIndexUpdateData* SectionData = new FFEMFXMeshSectionIndexUpdateData;
			 SectionData->TargetSection = SectionIndex;
			 SectionData->IndexOffset = IndexOffset;
			 SectionData->AddedIndexBuffer = AddedIndices;
			
			 // Enqueue command to send to render thread
			 ENQUEUE_RENDER_COMMAND(FFEMFXMeshSectionUpdate)(
			 [FEMFXMeshSceneProxy=(FFEMFXMeshSceneProxy*)SceneProxy,SectionData](FRHICommandListImmediate& RHICmdList)
			 {
			 	FEMFXMeshSceneProxy->UpdateSection_RenderThread(RHICmdList, SectionData);
			 });
		}
	}
}

void UFEMFXMeshComponent::PostEditSceneProxyUpdate()
{
	if (!IsValid(FEMMesh))
	{
		return;
	}

	FFEMTetMeshRenderData RenderData;

	RenderData.FEMMeshVertexPositions = FEMMesh->GetTetMesh()->GetVertexPositions();
	RenderData.FEMMeshVertexRotations = FEMMesh->GetTetMesh()->GetVertexRotations();
	RenderData.FEMMeshDeformations = FEMMesh->GetTetMesh()->GetDeformations();
	RenderData.FEMMeshTetVertexIds = FEMMesh->GetTetMesh()->GetTetVertexIds();

	if(SceneProxy)
	{
		((FFEMFXMeshSceneProxy*)SceneProxy)->UpdateTetMesh(RenderData, FractureEnabled);
	}
}

void UFEMFXMeshComponent::UpdateSceneProxy()
{
	FFEMTetMeshRenderData RenderData;

	FBox FEMMeshBox;
    AMD::FmVector3 firstPos = AMD::FmGetVertPosition(*AMD::FmGetTetMesh(*TetMeshBuffer, 0), 0);
	FEMMeshBox.Min = FEMMeshBox.Max = FVector3d(ConvertFEMFXVectorToUnreal(firstPos));
	FEMMeshBox.IsValid = 1;

	// Iterate over sub-meshes of the tet mesh buffer to add all vertices
	int32 VertexOffset = 0;
    AMD::uint NumTetMeshes = FmGetNumTetMeshes(*TetMeshBuffer);

    AMD::uint* TetMeshVertOffsets = new AMD::uint[NumTetMeshes];

	for (AMD::uint meshIdx = 0; meshIdx < NumTetMeshes; meshIdx++)
	{
		AMD::FmTetMesh& tetMesh = *AMD::FmGetTetMesh(*TetMeshBuffer, meshIdx);

		TetMeshVertOffsets[meshIdx] = VertexOffset;

		AMD::uint numVerts = FmGetNumVerts(tetMesh);
		for (AMD::uint vIdx = 0; vIdx < numVerts; vIdx++)
		{
			FVector3f pos = ConvertFEMFXVectorToUnreal(FmGetVertPosition(tetMesh, vIdx)) * 100;
			RenderData.FEMMeshVertexPositions.Add(pos);

			FFEMFXMeshTetRotation rotation;
			AMD::FmMatrix3 rot = AMD::FmInitMatrix3(normalize(FmGetVertTetQuatSum(tetMesh, vIdx)));
			ConvertFEMFXTetRotationToUnreal(rotation.Col0, rotation.Col1, rotation.Col2, rot);
			RenderData.FEMMeshVertexRotations.Add(rotation);

			RenderData.FEMMeshDeformations.Add(FmGetVertTetStrainMagMax(tetMesh, vIdx));

			FEMMeshBox += FVector3d(pos);

			VertexOffset++;
		}
	}

	AMD::uint NumTets = FmGetNumTets(*TetMeshBuffer);
	for (AMD::uint BufferTetIdx = 0; BufferTetIdx < NumTets; BufferTetIdx++)
	{
		AMD::uint TetId, MeshIdx;
		AMD::FmTetMesh* SubTetMesh = FmGetTetMeshContainingTet(&TetId, &MeshIdx, *TetMeshBuffer, BufferTetIdx);

		AMD::uint SubMeshVertOffset = TetMeshVertOffsets[MeshIdx];

        AMD::FmTetVertIds tetVertIds = FmGetTetVertIds(*SubTetMesh, TetId);

		FFEMFXMeshTetVertexIds VertexIds;
		VertexIds.Id0 = tetVertIds.ids[0];
		VertexIds.Id1 = tetVertIds.ids[1];
		VertexIds.Id2 = tetVertIds.ids[2];
		VertexIds.Id3 = tetVertIds.ids[3];

		VertexIds.Id0 += SubMeshVertOffset;
		VertexIds.Id1 += SubMeshVertOffset;
		VertexIds.Id2 += SubMeshVertOffset;
		VertexIds.Id3 += SubMeshVertOffset;

		RenderData.FEMMeshTetVertexIds.Add(VertexIds);
	}

    delete[] TetMeshVertOffsets;
	
	if(SceneProxy)
	{
		((FFEMFXMeshSceneProxy*)SceneProxy)->UpdateTetMesh(RenderData, true);
	}

	LocalBounds = FEMMeshBox;

	UpdateBounds();
	MarkRenderTransformDirty();
}

void UFEMFXMeshComponent::ResetFromRestPosition(FTransform transform, FVector velocity)
{

	FRotator rot = transform.Rotator();
	FVector position = transform.GetTranslation();

	FVector temp = rot.RotateVector(FVector(1.0, 0.0, 0.0));

	AMD::FmVector3 Forward = ConvertUnrealToFEMFXVector(temp);
	AMD::FmVector3 Location = ConvertUnrealToFEMFXVector(position);
	Location *= 0.01;

	AMD::FmVector3 Up(0.0f, 1.0f, 0.0f);
	AMD::FmVector3 Back = -Forward;

	AMD::FmVector3 ZVector = Back;
	AMD::FmVector3 XVector = normalize(cross(Up, ZVector));
	AMD::FmVector3 YVector = cross(ZVector, XVector);

	Location += XVector * 0.5f;

	AMD::FmMatrix3 Rotation;
	Rotation.col0 = XVector;
	Rotation.col1 = YVector;
	Rotation.col2 = ZVector;

	AMD::FmVector3 vel = ConvertUnrealToFEMFXVector(velocity);

	AMD::FmResetFromRestPositions(Scene->GetSceneBuffer(), GetTetMeshPtr(), Rotation, Location, vel);
}

void UFEMFXMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility)
{
	if (!IsValid(FEMMesh))
		return;

    if (SectionIndex < FEMMesh->GetImportedResource()->GetNumSections())
    {
        // Set game thread state
		//FEMMesh->GetImportedResource()->FEMFXMeshSections[SectionIndex].bSectionVisible = bNewVisibility;

        if (SceneProxy)
        {
	        // Enqueue command to modify render thread info
        	ENQUEUE_RENDER_COMMAND(FFEMFXMeshSectionVisibilityUpdate)
        	([FEMSceneProxy = ((FFEMFXMeshSceneProxy*)SceneProxy), SectionIndex, bNewVisibility](FRHICommandListImmediate& RHICmdList)
        		{ FEMSceneProxy->SetSectionVisibility_RenderThread(SectionIndex, bNewVisibility); });
        }
    }
}

void UFEMFXMeshComponent::UpdateLocalBounds()
{
	if (!IsValid(FEMMesh))
		return;

    FBox LocalBox(ForceInit);

    for (const FFEMFXMeshSection& Section : FEMMesh->GetImportedResource()->GetMeshSections())
    {
        LocalBox += Section.SectionLocalBox;
    }

    LocalBounds = LocalBox.IsValid ? FBoxSphereBounds(LocalBox) : FBoxSphereBounds(FVector(0, 0, 0), FVector(0, 0, 0), 0); // fallback to reset box sphere bounds
    
    LocalBounds = FBoxSphereBounds(FVector(0, 0, 0), FVector(1e3f, 1e3f, 1e3f), 1e3f);

    // Update global bounds
    UpdateBounds();
	
    // Need to send to render thread
    MarkRenderTransformDirty();
}

FFEMFXMeshSceneProxy* UFEMFXMeshComponent::CreateSceneProxy()
{
    //SCOPE_CYCLE_COUNTER(STAT_FEMFXMesh_CreateSceneProxy);

    return new FFEMFXMeshSceneProxy(this);
}

int32 UFEMFXMeshComponent::GetNumMaterials() const
{
	return RenderMaterials.Num();
}

UMaterialInterface* UFEMFXMeshComponent::GetMaterial(int32 ElementIndex) const
{
	UMaterialInterface* Mat = nullptr;
	if (RenderMaterials.IsValidIndex(ElementIndex))
	{
		Mat = RenderMaterials[ElementIndex];
	}
	if(OverrideMaterials.IsValidIndex(ElementIndex))
	{
		if (OverrideMaterials[ElementIndex] != nullptr)
			Mat = OverrideMaterials[ElementIndex];
	}
	
	return Mat;
}

void UFEMFXMeshComponent::SetMaterial(int32 ElementIndex, UMaterialInterface* Material)
{
	if (ElementIndex >= 0)
	{
		if (RenderMaterials.IsValidIndex(ElementIndex) && (RenderMaterials[ElementIndex] == Material))
		{
			// Do nothing, the material is already set
		}
		else
		{
			// Grow the array if the new index is too large
			if (RenderMaterials.Num() <= ElementIndex)
			{
				RenderMaterials.AddZeroed(ElementIndex + 1 - RenderMaterials.Num());
			}

			if (Material != nullptr)
			{
				UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(Material);
				if ((DynamicMaterial != nullptr && DynamicMaterial->Parent != RenderMaterials[ElementIndex]) || RenderMaterials[ElementIndex] == nullptr)
				{
					// Mark cached material parameter names dirty
					MarkCachedMaterialParameterNameIndicesDirty();
				}
			}

			// Set the material and invalidate things
			RenderMaterials[ElementIndex] = Material;
			MarkRenderStateDirty();
			if (Material)
			{
				Material->AddToCluster(this, true);
			}
		}
	}
}

void UFEMFXMeshComponent::SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material)
{
	Super::SetMaterialByName(MaterialSlotName, Material);
}

void UFEMFXMeshComponent::GetUsedMaterials(TArray<UMaterialInterface*>& OutMaterials, bool bGetDebugMaterials) const
{
	Super::GetUsedMaterials(OutMaterials, bGetDebugMaterials);

	for (int32 ElementIndex = 0; ElementIndex < GetNumMaterials(); ElementIndex++)
	{
		if (UMaterialInterface* MaterialInterface = GetMaterial(ElementIndex))
		{
			OutMaterials.Add(MaterialInterface);
		}
	}

	// Add the potential UMeshComponent::OverrideMaterials aswell
	for (int32 ElementIndex = 0; ElementIndex < OverrideMaterials.Num(); ElementIndex++)
	{
		if (UMaterialInterface* MaterialInterface = OverrideMaterials[ElementIndex])
		{
			OutMaterials.Add(MaterialInterface);
		}
	}
}

FBoxSphereBounds UFEMFXMeshComponent::CalcBounds(const FTransform& LocalToWorld) const
{
	FBoxSphereBounds Ret;

	FBox temp;
	temp.Max = FVector(10, 10, 10);
	temp.Min = FVector(0, 0, 0);
	temp.IsValid = 1;

	Ret = FBoxSphereBounds(temp);

	if (IsValid(this)) //&& !IsPendingKill())
	{
		if (TetMeshBuffer)
		{
			FBox FEMMeshBox;
            AMD::FmVector3 firstPos = AMD::FmGetVertPosition(*AMD::FmGetTetMesh(*TetMeshBuffer, 0), 0);
			FEMMeshBox.Min = FEMMeshBox.Max = FVector3d(ConvertFEMFXVectorToUnreal(firstPos));
			FEMMeshBox.IsValid = 1;

			// Iterate over sub-meshes of the tet mesh buffer to add all vertices
			int32 VertexOffset = 0;

            AMD::uint NumTetMeshes = FmGetNumTetMeshes(*TetMeshBuffer);

			for (AMD::uint meshIdx = 0; meshIdx < NumTetMeshes; meshIdx++)
			{
				AMD::FmTetMesh& tetMesh = *AMD::FmGetTetMesh(*TetMeshBuffer, meshIdx);

				AMD::uint numVerts = FmGetNumVerts(tetMesh);
				for (AMD::uint vIdx = 0; vIdx < numVerts; vIdx++)
				{
					FVector3f pos = ConvertFEMFXVectorToUnreal(AMD::FmGetVertPosition(tetMesh, vIdx)) * 100;

					FEMMeshBox += FVector3d(pos);

					VertexOffset++;
				}
			}

			Ret = FEMMeshBox;

		}
		else if (FEMMesh)
		{
			Ret = FEMMesh->UpdateBounds().TransformBy(LocalToWorld);
		}
	}

    Ret.BoxExtent *= BoundsScale;
    Ret.SphereRadius *= BoundsScale;

    return Ret;
}

// void UFEMFXMeshComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
// {
// 	
// 	/*if (IsValid(Scene))
// 	{
// 		Scene->FreeComponent(this);
// 	}*/
//
// 	/*if (RestPositions)
// 		delete[] RestPositions;
// 	if (TetVertIds)
// 		delete[] TetVertIds;
// 	if(BvHierarchy)
// 		delete[] BvHierarchy;*/
//
// }

void UFEMFXMeshComponent::UpdateCollision()
{
    //bool bCreatePhysState = false;
}

void UFEMFXMeshComponent::SetTetKinematic(int TetId, bool IsKinematic, bool IsRemovable, FVector KinematicVelocity)
{
	if ((int)FmGetNumTets(*GetTetMeshPtr()) <= TetId) return;

	const AMD::FmTetVertIds TetVerts = FmGetTetVertIds(*GetTetMeshPtr(), TetId);

    FmAddTetFlags(GetTetMeshPtr(), TetId, FM_TET_FLAG_KINEMATIC);

	for (int i = 0; i < 4; ++i)
	{
		if (IsKinematic)
			FmAddVertFlags(GetTetMeshPtr(), TetVerts.ids[i], FM_VERT_FLAG_KINEMATIC);
		else
			FmRemoveVertFlags(GetTetMeshPtr(), TetVerts.ids[i], FM_VERT_FLAG_KINEMATIC);

		if (IsRemovable)
			FmAddVertFlags(GetTetMeshPtr(), TetVerts.ids[i], FM_VERT_FLAG_KINEMATIC_REMOVABLE);
		else
			FmRemoveVertFlags(GetTetMeshPtr(), TetVerts.ids[i], FM_VERT_FLAG_KINEMATIC_REMOVABLE);

        FmSetVertVelocity(nullptr, GetTetMeshPtr(), TetVerts.ids[i], AMD::FmInitVector3(KinematicVelocity.X, KinematicVelocity.Y, KinematicVelocity.Z));
	}
}