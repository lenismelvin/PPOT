#include "enemigoTerrestre.h"

void AenemigoTerrestre::Mover(float DeltaTime)
{
    FVector Movimiento = FVector(1, 0, 0) * Velocidad * DeltaTime;
    Movimiento.Z = 0;
    SetActorLocation(GetActorLocation() + Movimiento);
}