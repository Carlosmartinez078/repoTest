#include <iostream>
#include "headerFiles/Jugador.h"
#include <string>

using namespace std;


void  Jugador::name(){
    cout << "Por favor ingresa tu nombre \n";
    getline (cin, namePlayer);
}



void Jugador::showName(){
    cout << namePlayer << endl;
}