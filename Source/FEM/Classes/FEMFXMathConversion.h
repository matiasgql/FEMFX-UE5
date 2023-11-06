//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#pragma once

#include "AMD_FEMFX.h"
//#include "FEMFXVectormath.h"
#include "CoreMinimal.h"

// FEMFX simulation uses a right-handed coordinate system, and samples convention is Y is up.
// Unreal world is left-handed and Z-up.
// This function assumes the FEMFX coordinate system is overlaid on the Unreal system with 
// Unreal X = FEMFX -Z
// Unreal Y = FEMFX X
// Unreal Z = FEMFX Y
static inline FVector3f ConvertFEMFXVectorToUnreal(const AMD::FmVector3& vec)
{
	return FVector3f(-vec.z, vec.x, vec.y);
}

static inline AMD::FmVector3 ConvertUnrealToFEMFXVector(const FVector& vec)
{
	return AMD::FmVector3(vec.Y, vec.Z, -vec.X);
}

// To convert a local to world rotation from FEMFX to Unreal, first assuming that the local space coordinates 
// will first be transformed to Unreal coordinates as above.
// The rotation frame axes (which are expressed in the world) must also be converted to Unreal coordinates.
// And then these are permuted/negated to form a left-handed system.
static inline void ConvertFEMFXTetRotationToUnreal(FVector3f& ResultCol0, FVector3f& ResultCol1, FVector3f& ResultCol2, const AMD::FmMatrix3& vec)
{
	ResultCol0 = -ConvertFEMFXVectorToUnreal(vec.col2);
	ResultCol1 = ConvertFEMFXVectorToUnreal(vec.col0);
	ResultCol2 = ConvertFEMFXVectorToUnreal(vec.col1);
}

static inline AMD::FmMatrix3 ConvertUnrealRotatorToFEMMatrix(FRotator rotator)
{
	FVector temp = rotator.RotateVector(FVector(1.0, 0.0, 0.0));

	AMD::FmVector3 Forward = ConvertUnrealToFEMFXVector(temp);
	AMD::FmVector3 Up(0.0f, 1.0f, 0.0f);
	AMD::FmVector3 Back = -Forward;
	AMD::FmVector3 ZVector = Back;
	AMD::FmVector3 XVector = normalize(cross(Up, ZVector));
	AMD::FmVector3 YVector = cross(ZVector, XVector);

	AMD::FmMatrix3 Rotation;
	Rotation.col0 = XVector;
	Rotation.col1 = YVector;
	Rotation.col2 = ZVector;
}

static inline AMD::FmQuat ConvertUnrealQuaternionToFEM(FQuat quaternion)
{
	FVector axis;
	float angle;
	quaternion.ToAxisAndAngle(axis, angle);

	AMD::FmVector3 vec = ConvertUnrealToFEMFXVector(axis);

	return AMD::FmQuat::rotation(-angle, vec);
}

static inline AMD::FmMatrix3 ConvertUnrealAxesToFEMFXMatrix(const FVector& XAxis, const FVector& YAxis, const FVector& ZAxis)
{
	AMD::FmMatrix3 result;
	result.col0 = ConvertUnrealToFEMFXVector(YAxis);
	result.col1 = ConvertUnrealToFEMFXVector(ZAxis);
	result.col2 = -ConvertUnrealToFEMFXVector(XAxis);
	return result;
}
