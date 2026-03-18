#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "enemigo.h"
#include "SpawnerEnemigos.generated.h"

UCLASS()
class NAVESUSFX_012026_API ASpawnerEnemigos : public AActor
{
    GENERATED_BODY()

public:
    ASpawnerEnemigos();

protected:
    virtual void BeginPlay() override;

public:
    TArray<Aenemigo*> Cuadrilla1;
    TArray<Aenemigo*> Cuadrilla2;

    FTimerHandle TimerHandle;

    void CrearCuadrilla1();
    void CrearCuadrilla2();
    void VerificarCuadrilla();
};