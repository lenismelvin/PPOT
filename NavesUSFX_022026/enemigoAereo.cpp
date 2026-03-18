#include "enemigoAereo.h"

void AenemigoAereo::Mover(float DeltaTime)
{
    FVector Movimiento = FVector(1, 0, 0) * Velocidad * DeltaTime;
    Movimiento.X += 50 * FMath::Sin(GetWorld()->TimeSeconds);
    SetActorLocation(GetActorLocation() + Movimiento);
}