#include "EADron.h"
#include "UObject/ConstructorHelpers.h"

AEADron::AEADron()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(0.8f));
    }
}