#include "headerFiles/evidenceSelect.h"
#include "headerFiles/evidencia.h"

using namespace std;

void selectEvidence(vector<Evidencia>& seleccionadas, int& totalPoints) {
    int optionEvidencia2;
    char confirm2;


    cout << "Con esto en mente, tu que piensas" /*usuario*/ << " que evidencia podriamos usar para mostrar mi inocencia en este caso. 1-6 \n";

    do {
        cout << "Selecciona una opción (1-6) o 0 para salir: \n";
        cout << "1. Nombre de la evidencia: No status de la creatura. 6 puntos \n2. Nombre de la evidencia: Testimonio de la creatura. 8 puntos \n3. Nombre de la evidencia: Propio Testimonio de la Victima. 2 puntos \n";
        cout << "4. Nombre de la evidencia: Diario de Victor. 6 puntos \n5. Nombre de la evidencia: Testimonio de Padre Vander. 2 puntos \n6. Nombre de la evidencia: Argumento bien comun. 4 puntos \n";
        cout << "Total puntos acumulados: " << totalPoints << endl;

        cin >> optionEvidencia2;

        if (optionEvidencia2 == 0) {
            cout << "Estás seguro que deseas salir? (s/n): \n";
            cin >> confirm2;
            confirm2 = tolower (confirm2);
            if (confirm2 == 's') {
                break; 
            } else {
                continue;
            }
        }

        switch (optionEvidencia2) {
            case 1:
                seleccionadas.push_back(C1E1);
                totalPoints += C1E1.puntosPosibles = 6;
                break;
            case 2:
                seleccionadas.push_back(C1E2);
                totalPoints += C1E2.puntosPosibles = 8;
                break;
            case 3:
                seleccionadas.push_back(C1E3);
                totalPoints += C1E3.puntosPosibles = 2;
                break;
            case 4:
                seleccionadas.push_back(C1E4);
                totalPoints += C1E4.puntosPosibles = 6;
                break;
            case 5:
                seleccionadas.push_back(C1E5);
                totalPoints += C1E5.puntosPosibles = 2;
                break;
            case 6:
                seleccionadas.push_back(C1E6);
                totalPoints += C1E6.puntosPosibles = 4;
                break;
            default:
                cout << "Opción invalida. Elige una opción entre 1-6.\n";
        }

        if (totalPoints > 23) {
            cout << "Sobrepasaste el límite de 23 puntos.\n";
            seleccionadas.clear();
            totalPoints = 0;
        }

    } while (true);

    cout << "Selección finalizada. Total de puntos: " << totalPoints << endl;
}