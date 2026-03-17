#ifndef JUGADA_H
#define JUGADA_H

#include <string>
using namespace std;

class Jugada {
public:
    virtual string getNombre() = 0;
    virtual int competir(Jugada* otra) = 0;
    // 1 gana, 0 empate, -1 pierde
};

#endif