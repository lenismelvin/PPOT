#include "enemigo.h"

Aenemigo::Aenemigo()
{
    PrimaryActorTick.bCanEverTick = true;

    Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    RootComponent = Malla;

    Velocidad = 70.0f;
    Vida = 100;
    Direccion = FVector(1, 0, 0);
}

void Aenemigo::BeginPlay()
{
    Super::BeginPlay();
    FTimerHandle TempHandle;

    GetWorld()->GetTimerManager().SetTimer(TempHandle, this, &Aenemigo::Desaparecer, 6.0f, false);
}


void Aenemigo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    Mover(DeltaTime);
}

void Aenemigo::Mover(float DeltaTime)
{
    FVector NuevaPos = GetActorLocation() + (Direccion * Velocidad * DeltaTime);
    SetActorLocation(NuevaPos);
}

void Aenemigo::Desaparecer()
{
    Destroy();
}