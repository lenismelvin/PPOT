#ifndef PIEDRA_H
#define PIEDRA_H

#include "Jugadas.h"
using namespace std;
class Piedra : public Jugada {
public:
    string getNombre();
    int competir(Jugada* otra);
};

#endif