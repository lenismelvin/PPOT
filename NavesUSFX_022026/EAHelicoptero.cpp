#include "EAHelicoptero.h"
#include "UObject/ConstructorHelpers.h"

AEAHelicoptero::AEAHelicoptero()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(1.5f));
    }
}