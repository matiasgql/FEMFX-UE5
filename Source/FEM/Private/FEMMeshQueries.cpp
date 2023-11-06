//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMMeshQueries.h"

namespace AMD
{
// fast_intersect_triangle taken from Radeon Rays with copyright:
/**********************************************************************
Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
********************************************************************/
    // Ray definition
    typedef struct
    {
        FmVector3 o;
        FmVector3 d;
        //int2 extra;
        int doBackfaceCulling;
        int padding;
    } ray;

    // Intersect ray against a triangle and return intersection interval value if it is in
    // (0, t_max], return t_max otherwise.
    inline float fast_intersect_triangle(ray r, FmVector3 v1, FmVector3 v2, FmVector3 v3, float t_max)
    {
        FmVector3 const e1 = v2 - v1;
        FmVector3 const e2 = v3 - v1;

        FmVector3 const s1 = cross(r.d, e2);

        float denom = dot(s1, e1);
        if (denom == 0.f)
        {
            return t_max;
        }

        float const invd = 1.f / denom;

        FmVector3 const d = r.o - v1;
        float const b1 = dot(d, s1) * invd;
        FmVector3 const s2 = cross(d, e1);
        float const b2 = dot(r.d, s2) * invd;
        float const temp = dot(e2, s2) * invd;

        if (b1 < 0.f || b1 > 1.f || b2 < 0.f || b1 + b2 > 1.f || temp < 0.f || temp > t_max)
        {
            return t_max;
        }
        else
        {
            return temp;
        }
    }

	bool FindRayIntersection(TetMeshRayIntersectionResult* result, const FmTetMesh* tetMesh, const FmVector3& rayOrigin, const FmVector3& rayDirection, float distanceLimit)
	{
		// Sphere reject test
        FmVector3 minPosition = FmGetMinPosition(*tetMesh);
        FmVector3 maxPosition = FmGetMaxPosition(*tetMesh);
        FmVector3 center = (minPosition + maxPosition) * 0.5f;
		FmVector3 halfExtents = (maxPosition - minPosition) * 0.5f;
		float radius = length(halfExtents);

		FmVector3 rayOriginToCenter = center - rayOrigin;
		float lengthRayOriginToCenter = length(rayOriginToCenter);

		if (lengthRayOriginToCenter > radius)
		{
			if (lengthRayOriginToCenter - radius > distanceLimit)
			{
				return false;
			}

			float maxAngle = asinf(radius / lengthRayOriginToCenter);
			float angle = asinf(length(cross(rayDirection, rayOriginToCenter) / lengthRayOriginToCenter));

			if (angle > maxAngle)
			{
				return false;
			}
		}

		// Check all exterior faces of tet mesh
		float minDistance = FLT_MAX;
		FmVector3 minDistIntersectionPoint = FmInitVector3(0.0f);
		float minDistFaceNormalDot = 0.0f;
		uint minDistTetId = FM_INVALID_ID;
		uint minDistExtFaceId = FM_INVALID_ID;

		uint numExteriorFaces = FmGetNumExteriorFaces(*tetMesh);
		for (uint extFaceId = 0; extFaceId < numExteriorFaces; extFaceId++)
		{
            uint tetId, faceId;
            FmGetExteriorFace(&tetId, &faceId, *tetMesh, extFaceId);

            FmTetVertIds tetVerts = FmGetTetVertIds(*tetMesh, tetId);

			FmFaceVertIds faceVerts;
            FmGetFaceVertIds(&faceVerts, faceId, tetVerts);

			FmVector3 vert0 = FmGetVertPosition(*tetMesh, faceVerts.ids[0]);
			FmVector3 vert1 = FmGetVertPosition(*tetMesh, faceVerts.ids[1]);
			FmVector3 vert2 = FmGetVertPosition(*tetMesh, faceVerts.ids[2]);

            ray r;
            r.o = rayOrigin;
            r.d = rayDirection;
            float t = fast_intersect_triangle(r, vert0, vert1, vert2, distanceLimit);
            if (t < distanceLimit)
            {
                FmVector3 intersectionPoint = rayOrigin + rayDirection * t;

				float distance = t;
				if (distance < minDistance)
				{
					minDistance = distance;
					minDistIntersectionPoint = intersectionPoint;
					minDistTetId = tetId;
					minDistExtFaceId = extFaceId;
					minDistFaceNormalDot = dot(normalize(cross(vert1 - vert0, vert2 - vert0)), rayDirection);
				}
			}
		}

		result->intersectionPoint = minDistIntersectionPoint;
		result->tetId = minDistTetId;
		result->exteriorFaceId = minDistExtFaceId;
		result->distance = minDistance;
		result->faceNormalDot = minDistFaceNormalDot;
		return (minDistance < distanceLimit);
	}
}
