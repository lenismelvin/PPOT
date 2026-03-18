#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "enemigo.generated.h"

UCLASS()
class NAVESUSFX_012026_API Aenemigo : public AActor
{
    GENERATED_BODY()

public:
    Aenemigo();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Malla
    UPROPERTY(VisibleAnywhere)
        UStaticMeshComponent* Malla;

    // Movimiento
    FVector Direccion;
    float Velocidad;

    // Vida
    int Vida;

    virtual void Mover(float DeltaTime);
    void Desaparecer();
};