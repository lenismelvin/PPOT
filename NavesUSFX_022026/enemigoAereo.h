#pragma once

#include "CoreMinimal.h"
#include "enemigo.h"
#include "enemigoAereo.generated.h"

UCLASS()
class NAVESUSFX_012026_API AenemigoAereo : public Aenemigo
{
    GENERATED_BODY()

public:
    virtual void Mover(float DeltaTime) override;
};