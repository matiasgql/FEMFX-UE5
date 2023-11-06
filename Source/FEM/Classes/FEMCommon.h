//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#define MAX_MESH_BUFFERS 512
#define MAX_SUBMESHES 128
#define MAX_MESHES (MAX_MESH_BUFFERS*MAX_SUBMESHES)
#define MAX_RIGID_BODIES 128
#define MAX_VERTS_PER_MESH_BUFFER 4096
#define MAX_DISTANCE_CONTACTS (4096*16)
#define MAX_FRACTURE_CONTACTS (4096)
#define MAX_VOLUME_CONTACTS (4096)
#define MAX_VOLUME_CONTACT_VERTS (4096*64)
#define MAX_GLUE_CONSTRAINTS (4096)
#define MAX_PLANE_CONSTRAINTS (4096)
#define MAX_RIGID_BODY_ANGLE_CONSTRAINTS (4096)
#define MAX_CONTACTS (MAX_DISTANCE_CONTACTS + MAX_FRACTURE_CONTACTS + MAX_VOLUME_CONTACTS)
#define MAX_BROAD_PHASE_PAIRS (4096)

// Forward Decloration
namespace FmVectormath
{
	class Vector3;
	class Matrix3;
}

namespace AMD
{
	struct FmRigidBody;
    struct FmRigidBodySetupParams;
	struct FmTetMeshBuffer;
	struct FmTetMesh;
	struct FmTetVertIds;
	struct FmTet;
	struct FmTetFaceIncidentTetIds;
	struct FmScene;
	typedef unsigned int uint;
	struct FmBvh;
	typedef FmVectormath::Vector3 FmVector3;
	typedef FmVectormath::Matrix3 FmMatrix3;
	struct FmSceneControlParams;
	struct FmGlueConstraintSetupParams;
	struct FmPlaneConstraintSetupParams;
	struct FmRigidBodyAngleConstraintSetupParams;
}