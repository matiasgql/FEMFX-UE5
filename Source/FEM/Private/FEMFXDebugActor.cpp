// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FEMFXDebugActor.h"
#include "AMD_FEMFX.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "IFEM.h"

AFEMFXDebugActor::AFEMFXDebugActor()
{
#if ENABLE_DEBUG_ACTOR
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    DebugTetMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
    RootComponent = DebugTetMesh;

    MaxTriangles = 0;
    bEnable = false;
#endif
}

void AFEMFXDebugActor::BeginPlay()
{
    Super::BeginPlay();

#if ENABLE_DEBUG_ACTOR
    TArray<AActor*> ActorsFound;
    UGameplayStatics::GetAllActorsOfClass(this, AFEMFXScene::StaticClass(), ActorsFound);

    if (ActorsFound.Num() > 0)
    {
        for (int i = 0; i < ActorsFound.Num(); ++i)
        {
            if (!bOverride_FEMScene)
            {
                if (Cast<AFEMFXScene>(ActorsFound[i])->Name == "Default")
                {
                    Scene = Cast<AFEMFXScene>(ActorsFound[i]);
                    break;
                }
            }
            else
            {
                if (Cast<AFEMFXScene>(ActorsFound[i])->Name == SceneName)
                {
                    Scene = Cast<AFEMFXScene>(ActorsFound[i]);
                    break;
                }
            }
        }
    }
#endif
}

void AFEMFXDebugActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

#if ENABLE_DEBUG_ACTOR
    if (bEnable && IsValid(Scene))
    {
        UpdateDebugTetMesh();
    }
#endif
}

#if ENABLE_DEBUG_ACTOR
void AFEMFXDebugActor::UpdateDebugTetMesh()
{
    if (!IsValid(Scene) || !Scene->IsInitialized())
        return;

    AMD::FmScene* FEMScene = Scene->GetSceneBuffer();

    int32 NumTriangles = 0;

    TArray<FVector> Vertices;
    TArray<int32> Triangles;
    TArray<FVector> Normals;
    TArray<FVector2D> UV0;
    TArray<FLinearColor> VertexColors;
    TArray<FProcMeshTangent> Tangents;

    FLinearColor Color(0.8f, 0.8f, 0.8f, 1.0f);

    int32 numEnabledMeshes = (int32)FmGetNumEnabledTetMeshes(*FEMScene);
    for (int32 MeshIdx = 0; MeshIdx < numEnabledMeshes; MeshIdx++)
    {
        AMD::FmTetMesh& TetMesh = *FmGetTetMesh(*FEMScene, FmGetEnabledTetMeshId(*FEMScene, MeshIdx));
        int32 NumFaces = (int32)FmGetNumExteriorFaces(TetMesh);
        for (int32 i = 0; i < NumFaces; i++)
        {
            AMD::FmVector3 pos0, pos1, pos2, pos3, normal;

            AMD::uint tetId, faceId;
            AMD::FmGetExteriorFace(&tetId, &faceId, TetMesh, i);

            AMD::FmTetVertIds tetVerts = AMD::FmGetTetVertIds(TetMesh, tetId);
            AMD::FmFaceVertIds faceVerts;
            AMD::FmGetFaceVertIds(&faceVerts, faceId, tetVerts);

            pos0 = AMD::FmGetVertPosition(TetMesh, faceVerts.ids[0]);
            pos1 = AMD::FmGetVertPosition(TetMesh, faceVerts.ids[1]);
            pos2 = AMD::FmGetVertPosition(TetMesh, faceVerts.ids[2]);

            //normal = normalize(cross(pos1 - pos0, pos2 - pos0));

            // convert to Unreal coords
            AMD::FmVector3 tmp = pos0;
            pos0.x = -tmp.z;
            pos0.y = tmp.x;
            pos0.z = tmp.y;

            tmp = pos1;
            pos1.x = -tmp.z;
            pos1.y = tmp.x;
            pos1.z = tmp.y;

            tmp = pos2;
            pos2.x = -tmp.z;
            pos2.y = tmp.x;
            pos2.z = tmp.y;

            pos0 *= 100.0f;
            pos1 *= 100.0f;
            pos2 *= 100.0f;

            normal = normalize(cross(pos2 - pos0, pos1 - pos0));

            Vertices.Add(FVector(pos0.x, pos0.y, pos0.z));
            Vertices.Add(FVector(pos1.x, pos1.y, pos1.z));
            Vertices.Add(FVector(pos2.x, pos2.y, pos2.z));

            Triangles.Add(NumTriangles * 3);
            Triangles.Add(NumTriangles * 3 + 1);
            Triangles.Add(NumTriangles * 3 + 2);

            Normals.Add(FVector(normal.x, normal.y, normal.z));
            Normals.Add(FVector(normal.x, normal.y, normal.z));
            Normals.Add(FVector(normal.x, normal.y, normal.z));

            UV0.Add(FVector2D(0, 0));
            UV0.Add(FVector2D(10, 0));
            UV0.Add(FVector2D(0, 10));

            VertexColors.Add(Color);
            VertexColors.Add(Color);
            VertexColors.Add(Color);

            AMD::FmVector3 edge0 = normalize(pos1 - pos0);
            Tangents.Add(FProcMeshTangent(edge0.x, edge0.y, edge0.z));
            Tangents.Add(FProcMeshTangent(edge0.x, edge0.y, edge0.z));
            Tangents.Add(FProcMeshTangent(edge0.x, edge0.y, edge0.z));

            NumTriangles++;
        }
    }

    bool CreateMesh = false;

    if (NumTriangles > MaxTriangles)
    {
        MaxTriangles = NumTriangles * 2;
        CreateMesh = true;
    }

    for (int32 i = NumTriangles; i < MaxTriangles; i++)
    {
        Vertices.Add(FVector(0, 0, 0));
        Vertices.Add(FVector(0, 0, 0));
        Vertices.Add(FVector(0, 0, 0));

        Triangles.Add(i * 3);
        Triangles.Add(i * 3 + 1);
        Triangles.Add(i * 3 + 2);

        Normals.Add(FVector(0, 0, 1));
        Normals.Add(FVector(0, 0, 1));
        Normals.Add(FVector(0, 0, 1));

        UV0.Add(FVector2D(0, 0));
        UV0.Add(FVector2D(0, 0));
        UV0.Add(FVector2D(0, 0));

        VertexColors.Add(Color);
        VertexColors.Add(Color);
        VertexColors.Add(Color);

        Tangents.Add(FProcMeshTangent(1, 0, 0));
        Tangents.Add(FProcMeshTangent(1, 0, 0));
        Tangents.Add(FProcMeshTangent(1, 0, 0));
    }

    if (CreateMesh)
    {
        DebugTetMesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, false);
    }
    else
    {
        DebugTetMesh->UpdateMeshSection_LinearColor(0, Vertices, Normals, UV0, VertexColors, Tangents);
    }
}
#endif
