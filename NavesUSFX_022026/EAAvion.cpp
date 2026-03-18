#include "EAAvion.h"
#include "UObject/ConstructorHelpers.h"

AEAAvion::AEAAvion()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(2.0f, 0.5f, 0.5f));
    }
}