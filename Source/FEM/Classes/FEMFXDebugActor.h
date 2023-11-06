// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#define ENABLE_DEBUG_ACTOR 1

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FEMFXScene.h"
#if ENABLE_DEBUG_ACTOR
#include "ProceduralMeshComponent.h"
#endif
#include "FEMFXDebugActor.generated.h"

UCLASS()
class FEM_API AFEMFXDebugActor : public AActor
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (InlineEditCoditionToggle))
    bool bOverride_FEMScene;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bOverride_FEMScene"))
    AFEMFXScene* Scene;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FEM", meta = (editcondition = "bOverride_FEMScene"))
    FString SceneName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FEM")
    bool bEnable;

    // Sets default values for this actor's properties
    AFEMFXDebugActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

private:
#if ENABLE_DEBUG_ACTOR
    void UpdateDebugTetMesh();

    UProceduralMeshComponent* DebugTetMesh;
    int32 MaxTriangles;
#endif
};
