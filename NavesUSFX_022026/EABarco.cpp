#include "EABarco.h"
#include "UObject/ConstructorHelpers.h"

AEABarco::AEABarco()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(3, 2, 1));
    }
}