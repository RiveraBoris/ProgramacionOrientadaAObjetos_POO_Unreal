// Fill out your copyright notice in the Description page of Project Settings.

#include "Enemy.h"
#include "PointActor.h" // Necesario para conocer la estructura de APointActor
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemy::AEnemy()
{
    // Habilitamos el Tick para que pueda actualizar su posición en cada frame
    PrimaryActorTick.bCanEverTick = true;

    // 1. Configuramos la Malla
    EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
    RootComponent = EnemyMesh;

    // Opcional: Cargamos la forma básica de un cono (pirámide) que viene por defecto en el motor.
    // Esto ahorra tener que asignar la malla manualmente en el editor para pruebas rápidas.
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
    if (ConeAsset.Succeeded())
    {
        EnemyMesh->SetStaticMesh(ConeAsset.Object);
    }

    // 2. Valores por defecto
    MovementSpeed = 300.0f; // 3 metros por segundo
    TargetPoint = nullptr;
}

void AEnemy::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Si tenemos un objetivo asignado, procedemos a movernos
    if (TargetPoint != nullptr)
    {
        FVector CurrentLocation = GetActorLocation();
        FVector TargetLocation = TargetPoint->GetActorLocation();

        // Verificamos la distancia para evitar que el objeto "tiemble" al llegar al punto exacto
        float DistanceToTarget = FVector::Dist(CurrentLocation, TargetLocation);

        if (DistanceToTarget > 5.0f) // Tolerancia de 5 unidades
        {
            // 1. Obtener el vector dirección: (Destino - Origen) y normalizarlo (longitud = 1)
            FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();

            // 2. Calcular la nueva posición (Velocidad * Tiempo)
            FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);

            // 3. Aplicar el movimiento
            SetActorLocation(NewLocation);

            // Opcional: Hacer que el enemigo rote para mirar hacia el punto
            // FRotator NewRotation = Direction.Rotation();
            // SetActorRotation(NewRotation);
        }
    }
}
