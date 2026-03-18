#pragma once

#include "CoreMinimal.h"
#include "enemigo.h"
#include "enemigoAcuatico.generated.h"

UCLASS()
class NAVESUSFX_012026_API AenemigoAcuatico : public Aenemigo
{
    GENERATED_BODY()

public:
    virtual void Mover(float DeltaTime) override;
};