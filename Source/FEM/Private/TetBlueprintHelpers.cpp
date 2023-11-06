//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "TetBlueprintHelpers.h"
#include "AMD_FEMFX.h"

FTetVertNeighbors CreateVertNeighbors(const AMD::FmVertNeighbors* vertNeighbors)
{
	FTetVertNeighbors neighbors;

	neighbors.NumAdjacentVerts = vertNeighbors->numAdjacentVerts;
	neighbors.IncidentTetsStart = vertNeighbors->incidentTetsStart;
	neighbors.NumIncidentTets = vertNeighbors->numIncidentTets;

	return neighbors;
}

FTetVertex CreateTetVertex(const AMD::FmTetMesh* TetMesh, int VertId)
{
	FTetVertex vertex;

    AMD::FmVector3 pos = AMD::FmGetVertPosition(*TetMesh, VertId);
    AMD::FmVector3 vel = AMD::FmGetVertVelocity(*TetMesh, VertId);
    AMD::FmVector3 extForce = AMD::FmGetVertExternalForce(*TetMesh, VertId);
    AMD::FmVector3 restPos = AMD::FmGetVertRestPosition(*TetMesh, VertId);
    AMD::FmVertNeighbors neighbors = AMD::FmGetVertNeighbors(*TetMesh, VertId);
    float mass = AMD::FmGetVertMass(*TetMesh, VertId);
    AMD::uint index0 = AMD::FmGetVertIndex0(*TetMesh, VertId);

	vertex.RestPos = FVector(restPos.x, restPos.y, restPos.z);
	vertex.Pos = FVector(pos.x, pos.y, pos.z);
	vertex.Velocity = FVector(vel.x, vel.y, vel.z);
	vertex.ExtForce = FVector(extForce.x, extForce.y, extForce.z);
	vertex.KinematicVel = FVector(vel.x, vel.y, vel.z);
	vertex.Neighbors = CreateVertNeighbors(&neighbors);
	vertex.Mass = mass;
	vertex.Index0 = index0;

	return vertex;
}

FTetInfo CreateTetInfo(const AMD::FmTetMesh* tetMesh, uint32 tetId)
{
	FTetInfo info;

	info.TetId = tetId;

    AMD::FmTetVertIds TetIds = FmGetTetVertIds(*tetMesh, tetId);

	info.VertIds.AddDefaulted(4);
	for (int i = 0; i < 4; ++i)
	{
		info.VertIds[i] = TetIds.ids[i];
	}

	//info.Mass = tet->mass;
	//info.FrictionCoeff = tet->frictionCoeff;

    AMD::FmTetFaceIncidentTetIds FaceIncidentTetIds = FmGetTetFaceIncidentTetIds(*tetMesh, tetId);

	info.FaceIncidentTetIds.AddDefaulted(4);
	for (int i = 0; i < 4; ++i)
	{
		info.FaceIncidentTetIds[i] = FaceIncidentTetIds.ids[i];
	}

	return info;
}