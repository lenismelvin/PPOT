#include "SpawnerEnemigos.h"
#include "Engine/World.h"

// Importa tus clases
#include "EAHelicoptero.h"
#include "EADron.h"
#include "ETTanque.h"
#include "EAAvion.h"
#include "ETSoldado.h"
#include "ETCamion.h"
ASpawnerEnemigos::ASpawnerEnemigos()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ASpawnerEnemigos::BeginPlay()
{
    Super::BeginPlay();

    CrearCuadrilla1();

    GetWorld()->GetTimerManager().SetTimer(
        TimerHandle,
        this,
        &ASpawnerEnemigos::VerificarCuadrilla,
        2.0f,
        true
    );
}
void ASpawnerEnemigos::CrearCuadrilla1()
{
    for (int i = 0; i < 6; i++)
    {
        TSubclassOf<Aenemigo> TipoEnemigo;

        if (i % 3 == 0)
            TipoEnemigo = AEAHelicoptero::StaticClass();
        else if (i % 3 == 1)
            TipoEnemigo = AEADron::StaticClass();
        else
            TipoEnemigo = AEAAvion::StaticClass();

        Aenemigo* enemigo = GetWorld()->SpawnActor<Aenemigo>(
            TipoEnemigo,
            FVector(i * 0, 0, 200),
            FRotator::ZeroRotator
            );

        if (enemigo)
            Cuadrilla1.Add(enemigo);
    }
}
void ASpawnerEnemigos::CrearCuadrilla2()
{
    for (int i = 0; i < 6; i++)
    {
        TSubclassOf<Aenemigo> TipoEnemigo;

        if (i % 3 == 0)
            TipoEnemigo = AETTanque::StaticClass();
        else if (i % 3 == 1)
            TipoEnemigo = AETSoldado::StaticClass();
        else
            TipoEnemigo = AETCamion::StaticClass();

        Aenemigo* enemigo = GetWorld()->SpawnActor<Aenemigo>(
            TipoEnemigo,
            FVector(i * 300, 500, 0),
            FRotator::ZeroRotator
            );

        if (enemigo)
            Cuadrilla2.Add(enemigo);
    }
}
void ASpawnerEnemigos::VerificarCuadrilla()
{
    bool todosMuertos = true;

    for (Aenemigo* enemigo : Cuadrilla1)
    {
        if (enemigo && !enemigo->IsPendingKill())
        {
            todosMuertos = false;
            break;
        }
    }

    if (todosMuertos && Cuadrilla2.Num() == 0)
    {
        CrearCuadrilla2();
    }
}