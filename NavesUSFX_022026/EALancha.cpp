#include "EALancha.h"
#include "UObject/ConstructorHelpers.h"

AEALancha::AEALancha()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
    }
}