#ifndef PAPEL_H
#define PAPEL_H

#include "Jugadas.h"

class Papel : public Jugada {
public:
    string getNombre();
    int competir(Jugada* otra);
};

#endif
