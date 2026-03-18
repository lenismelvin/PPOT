#include "enemigo.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
// Sets default values
Aenemigo::Aenemigo()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    // Crear la malla
    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Malla"));
    RootComponent = Malla;

    // Cargar una malla básica
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
    }

    // Ajustes visuales
    Malla->SetWorldScale3D(FVector(1.5f));
    Malla->SetRelativeRotation(FRotator(0.f, 0.f, 90.f));

    // Movimiento
    Velocidad = 200.0f;
    DireccionMovimiento = FVector(1, 0, 0);

}

// Called when the game starts or when spawned
void Aenemigo::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void Aenemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    FVector NuevaPosicion = GetActorLocation() + (DireccionMovimiento * Velocidad * DeltaTime);
    SetActorLocation(NuevaPosicion);

    // Cambio de dirección aleatorio
    if (FMath::RandRange(0, 100) < 2)
    {
        DireccionMovimiento = FVector(
            FMath::RandRange(-1, 1),
            FMath::RandRange(-1, 1),
            0
        ).GetSafeNormal();
    }
}