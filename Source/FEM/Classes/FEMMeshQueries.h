//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "AMD_FEMFX.h"

namespace AMD
{
	// Result struct for ray intersection, valid only if result of FindRayIntersection true.
	struct TetMeshRayIntersectionResult
	{
		FmVector3 intersectionPoint;      // point of contact
		uint         tetId;               // intersected tet of FmTetMesh
		uint         exteriorFaceId;      // intersected exterior face of FmTetMesh
		float        distance;            // distance from ray origin to intersection
		float        faceNormalDot;       // dot product of face normal and ray direction, expected negative if ray fired from outside mesh
	};

	// Finds the nearest ray intersection with the exterior surface of an FmTetMesh.
	// Ray direction expected to be unit length vector.
	// The maximum distance to the intersection point is set by distanceLimit.
	// Returns whether intersection found.
	// Current implementation is a sphere reject test, then brute force search of exterior faces.
	bool FindRayIntersection(TetMeshRayIntersectionResult* result, const FmTetMesh* tetMesh, const FmVector3& rayOrigin, const FmVector3& rayDirection, float distanceLimit);
}