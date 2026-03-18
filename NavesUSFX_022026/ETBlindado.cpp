#include "ETBlindado.h"
#include "UObject/ConstructorHelpers.h"

AETBlindado::AETBlindado()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(2.5f, 2.5f, 1.5f));
    }
}