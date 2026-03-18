#include "ETTanque.h"
#include "UObject/ConstructorHelpers.h"

AETTanque::AETTanque()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(2, 2, 1));
    }
}