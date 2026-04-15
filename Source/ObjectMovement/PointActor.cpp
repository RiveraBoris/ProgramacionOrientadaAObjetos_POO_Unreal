// Fill out your copyright notice in the Description page of Project Settings.

#include "PointActor.h"
#include "Components/ArrowComponent.h" // Required for the Arrow Component

APointActor::APointActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create the Arrow Component
    PointHandle = CreateDefaultSubobject<UArrowComponent>(TEXT("PointHandle"));

    // Set the Arrow as the Root Component
    // Now, clicking the arrow in the viewport lets you move the entire Actor!
    RootComponent = PointHandle;
}

// Called when the game starts or when spawned
void APointActor::BeginPlay()
{
    Super::BeginPlay();

};

// Called every frame
void APointActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

};

