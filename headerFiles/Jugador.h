#ifndef jugador_h
#define jugador_h
#include <iostream>
#include <string>

using namespace std;

struct Jugador {
    string namePlayer;
    int puntosMoralidadTotales;
    int puntosJuiciosTotales;
    void name();
    void showName();
};

#endif