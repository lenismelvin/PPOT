#include "ETCamion.h"
#include "UObject/ConstructorHelpers.h"

AETCamion::AETCamion()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(3, 1, 1));
    }
}