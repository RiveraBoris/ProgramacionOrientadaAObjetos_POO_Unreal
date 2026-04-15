// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

// Declaración adelantada de la clase que creamos anteriormente
class APointActor;

UCLASS()
class OBJECTMOVEMENT_API AEnemy : public AActor
{
    GENERATED_BODY()

public:
    AEnemy();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Componente visual para la malla
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual")
        UStaticMeshComponent* EnemyMesh;

    // Puntero al actor objetivo. 
    // Usamos EditInstanceOnly porque las referencias a otros actores 
    // solo tienen sentido en las instancias que ya están colocadas en el nivel.
    UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Movement")
        APointActor* TargetPoint;

    // Velocidad de movimiento en unidades de Unreal (cm) por segundo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
        float MovementSpeed;
};
