//---------------------------------------------------------------------------------------
//
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
//
//---------------------------------------------------------------------------------------
#include "FEMFileImportFactory.h"


FEMFileImportFactory::FEMFileImportFactory()
{
}


FEMFileImportFactory::~FEMFileImportFactory()
{
}

TUniquePtr<FEMFileImportFactory> FEMFileImportFactory::GetFactory(FString version)
{
	TArray<FString> SplitVersion;
	version.ParseIntoArray(SplitVersion, TEXT("."), true);
	
	uint32 majorVersion = FCString::Atoi(*SplitVersion[0]);
	uint32 minorVersion = FCString::Atoi(*SplitVersion[1]);

	// Major Verion Check, incrementing major version would invalidate older versions
	if (majorVersion != 1)
	{
		return nullptr;
	}

	// Switch on minor version to set the correct import behavior
	switch (minorVersion)
	{
	case (0):
		return TUniquePtr<FEMv1_0>(new FEMv1_0());
	default:
		return TUniquePtr<FEMFileImportFactory>(new FEMFileImportFactory());
	};

	return nullptr;
}


void FEMv1_0::ImportFEMFile(const FEMFileImportInputs* inputStruct)
{
	TArray<TSharedPtr<FJsonValue>> JsonMeshComponents = inputStruct->JsonObject->GetArrayField("FEMMeshComponents");
	for (int idx = 0; idx < JsonMeshComponents.Num(); ++idx)
	{
		FComponent component;

		component.Name = JsonMeshComponents[idx]->AsObject()->GetStringField("Name");
		component.NumFBXFiles = JsonMeshComponents[idx]->AsObject()->GetIntegerField("NumFBXFiles");
		component.NumberOfCornersPerShard = JsonMeshComponents[idx]->AsObject()->GetIntegerField("NumCornersPerShard");
		component.CollisionGroup = JsonMeshComponents[idx]->AsObject()->GetIntegerField("CollisionGroup");
		component.IsFracturable = JsonMeshComponents[idx]->AsObject()->GetBoolField("IsFracturable");
		component.NumTags = JsonMeshComponents[idx]->AsObject()->GetIntegerField("NumTags");
		component.NumMaterials = JsonMeshComponents[idx]->AsObject()->GetIntegerField("NumMaterials");

		TArray<TSharedPtr<FJsonValue>> Tags = JsonMeshComponents[idx]->AsObject()->GetArrayField("Tags");
		for (int i = 0; i < Tags.Num(); i++)
		{
			FNameIndexMap map;
			map.Name = Tags[i]->AsObject()->GetStringField("Tag");

			TArray<TSharedPtr<FJsonValue>> ids = Tags[i]->AsObject()->GetArrayField("TetIds");
			for (int j = 0; j < ids.Num(); ++j)
			{
				map.TetIds.Add(ids[j]->AsNumber());
			}
			component.Tags.Add(map);
		}

		TArray<TSharedPtr<FJsonValue>> Materials = JsonMeshComponents[idx]->AsObject()->GetArrayField("Materials");
		for (int i = 0; i < Materials.Num(); i++)
		{
			FMaterialTetAssignment map;
			map.Name = Materials[i]->AsObject()->GetStringField("MaterialName");

			TArray<TSharedPtr<FJsonValue>> ids = Materials[i]->AsObject()->GetArrayField("TetIds");

			for (int j = 0; j < ids.Num(); ++j)
			{
				map.TetIds.Add(ids[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> faces = Materials[i]->AsObject()->GetArrayField("NoFractureFaces");

			for (int j = 0; j < faces.Num(); ++j)
			{
				map.NoFractureFaces.Add(faces[j]->AsNumber());
			}

			component.Materials.Add(map);
		}


		TArray<TSharedPtr<FJsonValue>> FBXFiles = JsonMeshComponents[idx]->AsObject()->GetArrayField("FbxFiles");
		for (int i = 0; i < FBXFiles.Num(); i++)
		{
			component.FBXFiles.Add(FBXFiles[i]->AsString());
		}

		FNodeResource node;
		TSharedPtr<FJsonObject> JsonNode = JsonMeshComponents[idx]->AsObject()->GetObjectField("Node");
		node.IsBoundaryMarker = JsonNode->GetBoolField("IsBoundaryMarker");
		node.NumAttributes = JsonNode->GetIntegerField("NumAttributes");
		node.NumDimensions = JsonNode->GetIntegerField("NumDimensions");
		node.NumPoints = JsonNode->GetIntegerField("NumPoints");
		TArray<TSharedPtr<FJsonValue>> points = JsonNode->GetArrayField("Data");
		for (int i = 0; i < node.NumPoints; i++)
		{
			for (int j = 0; j < node.NumDimensions + 1; ++j)
			{
				node.Data.Add((float)points[i * 4 + j]->AsNumber());
			}
		}

		component.NodeFile = node;

		FEleResource ele;
		TSharedPtr<FJsonObject> JsonEle = JsonMeshComponents[idx]->AsObject()->GetObjectField("Ele");
		ele.IsRegionAttribute = JsonEle->GetBoolField("IsRegionAttribute");
		ele.NumNodesPerTets = JsonEle->GetIntegerField("NumNodesPerTets");
		ele.NumTetrahedra = JsonEle->GetIntegerField("NumTetrahedra");
		TArray<TSharedPtr<FJsonValue>> tets = JsonEle->GetArrayField("Data");
		for (int i = 0; i < ele.NumTetrahedra; i++)
		{
			TSharedPtr<FJsonObject> JsonTet = tets[i]->AsObject();
			FTet tet;
			tet.TetIndex = JsonTet->GetIntegerField("TetIndex");

			TArray<TSharedPtr<FJsonValue>> indicies = JsonTet->GetArrayField("Indices");
			for (int j = 0; j < ele.NumNodesPerTets; j++)
			{
				tet.Indicies.Add(indicies[j]->AsNumber());
			}

			ele.Data.Add(tet);
		}

		component.EleFile = ele;

		TArray<TSharedPtr<FJsonValue>> JsonRenderMesh = JsonMeshComponents[idx]->AsObject()->GetArrayField("RenderMesh");

		//TSharedPtr<FJsonObject> JsonRenderMesh = JsonMeshComponents[idx]->AsObject()->GetObjectField("RenderMesh");
		for (int i = 0; i < JsonRenderMesh.Num(); i++)
		{
			TSharedPtr<FJsonObject> JsonSection = JsonRenderMesh[i]->AsObject();
			FMeshSection section;

			TArray<TSharedPtr<FJsonValue>> assignedTetFace = JsonSection->GetArrayField("AssignedTetFaceBuffer");
			for (int j = 0; j < assignedTetFace.Num(); j++)
			{
				section.AssignedTetFace.Add(assignedTetFace[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> barycentrics = JsonSection->GetArrayField("BarycentricCoordsBuffer");
			for (int j = 0; j < barycentrics.Num(); j++)
			{
				section.Barycentrics.Add(barycentrics[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> barycentricsPosIds = JsonSection->GetArrayField("BarycentricPosIds");
			for (int j = 0; j < barycentricsPosIds.Num(); j++)
			{
				section.BarycentricsPosIds.Add(barycentricsPosIds[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> tetAssignment = JsonSection->GetArrayField("TetAssignmentBuffer");
			for (int j = 0; j < tetAssignment.Num(); j++)
			{
				section.TetAssignment.Add(tetAssignment[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> vertColor = JsonSection->GetArrayField("ColorBuffer");
			for (int j = 0; j < vertColor.Num(); j++)
			{
				section.VertexColor.Add(vertColor[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> vertNormal = JsonSection->GetArrayField("NormalBuffer");
			for (int j = 0; j < vertNormal.Num(); j++)
			{
				section.VertexNormal.Add(vertNormal[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> vertPos = JsonSection->GetArrayField("PositionBuffer");
			for (int j = 0; j < vertPos.Num(); j++)
			{
				section.VertexPosition.Add(vertPos[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> vertTangent = JsonSection->GetArrayField("TangentBuffer");
			for (int j = 0; j < vertTangent.Num(); j++)
			{
				section.VertexTangent.Add(vertTangent[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> vertUVs = JsonSection->GetArrayField("UVsBuffer");
			for (int j = 0; j < vertUVs.Num(); j++)
			{
				section.VertexUVs.Add(vertUVs[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> shardVertexIds = JsonSection->GetArrayField("ShardIds");
			for (int j = 0; j < shardVertexIds.Num(); j++)
			{
				section.ShardVertexIds.Add(shardVertexIds[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> triangles = JsonSection->GetArrayField("Triangles");
			for (int j = 0; j < triangles.Num(); j++)
			{
				section.Triangles.Add(triangles[j]->AsNumber());
			}

			TArray<TSharedPtr<FJsonValue>> centroids = JsonSection->GetArrayField("Centroids");
			for (int j = 0; j < centroids.Num(); j++)
			{
				section.Centroids.Add(centroids[j]->AsNumber());
			}

			section.NumberOfShardVertices = JsonSection->GetIntegerField("NumberOfShards");

			component.MeshSections.Add(section);
		}
		
		inputStruct->Resource->AddComponent(component);

	}
	// Setup The Component Resource
	inputStruct->Resource->ProcessResource();
	
	// Read Rigid Body values out from file
	TArray<TSharedPtr<FJsonValue>> JsonRigidBodyArray = inputStruct->JsonObject->GetArrayField("RigidBodies");
	for (auto it = JsonRigidBodyArray.CreateIterator(); it; it++)
	{
		FRigidBody rb;
		TSharedPtr<FJsonObject> obj = it->Get()->AsObject();
		rb.mass = obj->GetNumberField("Mass");

		TArray<TSharedPtr<FJsonValue>> Pos = obj->GetArrayField("Position");
		FVector position = FVector(Pos[0]->AsNumber(), Pos[1]->AsNumber(), Pos[2]->AsNumber());
		rb.Position = position;

		TArray<TSharedPtr<FJsonValue>> Dim = obj->GetArrayField("Dimensions");
		FVector dimension = FVector(Dim[0]->AsNumber(), Dim[1]->AsNumber(), Dim[2]->AsNumber());
		rb.Dimensions = dimension * 0.5f; // Library dimensions are half-widths

		TArray<TSharedPtr<FJsonValue>> Rot = obj->GetArrayField("Rotation");
		FVector4 rotation = FVector4(Rot[0]->AsNumber(), Rot[1]->AsNumber(), Rot[2]->AsNumber(), Rot[3]->AsNumber());
		rb.Rotation = rotation;

		TArray<TSharedPtr<FJsonValue>> bit = obj->GetArrayField("BodyInertiaTensor");
		for (auto itr = bit.CreateIterator(); itr; itr++)
		{
			rb.BodyInertiaTensor.Add(itr->Get()->AsNumber());
		}

		inputStruct->Resource->ActorResource.RigidBodies.Add(rb);
	}

	// Read Angle Constraints out from file
	TArray<TSharedPtr<FJsonValue>> JsonAngleConstraints = inputStruct->JsonObject->GetArrayField("RBAngleConstraints");
	for (auto it = JsonAngleConstraints.CreateIterator(); it; it++)
	{
		FAngleConstraint ac;
		TSharedPtr<FJsonObject> obj = it->Get()->AsObject();

		ac.Name = obj->GetStringField("Name");
		ac.BodyA = obj->GetNumberField("BodyA");
		ac.BodyB = obj->GetNumberField("BodyB");

		TArray<TSharedPtr<FJsonValue>> absA = obj->GetArrayField("AxisBodySpaceA");
		ac.AxisBodySpaceA = FVector(absA[0]->AsNumber(), absA[1]->AsNumber(), absA[2]->AsNumber());

		TArray<TSharedPtr<FJsonValue>> absB = obj->GetArrayField("AxisBodySpaceB");
		ac.AxisBodySpaceB = FVector(absB[0]->AsNumber(), absB[1]->AsNumber(), absB[2]->AsNumber());

		inputStruct->Resource->ActorResource.AngleConstraints.Add(ac);
	}

	// Read Glue Constraints
	TArray<TSharedPtr<FJsonValue>> JsonGlueConstraints = inputStruct->JsonObject->GetArrayField("GlueConstraints");
	for (auto it = JsonGlueConstraints.CreateIterator(); it; it++)
	{
		FGlueConstraint gc;
		TSharedPtr<FJsonObject> obj = it->Get()->AsObject();

		gc.Name = obj->GetStringField("Name");
		gc.BodyA = obj->GetNumberField("BodyA");
		gc.BodyB = obj->GetNumberField("BodyB");
		gc.IsRigidBodyA = obj->GetBoolField("IsRigidBodyA");
		gc.IsRigidBodyB = obj->GetBoolField("IsRigidBodyB");
		gc.TetIdA = obj->GetNumberField("TetIdA");
		gc.TetIdB = obj->GetNumberField("TetIdB");
		gc.BreakThreshold = obj->GetNumberField("BreakThreshold");
		gc.MinGlueConstraints = obj->GetNumberField("MinGlueConstraints");

		TArray<TSharedPtr<FJsonValue>> pbsA = obj->GetArrayField("PosBodySpaceA");
		gc.PosBodySpaceA = FVector4(pbsA[0]->AsNumber(), pbsA[1]->AsNumber(), pbsA[2]->AsNumber(), pbsA[3]->AsNumber());

		TArray<TSharedPtr<FJsonValue>> pbsB = obj->GetArrayField("PosBodySpaceB");
		gc.PosBodySpaceB = FVector4(pbsB[0]->AsNumber(), pbsB[1]->AsNumber(), pbsB[2]->AsNumber(), pbsB[3]->AsNumber());


		inputStruct->Resource->ActorResource.GlueConstraints.Add(gc);
	}

	// Read Plane Constraints
	TArray<TSharedPtr<FJsonValue>> JsonPlaneConstraints = inputStruct->JsonObject->GetArrayField("PlaneConstraints");
	for (auto it = JsonPlaneConstraints.CreateIterator(); it; it++)
	{
		FPlaneConstraint pc;
		TSharedPtr<FJsonObject> obj = it->Get()->AsObject();

		pc.Name = obj->GetStringField("Name");
		pc.BodyA = obj->GetNumberField("BodyA");
		pc.BodyB = obj->GetNumberField("BodyB");
		pc.IsRigidBodyA = obj->GetBoolField("IsRigidBodyA");
		pc.IsRigidBodyB = obj->GetBoolField("IsRigidBodyB");
		pc.TetIdA = obj->GetNumberField("TetIdA");
		pc.TetIdB = obj->GetNumberField("TetIdB");

		TArray<TSharedPtr<FJsonValue>> pbsA = obj->GetArrayField("PosBodySpaceA");
		pc.PosBodySpaceA = FVector4(pbsA[0]->AsNumber(), pbsA[1]->AsNumber(), pbsA[2]->AsNumber(), pbsA[3]->AsNumber());

		TArray<TSharedPtr<FJsonValue>> pbsB = obj->GetArrayField("PosBodySpaceB");
		pc.PosBodySpaceB = FVector4(pbsB[0]->AsNumber(), pbsB[1]->AsNumber(), pbsB[2]->AsNumber(), pbsB[3]->AsNumber());

		pc.NumberOfPlanes = obj->GetNumberField("NumberOfPlanes");
		TArray<TSharedPtr<FJsonValue>> PlanesArray = obj->GetArrayField("Planes");
		for (auto itr = PlanesArray.CreateIterator(); itr; itr++)
		{
			FFEMPlane plane;
			TSharedPtr<FJsonObject> planeObj = itr->Get()->AsObject();

			plane.Bias = planeObj->GetNumberField("Bias");
			plane.NonNegative = planeObj->GetBoolField("NonNegative");

			TArray<TSharedPtr<FJsonValue>> norm = planeObj->GetArrayField("PlaneNormal");
			plane.PlaneNormal = FVector(norm[0]->AsNumber(), norm[1]->AsNumber(), norm[2]->AsNumber());

			pc.Planes.Add(plane);
		}
		inputStruct->Resource->ActorResource.PlaneConstraints.Add(pc);
	}
}
