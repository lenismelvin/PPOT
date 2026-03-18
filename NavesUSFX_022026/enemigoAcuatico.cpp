#include "enemigoAcuatico.h"

void AenemigoAcuatico::Mover(float DeltaTime)
{
    FVector Movimiento = FVector(1, 0, 0) * Velocidad * DeltaTime;
    Movimiento.Y += 20 * FMath::Sin(GetWorld()->TimeSeconds * 2);
    SetActorLocation(GetActorLocation() + Movimiento);
}