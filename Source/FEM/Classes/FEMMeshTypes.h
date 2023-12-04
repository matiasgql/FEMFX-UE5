//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "CoreMinimal.h"
#include "RenderResource.h"
#include "RenderResource.h"
#include "PackedNormal.h"
#include "RenderUtils.h"

#include "FEMMeshTypes.generated.h"

// Render indices for the interior faces that will be exposed on fracture of each of the four tet faces
USTRUCT(BlueprintType)
struct FFEMFXTetFractureNewRenderFaces
{
	GENERATED_BODY()

private:
	
	UPROPERTY()
	TArray<int32> Indices0;
	UPROPERTY()
	TArray<int32> Indices1;
	UPROPERTY()
	TArray<int32> Indices2;
	UPROPERTY()
	TArray<int32> Indices3;

public:

	TArray<int32> GetIndices(int idx) const
	{
		TArray<int32> OutIndices;
		// ReSharper disable once CppDefaultCaseNotHandledInSwitchStatement
		switch (idx)
		{
			case 0:
				OutIndices = Indices0;
				break;
			case 1:
				OutIndices = Indices1;
				break;
			case 2:
				OutIndices = Indices2;
				break;
			case 3:
				OutIndices = Indices3;
				break;
		}
		return OutIndices;
	}

	void GetIndicesRef(int idx, TArray<int32>*& OutIndices)
	{ 
		// ReSharper disable once CppDefaultCaseNotHandledInSwitchStatement
		switch (idx)
		{
			case 0:
				OutIndices = &Indices0;
				break;
			case 1:
				OutIndices = &Indices1;
				break;
			case 2:
				OutIndices = &Indices2;
				break;
			case 3:
				OutIndices = &Indices3;
				break;
		}
	}

};

// Indices of tetrahedron's vertices
USTRUCT(BlueprintType)
struct FFEMFXMeshTetVertexIds
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int32 Id0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int32 Id1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int32 Id2;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int32 Id3;

};

// Tet rotation matrix
USTRUCT(BlueprintType)
struct FFEMFXMeshTetRotation
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector3f Col0;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector3f Col1;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
		FVector3f Col2;
};

/**
*	Struct used to specify a tangent vector for a vertex
*	The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.
*/
USTRUCT(BlueprintType)
struct FFEMFXMeshTangent
{
	GENERATED_USTRUCT_BODY()

		/** Direction of X tangent for this vertex */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tangent)
		FVector TangentX;

	/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tangent)
		bool bFlipTangentY;

	FFEMFXMeshTangent()
		: TangentX(1.f, 0.f, 0.f)
		, bFlipTangentY(false)
	{}

	FFEMFXMeshTangent(float X, float Y, float Z)
		: TangentX(X, Y, Z)
		, bFlipTangentY(false)
	{}

	FFEMFXMeshTangent(FVector InTangentX, bool bInFlipTangentY)
		: TangentX(InTangentX)
		, bFlipTangentY(bInFlipTangentY)
	{}

	void Serialize(FArchive& Ar)
	{
		Ar << TangentX;
		Ar << bFlipTangentY;
	};


};

/** One vertex for the procedural mesh, used for storing data internally */
USTRUCT(BlueprintType)
struct FFEMFXMeshVertex
{
	GENERATED_USTRUCT_BODY()

		/** Vertex position */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector3f Position;

	/** Vertex normal */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
		FVector3f Normal;

	/** Vertex tangent */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
		FFEMFXMeshTangent Tangent;

	/** Vertex color */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
		FColor Color;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2f UV0;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2f UV1;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2f UV2;

	/** Vertex texture co-ordinate */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
	FVector2f UV3;

	/** ShardId */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
		int ShardId; // TODO: rename to BaryPosOffsetId and re-import

    /** BaryPosBaseId */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Vertex)
        int BaryPosBaseId;

    FFEMFXMeshVertex()
		: Position(0.f, 0.f, 0.f)
		, Normal(0.f, 0.f, 1.f)
		, Tangent(FVector(1.f, 0.f, 0.f), false)
		, Color(255, 255, 255)
		, UV0(0.f, 0.f)
		, ShardId(0)
        , BaryPosBaseId(0)
	{}

	void Serialize(FArchive& Ar)
	{
		Ar << Position;
		Ar << Normal;
		Tangent.Serialize(Ar);
		Ar << Color;
		Ar << UV0;
		Ar << ShardId;
        Ar << BaryPosBaseId;
    }
};


// Position specified by id of tetrahedron and barycentric weights of four corners.
USTRUCT(BlueprintType)
struct FFEMFXMeshBarycentricPos
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
		float BarycentricCoord0;
	UPROPERTY()
		float BarycentricCoord1;
	UPROPERTY()
		float BarycentricCoord2;
	UPROPERTY()
		float BarycentricCoord3;
	UPROPERTY()
		int32 TetId;

	void Serialize(FArchive& Ar)
	{
		Ar << BarycentricCoord0 << BarycentricCoord1 << BarycentricCoord2 << BarycentricCoord3;
		Ar << TetId;
	};
};

// Section of FEM mesh sharing the same material.
// This is the source/CPU data copied to RHI resources.
USTRUCT(BlueprintType)
struct FFEMFXMeshSection
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	int MaterialIndex;

	UPROPERTY()
	TArray<int32> BarycentricPosIds; // TODO: rename to BarycentricPosOffsets and re-import

	UPROPERTY()
	TArray<FFEMFXMeshBarycentricPos> BarycentricPositions;

	/** Vertex buffer for this section */
	UPROPERTY()
	TArray<FFEMFXMeshVertex> VertexBuffer;

	/** Index buffer for this section */
	UPROPERTY()
	TArray<int32> IndexBuffer;

	/** Local bounding box of section */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	FBox SectionLocalBox;

	/** Should we build collision data for triangles in this section */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	bool bEnableCollision;

	/** Should we display this section */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FEM")
	bool bSectionVisible;

    FFEMFXMeshSection()
		: MaterialIndex(0)
		, SectionLocalBox(ForceInit)
		, bEnableCollision(false)
		, bSectionVisible(true)
	{}

	/** Reset this section, clear all mesh info. */
	void Reset()
	{
		BarycentricPosIds.Empty();
		BarycentricPositions.Empty();
		VertexBuffer.Empty();
		IndexBuffer.Empty();
		SectionLocalBox.Init();
		bEnableCollision = false;
		bSectionVisible = true;
	}

	//friend FArchive& operator<<(FArchive& Ar, FFEMFXMeshSection& S);
};

struct RenderMeshVertex
{
	int vertexIndex;
	int normalIndex;
	int texcoordIndex;
	float pos[3];
	float nrm[3];
	float tan[3];
	float tex[2];
	float rootPos[3];
};


struct FFEMFXMeshRenderVertex
{
	FFEMFXMeshRenderVertex(const FVector3f& InPosition) :
		Position(InPosition),
		TextureCoordinate(FVector2f::ZeroVector),
		TangentX(FVector3f(1, 0, 0)),
		TangentZ(FVector3f(0, 0, 1)),
		Color(FColor(255, 255, 255)),
		ShardId(0),
        BaryPosBaseId(0)
	{
		// basis determinant default to +1.0
		TangentZ.Vector.W = static_cast<int8>(255);
	}

	FFEMFXMeshRenderVertex(const FVector3f& InPosition, const FVector3f& InTangentX, const FVector3f& InTangentZ, const FVector2f& InTexCoord, const FColor& InColor, int InShardId, int InBaryPosBaseId) :
		Position(InPosition),
		TextureCoordinate(InTexCoord),
		TangentX(InTangentX),
		TangentZ(InTangentZ),
		Color(InColor),
		ShardId(InShardId),
        BaryPosBaseId(InBaryPosBaseId)
	{
		// basis determinant default to +1.0
		TangentZ.Vector.W = static_cast<int8>(255);
	}

	void SetTangents(const FVector& InTangentX, const FVector& InTangentY, const FVector& InTangentZ)
	{
		TangentX = InTangentX;
		TangentZ = InTangentZ;
		// store determinant of basis in w component of normal vector
		TangentZ.Vector.W = GetBasisDeterminantSign(InTangentX, InTangentY, InTangentZ) < 0.0f ? 0 : 255;
	}

	FVector3f GetTangentY()
	{
		FVector3f TanX = TangentX.ToFVector3f();
		FVector3f TanZ = TangentZ.ToFVector3f();

		return (TanZ ^ TanX) * ((float)TangentZ.Vector.W / 127.5f - 1.0f);
	};

	FVector3f Position;
	FVector2f TextureCoordinate;
	FPackedNormal TangentX;
	FPackedNormal TangentZ;
	FColor Color;
	int ShardId;  // TODO: rename to BaryPosOffsetId and re-import
    int BaryPosBaseId;
};

class FFEMFXMeshVertexResourceArray : public FResourceArrayInterface
{
public:
	FFEMFXMeshVertexResourceArray(void* InData, uint32 InSize)
		: Data(InData)
		, Size(InSize)
	{
	}

	virtual const void* GetResourceData() const override { return Data; }
	virtual uint32 GetResourceDataSize() const override { return Size; }
	virtual void Discard() override { }
	virtual bool IsStatic() const override { return false; }
	virtual bool GetAllowCPUAccess() const override { return false; }
	virtual void SetAllowCPUAccess(bool bInNeedsCPUAccess) override { }

private:
	void* Data;
	uint32 Size;
};

class FFEMFXMeshVertexBuffer : public FVertexBuffer
{
public:
	TArray<FFEMFXMeshRenderVertex> Vertices;

	FFEMFXMeshVertexBuffer():
		TangentsData(nullptr),
		TexcoordData(nullptr),
		TangentsDataPtr(nullptr),
		TexcoordDataPtr(nullptr),
		TangentsStride(0),
		TexcoordStride(0),
		NumTexCoords(0),
		NumVertices(0),
		bUseFullPrecisionUVs(false),
		bUseHighPrecisionTangentBasis(false)
	{
	}
	
	~FFEMFXMeshVertexBuffer()
	{
		CleanUp();
	};

	void CleanUp()
	{
		if (TangentsData)
		{
			delete TangentsData;
			TangentsData = nullptr;
		}
		if (TexcoordData)
		{
			delete TexcoordData;
			TexcoordData = nullptr;
		}
	};
	
	virtual void InitRHI(FRHICommandListBase& RHICmdList) //override
	{
		const uint32 SizeInBytes = Vertices.Num() * sizeof(FFEMFXMeshRenderVertex);

		FFEMFXMeshVertexResourceArray ResourceArray(Vertices.GetData(), SizeInBytes);
		FRHIResourceCreateInfo CreateInfo(UTF8_TO_TCHAR("FEMFXMeshVertex"), &ResourceArray);
		VertexBufferRHI = RHICmdList.CreateVertexBuffer(SizeInBytes, BUF_Static, CreateInfo);
	}

	FORCEINLINE_DEBUGGABLE void SetVertexTangents(uint32 VertexIndex, FVector3f X, FVector3f Y, FVector3f Z)
	{
		checkSlow(VertexIndex < GetNumVertices());

		if (GetUseHighPrecisionTangentBasis())
		{
			typedef TStaticMeshVertexTangentDatum<TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::HighPrecision>::TangentTypeT> TangentType;
			TangentType* ElementData = reinterpret_cast<TangentType*>(TangentsDataPtr);
			check((void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize()));
			check((void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr));
			ElementData[VertexIndex].SetTangents(X, Y, Z);
		}
		else
		{
			typedef TStaticMeshVertexTangentDatum<TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::Default>::TangentTypeT> TangentType;
			TangentType* ElementData = reinterpret_cast<TangentType*>(TangentsDataPtr);
			check((void*)((&ElementData[VertexIndex]) + 1) <= (void*)(TangentsDataPtr + TangentsData->GetResourceSize()));
			check((void*)((&ElementData[VertexIndex]) + 0) >= (void*)(TangentsDataPtr));
			ElementData[VertexIndex].SetTangents(X, Y, Z);
		}
	}
	
	/**
	* Set the vertex UV values at the given index in the vertex buffer
	*
	* @param VertexIndex - index into the vertex buffer
	* @param UVIndex - [0,MAX_STATIC_TEXCOORDS] value to index into UVs array
	* @param Vec2D - UV values to set
	* @param bUseBackwardsCompatibleF16TruncUVs - whether backwards compatible Truncate mode is used for F32 to F16 conversion
	*/
	FORCEINLINE_DEBUGGABLE void SetVertexUV(uint32 VertexIndex, uint32 UVIndex, const FVector2f& Vec2D, bool bUseBackwardsCompatibleF16TruncUVs = false)
	{
		checkSlow(VertexIndex < GetNumVertices());
		checkSlow(UVIndex < GetNumTexCoords());

		if (GetUseFullPrecisionUVs())
		{
			size_t UvStride = sizeof(FVector2f) * GetNumTexCoords();

			FVector2f* ElementData = reinterpret_cast<FVector2f*>(TexcoordDataPtr + (VertexIndex * UvStride));
			check((void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize()));
			check((void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr));
			ElementData[UVIndex] = Vec2D;
		}
		else
		{
			size_t UvStride = sizeof(FVector2DHalf) * GetNumTexCoords();

			FVector2DHalf* ElementData = reinterpret_cast<FVector2DHalf*>(TexcoordDataPtr + (VertexIndex * UvStride));
			check((void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize()));
			check((void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr));
		
			if ( bUseBackwardsCompatibleF16TruncUVs )
			{
				ElementData[UVIndex].SetTruncate( Vec2D );
			}
			else
			{
				ElementData[UVIndex] = Vec2D;
			}
		}
	}

	template<EStaticMeshVertexUVType UVTypeT>
	FORCEINLINE_DEBUGGABLE FVector2f GetVertexUV_Typed(uint32 VertexIndex, uint32 UVIndex)const
	{
		typedef TStaticMeshVertexUVsDatum<typename TStaticMeshVertexUVsTypeSelector<UVTypeT>::UVsTypeT> UVType;
		size_t UvStride = sizeof(UVType) * GetNumTexCoords();

		UVType* ElementData = reinterpret_cast<UVType*>(TexcoordDataPtr + (VertexIndex * UvStride));
		check((void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize()));
		check((void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr));
		return ElementData[UVIndex].GetUV();
	}

	/**
	* Set the vertex UV values at the given index in the vertex buffer
	*
	* @param VertexIndex - index into the vertex buffer
	* @param UVIndex - [0,MAX_STATIC_TEXCOORDS] value to index into UVs array
	* @param 2D UV values
	*/
	FORCEINLINE_DEBUGGABLE FVector2f GetVertexUV(uint32 VertexIndex, uint32 UVIndex) const
	{
		checkSlow(VertexIndex < GetNumVertices());
		checkSlow(UVIndex < GetNumTexCoords());

		if (GetUseFullPrecisionUVs())
		{
			return GetVertexUV_Typed<EStaticMeshVertexUVType::HighPrecision>(VertexIndex, UVIndex);
		}
		else
		{
			return GetVertexUV_Typed<EStaticMeshVertexUVType::Default>(VertexIndex, UVIndex);
		}
	}
	
	int GetTangentSize() const
	{
		if (GetUseHighPrecisionTangentBasis())
		{
			typedef TStaticMeshVertexTangentDatum<TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::HighPrecision>::TangentTypeT> TangentType;
			TangentsStride = sizeof(TangentType);
			return TangentsStride * GetNumVertices();
		}
		else
		{
			typedef TStaticMeshVertexTangentDatum<TStaticMeshVertexTangentTypeSelector<EStaticMeshVertexTangentBasisType::Default>::TangentTypeT> TangentType;
			TangentsStride = sizeof(TangentType);
			return TangentsStride * GetNumVertices();
		}
	}

	int GetTexCoordSize() const
	{
		if (GetUseFullPrecisionUVs())
		{
			typedef TStaticMeshVertexUVsDatum<TStaticMeshVertexUVsTypeSelector<EStaticMeshVertexUVType::HighPrecision>::UVsTypeT> UVType;
			TexcoordStride = sizeof(UVType);
			return TexcoordStride * GetNumTexCoords() * GetNumVertices();
		}
		else
		{
			typedef TStaticMeshVertexUVsDatum<TStaticMeshVertexUVsTypeSelector<EStaticMeshVertexUVType::Default>::UVsTypeT> UVType;
			TexcoordStride = sizeof(UVType);
			return TexcoordStride * GetNumTexCoords() * GetNumVertices();
		}
	}
	
	FORCEINLINE_DEBUGGABLE void* GetTangentData() { return TangentsDataPtr; }
	FORCEINLINE_DEBUGGABLE const void* GetTangentData() const { return TangentsDataPtr; }

	FORCEINLINE_DEBUGGABLE void* GetTexCoordData() { return TexcoordDataPtr; }
	FORCEINLINE_DEBUGGABLE const void* GetTexCoordData() const { return TexcoordDataPtr; }
	
	FORCEINLINE_DEBUGGABLE uint32 GetNumVertices() const
	{
		return NumVertices;
	}

	FORCEINLINE_DEBUGGABLE uint32 GetNumTexCoords() const
	{
		return NumTexCoords;
	}

	FORCEINLINE_DEBUGGABLE bool GetUseFullPrecisionUVs() const
	{
		return bUseFullPrecisionUVs;
	}

	FORCEINLINE_DEBUGGABLE void SetUseFullPrecisionUVs(bool UseFull)
	{
		bUseFullPrecisionUVs = UseFull;
	}

	FORCEINLINE_DEBUGGABLE bool GetUseHighPrecisionTangentBasis() const
	{
		return bUseHighPrecisionTangentBasis;
	}

	FORCEINLINE_DEBUGGABLE void SetUseHighPrecisionTangentBasis(bool bUseHighPrecision)
	{
		bUseHighPrecisionTangentBasis = bUseHighPrecision;
	}

	FORCEINLINE_DEBUGGABLE uint32 GetResourceSize() const
	{
		return (TangentsStride + (TexcoordStride * GetNumTexCoords())) * NumVertices;
	}
	
	class FTangentsVertexBuffer : public FVertexBuffer
	{
		virtual FString GetFriendlyName() const override { return TEXT("FTangentsVertexBuffer"); }
	} TangentsVertexBuffer;

	class FTexcoordVertexBuffer : public FVertexBuffer
	{
		virtual FString GetFriendlyName() const override { return TEXT("FTexcoordVertexBuffer"); }
	} TexCoordVertexBuffer;

private:

	/** The vertex data storage type */
	FStaticMeshVertexDataInterface* TangentsData;
	FShaderResourceViewRHIRef TangentsSRV;

	FStaticMeshVertexDataInterface* TexcoordData;
	FShaderResourceViewRHIRef TextureCoordinatesSRV;

	/** The cached vertex data pointer. */
	uint8* TangentsDataPtr;
	uint8* TexcoordDataPtr;

	/** The cached Tangent stride. */
	mutable uint32 TangentsStride; // Mutable to allow updating through const getter

	/** The cached Texcoord stride. */
	mutable uint32 TexcoordStride; // Mutable to allow updating through const getter

	/** The number of texcoords/vertex in the buffer. */
	uint32 NumTexCoords;

	/** The cached number of vertices. */
	uint32 NumVertices;

	/** Corresponds to UStaticMesh::UseFullPrecisionUVs. if true then 32 bit UVs are used */
	bool bUseFullPrecisionUVs;

	/** If true then RGB10A2 is used to store tangent else RGBA8 */
	bool bUseHighPrecisionTangentBasis;

	bool NeedsCPUAccess = true;
};

class FFEMFXMeshIndexBuffer : public FIndexBuffer
{
public:
	TArray<int32> Indices;

	virtual void InitRHI(FRHICommandListBase& RHICmdList) //override
	{
		FRHIResourceCreateInfo CreateInfo(TEXT("FDynamicMeshIndexBuffer32"));
		IndexBufferRHI = RHICmdList.CreateIndexBuffer(sizeof(uint32), Indices.Num() * sizeof(uint32), BUF_Static, CreateInfo);

		// Copy the index data into the index buffer.
		void* Buffer = RHICmdList.LockBuffer(IndexBufferRHI, 0, Indices.Num() * sizeof(uint32), RLM_WriteOnly);
		FMemory::Memcpy(Buffer, Indices.GetData(), Indices.Num() * sizeof(uint32));
		RHICmdList.UnlockBuffer(IndexBufferRHI);
	}
};

struct FFEMFXMeshVertexBuffers
{
	/** The buffer containing vertex data. */
	FFEMFXMeshVertexBuffer StaticMeshVertexBuffer;
	/** The buffer containing the position vertex data. */
	FPositionVertexBuffer PositionVertexBuffer;
	/** The buffer containing the vertex color data. */
	FColorVertexBuffer ColorVertexBuffer;
};

struct FFEMTetMeshRenderData
{
	TArray<FVector3f> FEMMeshVertexPositions;
	TArray<FFEMFXMeshTetRotation> FEMMeshVertexRotations;
	TArray<FFEMFXMeshTetVertexIds> FEMMeshTetVertexIds;
	TArray<float> FEMMeshDeformations;
};