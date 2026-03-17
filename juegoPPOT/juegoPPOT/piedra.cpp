#include "Piedra.h"

string Piedra::getNombre() {
    return "Piedra";
}

int Piedra::competir(Jugada* otra) {
    if (otra->getNombre() == "Piedra") return 0;
    if (otra->getNombre() == "Tijera") return 1;
    return -1; // pierde contra Papel
}