#pragma once

#include "CoreMinimal.h"
#include "enemigo.h"
#include "enemigoTerrestre.generated.h"

UCLASS()
class NAVESUSFX_012026_API AenemigoTerrestre : public Aenemigo
{
    GENERATED_BODY()

public:
    virtual void Mover(float DeltaTime) override;
};