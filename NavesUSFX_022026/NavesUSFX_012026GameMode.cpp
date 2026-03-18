#include "NavesUSFX_012026GameMode.h"
#include "NavesUSFX_012026Character.h"
#include "Enemigo.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

ANavesUSFX_012026GameMode::ANavesUSFX_012026GameMode()
{
    // set default pawn class to our Blueprinted character
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
    if (PlayerPawnBPClass.Class != NULL)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }
}
