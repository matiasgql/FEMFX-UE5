// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

/*=============================================================================
FEMFXVertexFactory.cpp: Local vertex factory implementation
=============================================================================*/

#include "FEMFXRender.h"
#include "SceneView.h"
#include "SceneUtils.h"
#include "MeshBatch.h"
#include "ShaderParameterUtils.h"
#include "Rendering/ColorVertexBuffer.h"
#include "IFEM.h"

void FFEMFXMeshVertexFactoryShaderParameters::Bind(const FShaderParameterMap& ParameterMap)
{
    TetMeshVertexPosBufferParameter.Bind(ParameterMap, TEXT("TetMeshVertexPosBuffer"));
    TetMeshVertexRotBufferParameter.Bind(ParameterMap, TEXT("TetMeshVertexRotBuffer"));
	TetMeshDeformationBufferParameter.Bind(ParameterMap, TEXT("TetMeshDeformationBuffer"));
    TetVertexIdBufferParameter.Bind(ParameterMap, TEXT("TetVertexIdBuffer"));
    BarycentricPosIdBufferParameter.Bind(ParameterMap, TEXT("BarycentricPosIdBuffer"));
    BarycentricPosBufferParameter.Bind(ParameterMap, TEXT("BarycentricPosBuffer"));
}

void FFEMFXMeshVertexFactoryShaderParameters::SetMesh(FRHICommandList& RHICmdList, TShaderRefBase<FGlobalShaderType, FPointerTableBase>* Shader, const FVertexFactory* VertexFactory, const FSceneView& View, const FMeshBatchElement& BatchElement, uint32 DataFlags) const
{
	SCOPED_DRAW_EVENT(RHICmdList, FEMRender)

    if (BatchElement.bUserDataIsColorVertexBuffer)
    {
        FColorVertexBuffer* OverrideColorVertexBuffer = (FColorVertexBuffer*)BatchElement.UserData;
        check(OverrideColorVertexBuffer);
        static_cast<const FFEMFXMeshVertexFactory*>(VertexFactory)->SetColorOverrideStream(RHICmdList, OverrideColorVertexBuffer);
    }
    else
    {
        FFEMFXMeshBatchElementParams* BatchElementParams = (FFEMFXMeshBatchElementParams*)BatchElement.UserData;
        check(BatchElementParams);

        FShaderResourceViewRHIRef TetMeshVertexPosBufferSRV = BatchElementParams->TetMeshVertexPosBufferSRV;
        FShaderResourceViewRHIRef TetMeshVertexRotBufferSRV = BatchElementParams->TetMeshVertexRotBufferSRV;
		FShaderResourceViewRHIRef TetMeshDeformationBufferSRV = BatchElementParams->TetMeshDeformationBufferSRV;
        FShaderResourceViewRHIRef TetVertexIdBufferSRV = BatchElementParams->TetVertexIdBufferSRV;
        FShaderResourceViewRHIRef BarycentricPosIdBufferSRV = BatchElementParams->BarycentricPosIdBufferSRV;
        FShaderResourceViewRHIRef BarycentricPosBufferSRV = BatchElementParams->BarycentricPosBufferSRV;
        
        FRHIBatchedShaderParameters BatchedShaderParams;
        
        if (TetMeshVertexPosBufferParameter.IsBound() && TetMeshVertexPosBufferSRV)
        {
            if (Shader->GetShader()->GetFrequency() == SF_Vertex)
            {
                SetSRVParameter(
                    BatchedShaderParams,
                    TetMeshVertexPosBufferParameter,
                    TetMeshVertexPosBufferSRV);
            }
        }
        if (TetMeshVertexRotBufferParameter.IsBound() && TetMeshVertexRotBufferSRV)
        {
            if (Shader->GetShader()->GetFrequency() == SF_Vertex)
            {
                SetSRVParameter(
                    BatchedShaderParams,
                    TetMeshVertexRotBufferParameter,
                    TetMeshVertexRotBufferSRV);
            }
        }
		if (TetMeshDeformationBufferParameter.IsBound() && TetMeshDeformationBufferSRV)
		{
			if (Shader->GetShader()->GetFrequency() == SF_Vertex)
			{
			    SetSRVParameter(
                    BatchedShaderParams,
					TetMeshDeformationBufferParameter,
					TetMeshDeformationBufferSRV);
			}
		}
        if (TetVertexIdBufferParameter.IsBound() && TetVertexIdBufferSRV)
        {
            if (Shader->GetShader()->GetFrequency() == SF_Vertex)
            {
                SetSRVParameter(
                    BatchedShaderParams,
                    TetVertexIdBufferParameter,
                    TetVertexIdBufferSRV);
            }
        }
        if (BarycentricPosIdBufferParameter.IsBound() && BarycentricPosIdBufferSRV)
        {
            if (Shader->GetShader()->GetFrequency() == SF_Vertex)
            {
                SetSRVParameter(
                    BatchedShaderParams,
                    BarycentricPosIdBufferParameter,
                    BarycentricPosIdBufferSRV);
            }
        }
        if (BarycentricPosBufferParameter.IsBound() && BarycentricPosBufferSRV)
        {
            if (Shader->GetShader()->GetFrequency() == SF_Vertex)
            {
                SetSRVParameter(
                    BatchedShaderParams,
                    BarycentricPosBufferParameter,
                    BarycentricPosBufferSRV);
            }
        }
    }
}

/**
* Should we cache the material's shadertype on this platform with this vertex factory?
*/
bool FFEMFXMeshVertexFactory::ShouldCache(EShaderPlatform Platform, const class FMaterial* Material, const class FShaderType* ShaderType)
{
    return true;
}

void FFEMFXMeshVertexFactory::SetData(const FDataType& InData)
{
    check(IsInRenderingThread());

    // The shader code makes assumptions that the color component is a FColor, performing swizzles on ES2 and Metal platforms as necessary
    // If the color is sent down as anything other than VET_Color then you'll get an undesired swizzle on those platforms
    check((InData.ColorComponent.Type == VET_None) || (InData.ColorComponent.Type == VET_Color));

    Data = InData;
    UpdateRHI(GetCommandList());
}

/**
* Copy the data from another vertex factory
* @param Other - factory to copy from
*/
void FFEMFXMeshVertexFactory::Copy(const FFEMFXMeshVertexFactory& Other)
{
    FFEMFXMeshVertexFactory* VertexFactory = this;
    const FDataType* DataCopy = &Other.Data;
    ENQUEUE_RENDER_COMMAND(FFEMFXMeshVertexFactoryCopyData)(
        [VertexFactory, DataCopy](FRHICommandListImmediate& RHICmdList)
    {
        VertexFactory->Data = *DataCopy;
    });
    BeginUpdateResourceRHI(this);
}

void FFEMFXMeshVertexFactory::InitRHI(FRHICommandListBase& RHICmdList)
{
    // If the vertex buffer containing position is not the same vertex buffer containing the rest of the data,
    // then initialize PositionStream and PositionDeclaration.
    if (true)//Data.PositionComponent.VertexBuffer != Data.TangentBasisComponents[0].VertexBuffer)
    {
        FVertexDeclarationElementList PositionOnlyStreamElements;
        PositionOnlyStreamElements.Add(AccessStreamComponent(Data.PositionComponent, 0));
        PositionOnlyStreamElements.Add(AccessStreamComponent(Data.BaryPosOffsetIdComponent, 16));
        PositionOnlyStreamElements.Add(AccessStreamComponent(Data.BaryPosBaseIdComponent, 17));

        InitDeclaration(PositionOnlyStreamElements);
    }

    FVertexDeclarationElementList Elements;
    if (Data.PositionComponent.VertexBuffer != NULL)
    {
        Elements.Add(AccessStreamComponent(Data.PositionComponent, 0));
    }

    // only tangent,normal are used by the stream. the binormal is derived in the shader
    uint8 TangentBasisAttributes[2] = { 1, 2 };
    for (int32 AxisIndex = 0; AxisIndex < 2; AxisIndex++)
    {
        if (Data.TangentBasisComponents[AxisIndex].VertexBuffer != NULL)
        {
            Elements.Add(AccessStreamComponent(Data.TangentBasisComponents[AxisIndex], TangentBasisAttributes[AxisIndex]));
        }
    }

    if (Data.ColorComponent.VertexBuffer)
    {
        Elements.Add(AccessStreamComponent(Data.ColorComponent, 3));
    }
    else
    {
        //If the mesh has no color component, set the null color buffer on a new stream with a stride of 0.
        //This wastes 4 bytes of bandwidth per vertex, but prevents having to compile out twice the number of vertex factories.
        FVertexStreamComponent NullColorComponent(&GNullColorVertexBuffer, 0, 0, VET_Color);
        Elements.Add(AccessStreamComponent(NullColorComponent, 3));
    }
    ColorStreamIndex = Elements.Last().StreamIndex;

    if (Data.TextureCoordinates.Num())
    {
        const int32 BaseTexCoordAttribute = 4;
        for (int32 CoordinateIndex = 0; CoordinateIndex < Data.TextureCoordinates.Num(); CoordinateIndex++)
        {
            Elements.Add(AccessStreamComponent(
                Data.TextureCoordinates[CoordinateIndex],
                BaseTexCoordAttribute + CoordinateIndex
            ));
        }

        for (int32 CoordinateIndex = Data.TextureCoordinates.Num(); CoordinateIndex < MAX_STATIC_TEXCOORDS / 2; CoordinateIndex++)
        {
            Elements.Add(AccessStreamComponent(
                Data.TextureCoordinates[Data.TextureCoordinates.Num() - 1],
                BaseTexCoordAttribute + CoordinateIndex
            ));
        }
    }

    if (Data.LightMapCoordinateComponent.VertexBuffer)
    {
        Elements.Add(AccessStreamComponent(Data.LightMapCoordinateComponent, 15));
    }
    else if (Data.TextureCoordinates.Num())
    {
        Elements.Add(AccessStreamComponent(Data.TextureCoordinates[0], 15));
    }

    if (Data.BaryPosOffsetIdComponent.VertexBuffer)
    {
        Elements.Add(AccessStreamComponent(Data.BaryPosOffsetIdComponent, 16));
    }

    if (Data.BaryPosBaseIdComponent.VertexBuffer)
    {
        Elements.Add(AccessStreamComponent(Data.BaryPosBaseIdComponent, 17));
    }

    check(Streams.Num() > 0);

    InitDeclaration(Elements);

    check(IsValidRef(GetDeclaration()));
}

FVertexFactoryShaderParameters* FFEMFXMeshVertexFactory::ConstructShaderParameters(EShaderFrequency ShaderFrequency)
{
    if (ShaderFrequency == SF_Vertex)
    {
        return new FFEMFXMeshVertexFactoryShaderParameters();
    }

    return NULL;
}

// Implement vertex factory, proving shader file and options.
IMPLEMENT_VERTEX_FACTORY_TYPE(FFEMFXMeshVertexFactory, "/Shaders/FEMFXMeshVertexFactory.ush", EVertexFactoryFlags::None);
