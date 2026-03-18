#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "enemigo.generated.h"

UCLASS()
class NAVESUSFX_012026_API Aenemigo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	Aenemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	FVector DireccionMovimiento;
	float Velocidad;

	UPROPERTY(VisibleAnywhere)
		class UStaticMeshComponent* Malla;

};