// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PointActor.generated.h"

class UArrowComponent;

UCLASS()
class OBJECTMOVEMENT_API APointActor : public AActor
{
    GENERATED_BODY()

public:
    APointActor();

    virtual void Tick(float DeltaTime) override;

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, Category = "Reference")
        UArrowComponent* PointHandle;
};