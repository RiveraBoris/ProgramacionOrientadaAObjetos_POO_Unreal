#include "Enemy.h"
#include "PointActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemy::AEnemy()
{
    PrimaryActorTick.bCanEverTick = true;

    EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EnemyMesh"));
    RootComponent = EnemyMesh;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> ConeAsset(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
    if (ConeAsset.Succeeded())
    {
        EnemyMesh->SetStaticMesh(ConeAsset.Object);
    }

    MovementSpeed = 300.0f;
    CurrentPointIndex = 0;
}

void AEnemy::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // The Tick function is now incredibly clean. 
    // It only triggers the movement logic if we have points assigned.
    if (PatrolPoints.Num() > 0)
    {
        GoTo(PatrolPoints[CurrentPointIndex], DeltaTime);
    }
}

// All the complexity is now encapsulated here
void AEnemy::GoTo(APointActor* Target, float DeltaTime)
{
    // Safety check in case a point in the array is empty/null in the editor
    if (Target == nullptr) return;

    FVector CurrentLocation = GetActorLocation();
    FVector TargetLocation = Target->GetActorLocation();

    // Check if we reached the target
    if (FVector::Dist(CurrentLocation, TargetLocation) <= 5.0f)
    {
        // We reached the point, cycle to the next one for the NEXT frame
        CurrentPointIndex = (CurrentPointIndex + 1) % PatrolPoints.Num();
    }
    else
    {
        // We need to move towards the target
        FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
        FVector NewLocation = CurrentLocation + (Direction * MovementSpeed * DeltaTime);
        SetActorLocation(NewLocation);
    }
}