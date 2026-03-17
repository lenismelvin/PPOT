#include "Tijera.h"

string Tijera::getNombre() {
    return "Tijera";
}

int Tijera::competir(Jugada* otra) {
    if (otra->getNombre() == "Tijera") return 0;
    if (otra->getNombre() == "Papel") return 1;
    return -1; // pierde contra Piedra
}