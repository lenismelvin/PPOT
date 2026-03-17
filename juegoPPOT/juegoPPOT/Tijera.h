#ifndef TIJERA_H
#define TIJERA_H

#include "Jugadas.h"

class Tijera : public Jugada {
public:
    string getNombre();
    int competir(Jugada* otra);
};

#endif