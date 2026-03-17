#include "papel.h"

string Papel::getNombre() {
    return "Papel";
}

int Papel::competir(Jugada* otra) {
    if (otra->getNombre() == "papel") return 0;
    if (otra->getNombre() == "piedra") return 1;
    return -1; // pierde contra Tijera
}