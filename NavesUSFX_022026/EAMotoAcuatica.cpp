#include "EAMotoAcuatica.h"
#include "UObject/ConstructorHelpers.h"

AEAMotoAcuatica::AEAMotoAcuatica()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(
        TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere")
    );

    if (MeshAsset.Succeeded())
    {
        Malla->SetStaticMesh(MeshAsset.Object);
        Malla->SetWorldScale3D(FVector(0.7f));
    }
}