// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FEMMeshTypes.h"
#include "VertexFactory.h"
#include "LocalVertexFactory.h"

class FMaterial;
class FSceneView;
struct FMeshBatchElement;

/*=============================================================================
	LocalVertexFactory.h: Local vertex factory definitions.
=============================================================================*/


BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FFEMFXMeshVertexFactoryUniformShaderParameters, FEM_API)
	SHADER_PARAMETER(FIntVector4,VertexFetch_Parameters)
	SHADER_PARAMETER(uint32,LODLightmapDataIndex)
	SHADER_PARAMETER_SRV(Buffer<float2>, VertexFetch_TexCoordBuffer)
	SHADER_PARAMETER_SRV(Buffer<float>, VertexFetch_PositionBuffer)
	SHADER_PARAMETER_SRV(Buffer<float4>, VertexFetch_PackedTangentsBuffer)
	SHADER_PARAMETER_SRV(Buffer<float4>, VertexFetch_ColorComponentsBuffer)
END_GLOBAL_SHADER_PARAMETER_STRUCT()

BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FFEMFXMeshVertexFactoryLooseParameters, FEM_API)
	SHADER_PARAMETER(uint32, FrameNumber)
END_GLOBAL_SHADER_PARAMETER_STRUCT()

// Grouping of structured buffer resource and SRV with support for CPU updates (on render thread).
template<class Element>
class FStructuredBufferAndSRV
{
public:
    FBufferRHIRef StructuredBufferRHI;
    FShaderResourceViewRHIRef SRV;
    int32 NumElements;

    FStructuredBufferAndSRV() : NumElements(0) {}
    ~FStructuredBufferAndSRV() { Release(); }

    void Init_RenderThread(FRHICommandListBase& RHICmdList, int32 InNumElements)
    {
        check(IsInRenderingThread());

        if (InNumElements == 0)
            return;

        // StructuredBufferRHI.SafeRelease();
        // SRV.SafeRelease();

        NumElements = InNumElements;
        int32 Size = sizeof(Element) * NumElements;

        FRHIResourceCreateInfo CreateInfo(UTF8_TO_TCHAR("StructuredBuffer"));
        StructuredBufferRHI = RHICmdList.CreateStructuredBuffer(sizeof(Element), Size, BUF_Dynamic | BUF_ShaderResource, CreateInfo);
        SRV = RHICmdList.CreateShaderResourceView(StructuredBufferRHI);
    }

    // Init RHI buffer with given number of elements.  If not called from rendering thread enqueues call to Init_RenderThread.
    void Init(int32 InNumElements)
    {
        ENQUEUE_RENDER_COMMAND(InitCommand)
        ([InNumElements, this](FRHICommandListImmediate& RHICmdList) { this->Init_RenderThread(RHICmdList, InNumElements); });
    }

    void Init_RenderThread(FRHICommandListBase& RHICmdList, const TArray<Element>& SrcBuffer)
    {
        check(IsInRenderingThread());

        NumElements = SrcBuffer.Num();

        if (NumElements == 0)
        {
            return;
        }

        int32 Size = sizeof(Element) * NumElements;

        StructuredBufferRHI.SafeRelease();
        SRV.SafeRelease();

        FRHIResourceCreateInfo CreateInfo(UTF8_TO_TCHAR("StructuredBuffer"));
        StructuredBufferRHI = RHICmdList.CreateStructuredBuffer(sizeof(Element), Size, BUF_Dynamic | BUF_ShaderResource, CreateInfo);
        void* DstBuffer = RHICmdList.LockBuffer(StructuredBufferRHI, 0, Size, RLM_WriteOnly);
        FMemory::Memcpy(DstBuffer, SrcBuffer.GetData(), Size);
        RHICmdList.UnlockBuffer(StructuredBufferRHI);

        SRV = RHICmdList.CreateShaderResourceView(StructuredBufferRHI);
    }

    // Init RHI buffer with array data.  If not called from rendering thread copies source data and enqueues call to Init_RenderThread.
    void Init(const TArray<Element>& SrcBuffer)
    {
        ENQUEUE_RENDER_COMMAND(InitCommand)
        ([SrcBuffer, this](FRHICommandListImmediate& RHICmdList) { this->Init_RenderThread(RHICmdList, SrcBuffer); });
    }

    void Update_RenderThread(FRHICommandListBase& RHICmdList, const TArray<Element>& SrcBuffer)
    {
        check(IsInRenderingThread());
        if (SrcBuffer.Num() > NumElements)
        {
            return;
        }

        int32 Size = sizeof(Element) * SrcBuffer.Num();
        void* DstBuffer = RHICmdList.LockBuffer(StructuredBufferRHI, 0, Size, RLM_WriteOnly);
        FMemory::Memcpy(DstBuffer, SrcBuffer.GetData(), Size);
        RHICmdList.UnlockBuffer(StructuredBufferRHI);
    }

    // Update RHI buffer.  If not called from rendering thread copies source data and enqueues call to Update_RenderThread.
    void Update(const TArray<Element>& SrcBuffer)
    {
        ENQUEUE_RENDER_COMMAND(UpdateCommand)
        ([SrcBuffer, this](FRHICommandListImmediate& RHICmdList) { this->Update_RenderThread(RHICmdList, SrcBuffer); });
    }

    void Release()
    {
        StructuredBufferRHI.SafeRelease();
        SRV.SafeRelease();
        NumElements = 0;
    }
};

extern TUniformBufferRef<FFEMFXMeshVertexFactoryUniformShaderParameters> CreateLocalVFUniformBuffer(
	const class FFEMFXMeshVertexFactory* VertexFactory, 
	uint32 LODLightmapDataIndex, 
	class FColorVertexBuffer* OverrideColorVertexBuffer, 
	int32 BaseVertexIndex,
	int32 PreSkinBaseVertexIndex
	);


// User data for vertex shader.   Includes the structured buffer SRVs to support deformation of render mesh by tet mesh.
struct FFEMFXMeshBatchElementParams
{
	FFEMFXMeshBatchElementParams() {  }

	// Tet mesh vertex positions
	FShaderResourceViewRHIRef TetMeshVertexPosBufferSRV;

	// Tet mesh vertex rotations
	FShaderResourceViewRHIRef TetMeshVertexRotBufferSRV;

	// Tet mesh deformation values
	FShaderResourceViewRHIRef TetMeshDeformationBufferSRV;

	// Tet vertex indices
	FShaderResourceViewRHIRef TetVertexIdBufferSRV;

	// Ids for each render mesh vertex indexing into barycentric position buffer.
	FShaderResourceViewRHIRef BarycentricPosIdBufferSRV;

	// Buffer of tet barycentric coordinates.  May contain several coordinates for each vertex to support a change in tet assignments after fracture.
	FShaderResourceViewRHIRef BarycentricPosBufferSRV;
};

/**
 * A vertex factory which simply transforms explicit vertex attributes from local to world space.
 */
class FFEMFXMeshVertexFactory : public FVertexFactory
{
	DECLARE_VERTEX_FACTORY_TYPE(FFEMFXMeshVertexFactory);
	
public:

	FFEMFXMeshVertexFactory(ERHIFeatureLevel::Type InFeatureLevel, const char* InDebugName)
		: FVertexFactory(InFeatureLevel)
		, ColorStreamIndex(INDEX_NONE)
		, DebugName(InDebugName)
	{
	}

	struct FDataType : public FStaticMeshDataType
	{
		/** The stream to read the vertex position from. */
		FVertexStreamComponent PositionComponent;

		/** The streams to read the tangent basis from. */
		FVertexStreamComponent TangentBasisComponents[2];

		/** The streams to read the texture coordinates from. */
		TArray<FVertexStreamComponent, TFixedAllocator<MAX_STATIC_TEXCOORDS / 2> > TextureCoordinates;

		/** The stream to read the shadow map texture coordinates from. */
		FVertexStreamComponent LightMapCoordinateComponent;

		/** The stream to read the vertex color from. */
		FVertexStreamComponent ColorComponent;

		/** The stream to read the shard vertex id from. */
		FVertexStreamComponent BaryPosOffsetIdComponent;

		/** The stream to read the barycentric position base id from. */
		FVertexStreamComponent BaryPosBaseIdComponent;
		
	#if WITH_EDITORONLY_DATA
		const class UStaticMesh* StaticMesh = nullptr;
		bool bIsCoarseProxy = false;
	#endif
	};

	/**
	 * Should we cache the material's shadertype on this platform with this vertex factory? 
	 */
	static bool ShouldCompilePermutation(const FVertexFactoryShaderPermutationParameters& Parameters);
	static void ModifyCompilationEnvironment(const FVertexFactoryShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment);
	static void ValidateCompiledResult(const FVertexFactoryType* Type, EShaderPlatform Platform, const FShaderParameterMap& ParameterMap, TArray<FString>& OutErrors);

	static void GetPSOPrecacheVertexFetchElements(EVertexInputStreamType VertexInputStreamType, FVertexDeclarationElementList& Elements);
	static void GetVertexElements(ERHIFeatureLevel::Type FeatureLevel, EVertexInputStreamType InputStreamType, bool bSupportsManualVertexFetch, FDataType& Data, FVertexDeclarationElementList& Elements);

	/** 
	 * Does the platform support GPUSkinPassthrough permutations.
	 * This knowledge can be used to indicate if we need to create SRV for index/vertex buffers.
	 */
	static bool IsGPUSkinPassThroughSupported(EShaderPlatform Platform);

	/** Init function that should only be called on render thread. */
	void Init_RenderThread(const FFEMFXMeshVertexBuffer* VertexBuffer)
	{
		check(IsInRenderingThread());

		// Initialize the vertex factory's stream components.
		FDataType NewData;
		NewData.PositionComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, Position, VET_Float3);
		UE_LOG(LogTemp, Warning, TEXT("VertexBuffer Position: %s"), *VertexBuffer->Vertices[0].Position.ToString());
		NewData.TextureCoordinates.Add(
			FVertexStreamComponent(VertexBuffer, STRUCT_OFFSET(FFEMFXMeshRenderVertex, TextureCoordinate), sizeof(FFEMFXMeshRenderVertex), VET_Float2)
		);
		NewData.TangentBasisComponents[0] = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, TangentX, VET_PackedNormal);
		NewData.TangentBasisComponents[1] = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, TangentZ, VET_PackedNormal);
		NewData.ColorComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, Color, VET_Color);
		NewData.BaryPosOffsetIdComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, ShardId, VET_Float1);
		NewData.BaryPosBaseIdComponent = STRUCTMEMBER_VERTEXSTREAMCOMPONENT(VertexBuffer, FFEMFXMeshRenderVertex, BaryPosBaseId, VET_Float1);
		SetData(NewData);
	}

	/** Init function that can be called on any thread, and will do the right thing (enqueue command if called on main thread) */
	void Init(const FFEMFXMeshVertexBuffer* VertexBuffer)
	{
		if (IsInRenderingThread())
		{
			Init_RenderThread(VertexBuffer);
		}
		else
		{
			ENQUEUE_RENDER_COMMAND(InitFEMFXMeshVertexFactory)
			([VertexBuffer, this](FRHICommandListImmediate& RHICmdList) { this->Init_RenderThread(VertexBuffer); });
		}
	}
	
	/**
	 * An implementation of the interface used by TSynchronizedResource to update the resource with new data from the game thread.
	 */
	void SetData(const FDataType& InData);

	/**
	* Copy the data from another vertex factory
	* @param Other - factory to copy from
	*/
	void Copy(const FFEMFXMeshVertexFactory& Other);

	// FRenderResource interface.
	virtual void InitRHI(FRHICommandListBase& RHICmdList) override;
	
	virtual void ReleaseRHI() override
	{
		UniformBuffer.SafeRelease();
		LooseParametersUniformBuffer.SafeRelease();
		FVertexFactory::ReleaseRHI();
	}

	FORCEINLINE_DEBUGGABLE void SetColorOverrideStream(FRHICommandList& RHICmdList, const FVertexBuffer* ColorVertexBuffer) const
	{
		checkf(ColorVertexBuffer->IsInitialized(), TEXT("Color Vertex buffer was not initialized! Name %s"), *ColorVertexBuffer->GetFriendlyName());
		checkf(IsInitialized() && EnumHasAnyFlags(EVertexStreamUsage::Overridden, Data.ColorComponent.VertexStreamUsage) && ColorStreamIndex > 0, TEXT("Per-mesh colors with bad stream setup! Name %s"), *ColorVertexBuffer->GetFriendlyName());
		RHICmdList.SetStreamSource(ColorStreamIndex, ColorVertexBuffer->VertexBufferRHI, 0);
	}

	void GetColorOverrideStream(const FVertexBuffer* ColorVertexBuffer, FVertexInputStreamArray& VertexStreams) const
	{
		checkf(ColorVertexBuffer->IsInitialized(), TEXT("Color Vertex buffer was not initialized! Name %s"), *ColorVertexBuffer->GetFriendlyName());
		checkf(IsInitialized() && EnumHasAnyFlags(EVertexStreamUsage::Overridden, Data.ColorComponent.VertexStreamUsage) && ColorStreamIndex > 0, TEXT("Per-mesh colors with bad stream setup! Name %s"), *ColorVertexBuffer->GetFriendlyName());

		VertexStreams.Add(FVertexInputStream(ColorStreamIndex, 0, ColorVertexBuffer->VertexBufferRHI));
	}

	inline FRHIShaderResourceView* GetPositionsSRV() const
	{
		return Data.PositionComponentSRV;
	}

	inline FRHIShaderResourceView* GetTangentsSRV() const
	{
		return Data.TangentsSRV;
	}

	inline FRHIShaderResourceView* GetTextureCoordinatesSRV() const
	{
		return Data.TextureCoordinatesSRV;
	}

	inline FRHIShaderResourceView* GetColorComponentsSRV() const
	{
		return Data.ColorComponentsSRV;
	}

	inline const uint32 GetColorIndexMask() const
	{
		return Data.ColorIndexMask;
	}

	inline const int GetLightMapCoordinateIndex() const
	{
		return Data.LightMapCoordinateIndex;
	}

	inline const int GetNumTexcoords() const
	{
		return Data.NumTexCoords;
	}

	FRHIUniformBuffer* GetUniformBuffer() const
	{
		return UniformBuffer.GetReference();
	}

#if WITH_EDITORONLY_DATA
	virtual bool IsCoarseProxyMesh() const override { return Data.bIsCoarseProxy; }

	inline const class UStaticMesh* GetStaticMesh() const { return Data.StaticMesh; }
#endif

protected:
	FDataType Data;
	friend class FFEMFXMeshVertexFactoryShaderParameters;
	friend class FSkeletalMeshSceneProxy;

	const FDataType& GetData() const { return Data; }
	
	static void GetVertexElements(
		ERHIFeatureLevel::Type FeatureLevel, 
		EVertexInputStreamType InputStreamType, 
		bool bSupportsManualVertexFetch,
		FDataType& Data, 
		FVertexDeclarationElementList& Elements, 
		FVertexStreamList& InOutStreams, 
		int32& OutColorStreamIndex);

	TUniformBufferRef<FFEMFXMeshVertexFactoryUniformShaderParameters> UniformBuffer;
	TUniformBufferRef<FFEMFXMeshVertexFactoryLooseParameters> LooseParametersUniformBuffer;

	int32 ColorStreamIndex;

	bool bGPUSkinPassThrough = false;

	struct FDebugName
	{
		FDebugName(const char* InDebugName)
#if !UE_BUILD_SHIPPING
			: DebugName(InDebugName)
#endif
		{}
	private:
#if !UE_BUILD_SHIPPING
		const char* DebugName;
#endif
	} DebugName;
};


/**
 * Shader parameters for all LocalVertexFactory derived classes.
 */
class FFEMFXMeshVertexFactoryShaderParameters : public FVertexFactoryShaderParameters
{
	DECLARE_TYPE_LAYOUT(FFEMFXMeshVertexFactoryShaderParameters, NonVirtual);
public:
	void Bind(const FShaderParameterMap& ParameterMap);

	void GetElementShaderBindingsBase(
		const class FSceneInterface* Scene,
		const FSceneView* View,
		const FMeshMaterialShader* Shader,
		const EVertexInputStreamType InputStreamType,
		ERHIFeatureLevel::Type FeatureLevel,
		const FVertexFactory* VertexFactory,
		const FMeshBatchElement& BatchElement,
		FRHIUniformBuffer* VertexFactoryUniformBuffer,
		FMeshDrawSingleShaderBindings& ShaderBindings,
		FVertexInputStreamArray& VertexStreams
		) const;
	
	FFEMFXMeshVertexFactoryShaderParameters()
		: bAnySpeedTreeParamIsBound(false)
	{
	}

	// SpeedTree LOD parameter
	LAYOUT_FIELD(FShaderParameter, LODParameter);

	// True if LODParameter is bound, which puts us on the slow path in GetElementShaderBindings
	LAYOUT_FIELD(bool, bAnySpeedTreeParamIsBound);
};

