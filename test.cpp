#include <iostream>
#include "Evidencia.h"

using namespace std;

int main() {
    Evidencia e1, e2, e3, e4, e5, e6;

    e1.nombreEvidencia = "No Status de la creatura";
    e1.tiempo = 3;

    e2.nombreEvidencia = "Testimonio de la creatura";
    e2.tiempo = 5;

    e3.nombreEvidencia = "Propio Testimoio de Victima";
    e3.tiempo = 2;

    e4.nombreEvidencia = "Diario de Victor";
    e4.tiempo = 4;

    e5.nombreEvidencia = "Testimonio de Padre Vander";
    e5.tiempo = 6;

    e6.nombreEvidencia = "Argumento Bien Comun";
    e6.tiempo = 1;

    // Mostrar todas
    e1.imprimir();
    e2.imprimir();
    e3.imprimir();
    e4.imprimir();
    e5.imprimir();
    e6.imprimir();

    return 0;
}
