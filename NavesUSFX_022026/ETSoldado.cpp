#include "ETSoldado.h"
#include "UObject/ConstructorHelpers.h"

AETSoldado::AETSoldado()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Capsule.Shape_Capsule")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
    }
}