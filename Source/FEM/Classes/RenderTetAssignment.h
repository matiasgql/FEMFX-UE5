//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "FEMCommon.h"
#include <unordered_map>

#include "RenderTetAssignment.generated.h"
//#include "AMD_FEMFX.h"

#define MAX_RENDER_VERT_TET_ASSIGNMENTS 2

    USTRUCT()
    struct FRenderVertTetAssignment
    {
        GENERATED_BODY()

        UPROPERTY()
        unsigned int tetId;

        UPROPERTY()
        unsigned int nearestFaceId;

        UPROPERTY()
        float barycentricCoords[4];

        UPROPERTY()
        bool  inside;
    };

    USTRUCT()
    struct FShardVertTetAssignments
    {
        GENERATED_BODY()

        UPROPERTY()
        FRenderVertTetAssignment tetAssignments[MAX_RENDER_VERT_TET_ASSIGNMENTS];

        UPROPERTY()
        unsigned int                    numTets;
    };

    USTRUCT()
    struct FShardVertBaryPosIds
    {
        GENERATED_BODY()

        UPROPERTY()
        int32 baseBaryPosId;

        UPROPERTY()
        int32 numBaryPositions;
    };

    // Info to update the assignment to BaryPos
    USTRUCT()
    struct FShardVertUpdateInfo
    {
        GENERATED_BODY()

        UPROPERTY()
        int32 meshSectionId;

        UPROPERTY()
        int32 shardVertexId;

        UPROPERTY()
        int32 baryPosBaseId; // Base id in BaryPos array

        UPROPERTY()
        int32 baryPosOffset; // Maximum offset after this tet face fractures

        FShardVertUpdateInfo()
        {
            meshSectionId = 0;
            shardVertexId = 0;
            baryPosBaseId = 0;
            baryPosOffset = 0;
        }
    };

    // Indices of shard positions that will need a new tet assignment on fracture of each of the four tet faces
    USTRUCT()
    struct FTetFractureShardVerticesToUpdate
    {
        GENERATED_BODY()

        UPROPERTY()
        TArray<FShardVertUpdateInfo> shardVertices0;
        UPROPERTY()
        TArray<FShardVertUpdateInfo> shardVertices1;
        UPROPERTY()
        TArray<FShardVertUpdateInfo> shardVertices2;
        UPROPERTY()
        TArray<FShardVertUpdateInfo> shardVertices3;

        TArray<FShardVertUpdateInfo>& GetShardVerticesOfFace(int idx)
        {
            if (idx == 0)
            {
                return shardVertices0;
            }
            else if (idx == 1)
            {
                return shardVertices1;
            }
            else if (idx == 2)
            {
                return shardVertices2;
            }
            else
            {
                return shardVertices3;
            }
        }
    };

namespace AMD
{
    struct ShardVertTetAssignments
    {
        std::vector<FRenderVertTetAssignment> tetAssignments;
        uint numTets;

        ShardVertTetAssignments() : numTets(0) {}

        // Set num tets to min of tet assignments and MAX_RENDER_VERT_TET_ASSIGNMENTS
        void SetNumTets()
        {
            uint num = (uint)tetAssignments.size();

            if (num > MAX_RENDER_VERT_TET_ASSIGNMENTS)
            {
                num = MAX_RENDER_VERT_TET_ASSIGNMENTS;
            }

            numTets = num;
        }
    };

    // Collection of tet ids belonging to a non-fracture region, and a BVH computed over them, to accelerate render vertex preprocessing
    struct NonFractureRegionData
    {
        uint* tetIds;
        FmTetVertIds* tetVertIds;
        FmBvh* bvh;
        uint numTets;

        NonFractureRegionData()
        {
            tetIds = NULL;
            tetVertIds = NULL;
            bvh = NULL;
            numTets = 0;
        }

        // Pass in all tet mesh vertex positions and tet vertex ids, and list of tet ids in the non-fracture region.
        // Create ids lists and BVH for the non-fracture region.
        // Allocates memory, call Destroy() to free
        void Create(FmVector3* meshVertRestPositions, FmTetVertIds* meshTetVertIds, const std::vector<uint>& inTetIds);

        void Destroy();
    };

    // All non-fracture region data created for a tet mesh buffer.
    // Region ids for all tets, and data for each region
    struct NonFractureRegions
    {
        std::vector<NonFractureRegionData> regions;
        std::vector<uint> regionIdOfTet;
        std::vector<uint> nonFractureFlagsOfTet;

        NonFractureRegions(int numTets);
        ~NonFractureRegions();

        // Create new region data from tet mesh vertex positions and tet vertex ids, and list of tet ids in the non-fracture region.
        void AddRegion(FmVector3* meshVertRestPositions, FmTetVertIds* meshTetVertIds, const std::vector<uint>& tetIds, const std::vector<uint>& tetNoFractureFlags);

        // After adding regions, create regions for any unassigned single tets
        void AddRemainingRegions(FmVector3* meshVertRestPositions, FmTetVertIds* meshTetVertIds);
    };

    // Indices of shard positions that will need a new tet assignment on fracture of each of the four tet faces
    struct TetFractureShardVerticesToUpdate
    {
        std::vector<FShardVertUpdateInfo> shardVertices0;
        std::vector<FShardVertUpdateInfo> shardVertices1;
        std::vector<FShardVertUpdateInfo> shardVertices2;
        std::vector<FShardVertUpdateInfo> shardVertices3;

        std::vector<FShardVertUpdateInfo>& GetShardVerticesOfFace(int idx)
        {
            if (idx == 0)
            {
                return shardVertices0;
            }
            else if (idx == 1)
            {
                return shardVertices1;
            }
            else if (idx == 2)
            {
                return shardVertices2;
            }
            else
            {
                return shardVertices3;
            }
        }
    };

    // unordered_map to group shard vertices with the same tet assignments

    // Key is array of tet assignments
    class ShardVertGroupKey
    {
    public:
        const ShardVertTetAssignments* shardVertTetAssignments;

        ShardVertGroupKey() : shardVertTetAssignments(NULL) { }
    };

    // Value is a set of shard vert indices
    class ShardVertGroup
    {
    public:
        std::vector<uint> shardVertIndices;
        uint idx; // idx in output array of bary pos offsets

        ShardVertGroup() : idx(0) { }
    };

    // Hash combines size and tet ids of tet assignments
    class ShardVertKeyHash
    {
    public:
        std::size_t operator()(const ShardVertGroupKey& key) const
        {
            if (key.shardVertTetAssignments == NULL)
            {
                return 0;
            }
            uint numAssignments = (uint)key.shardVertTetAssignments->numTets;
            std::hash<uint> uintHash;
            std::size_t hashVal = uintHash(numAssignments);
            for (uint i = 0; i < numAssignments; i++)
            {
                hashVal = hashVal ^ uintHash(key.shardVertTetAssignments->tetAssignments[i].tetId);
            }
            return hashVal;
        }
    };

    // Test array of tet assignments is equal
    class ShardVertKeyEqual
    {
    public:
        bool operator()(const ShardVertGroupKey& lhs, const ShardVertGroupKey& rhs) const
        {
            if (lhs.shardVertTetAssignments == NULL || rhs.shardVertTetAssignments == NULL)
            {
                return false;
            }

            uint numAssignments = (uint)lhs.shardVertTetAssignments->numTets;
            if (numAssignments != rhs.shardVertTetAssignments->numTets)
            {
                return false;
            }

            if (numAssignments == 1)
            {
                return true;
            }

            for (uint i = 0; i < numAssignments; i++)
            {
                if (lhs.shardVertTetAssignments->tetAssignments[i].tetId != rhs.shardVertTetAssignments->tetAssignments[i].tetId)
                {
                    return false;
                }
            }

            return true;
        }
    };

    // Shard vertices grouped if they have the same array of tet assignments. 
    // These shard vertices can share an offset to a tet/barycentric position.  Shard vertices will have different barycentric positions so will need a different base index.
    typedef std::unordered_map<ShardVertGroupKey, ShardVertGroup, ShardVertKeyHash, ShardVertKeyEqual> ShardVertGroups;

    // Group shard vertices if they have the same array of tet assignments. 
    void CreateShardVertGroups(ShardVertGroups* resultShardVertexGroups, const ShardVertTetAssignments* shardVertTetAssignments, uint numShardVerts);

    // Create render data from shard vertex groups
    void CreateShardRenderData(
        std::vector<uint>* outBaryPosOffsets,                          // Output array of baryPosOffsets matching the shard vertex groups
        std::vector<uint>* outBaryPosOffsetIds,                        // Output ids of baryPosOffsets for all render vertices
        TetFractureShardVerticesToUpdate* outTetFractureShardVertices, // Output map from tet fracture faces to groups/baryPosOffset; array assumed presized for all tets
        ShardVertGroups* shardVertGroups,        // Shard vertex groups created by CreateShardVertGroups()
        uint numRenderVertices,
        const uint* shardVertIds,                // Map from render vertex to shard vertex; will remap to baryPosOffset index
        const ShardVertTetAssignments* shardVertTetAssignments);

    // Find nearest tet and barycentric coords (in rest position) to input position.
    // Mesh geometry is provided as FmTetMeshBuffer.
    // Search is accelerated with bvHierarchy.
    void ComputeRenderVertTetAssignment(FRenderVertTetAssignment* tetAssignment, const AMD::FmTetMeshBuffer& tetMeshBuffer, const AMD::FmBvh& bvHierarchy, const AMD::FmVector3& vertPos);

    // Find nearest tet and barycentric coords (in rest position) to input position.
    // Mesh geometry is provided as vertRestPositions and tetVertIds.
    // Search is accelerated with bvHierarchy.
    void ComputeRenderVertTetAssignment(
        FRenderVertTetAssignment* tetAssignment,
        const FmVector3* vertRestPositions,
        const FmTetVertIds* tetVertIds,
        const FmBvh& bvHierarchy,
        const FmVector3& renderPos);

    // Step through list of tet assignments and cut the list short whenever an exterior face is reached.
    bool UpdateShardVertTetAssignments(FShardVertTetAssignments* tetAssignments, const FmTetMeshBuffer& tetMeshBuffer);

    void GetMeshBufferRenderCounts(uint* numVerts, uint* numTets, const FmTetMeshBuffer& tetMeshBuffer);

    void GetMeshBufferRenderData(FmVector3* vertices, FmTetVertIds* tetVertIds, FmMatrix3* tetRotations, const FmTetMeshBuffer& tetMeshBuffer);

    // Associate this render vertex with the non-fracture region nearest to RootPos.
    // Find nearest tet to RenderPos in this region, then walk to RenderPos, recording all tets/faces crossed which can fracture.
    // This data can be used to switch the tet assignment after these faces break, to keep render vertex from stretching.
    void ComputeShardVertTetAssignments(
        std::vector<FRenderVertTetAssignment>* outputTetAssignments,
        const NonFractureRegions& nonFractureRegions,
        const FmTetMeshBuffer& tetMeshBuffer,
        FmVector3* vertRestPositions,
        const FmBvh& BVH, const FmVector3& renderPos, const FmVector3& rootPos);
}