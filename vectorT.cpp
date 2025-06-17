#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Vector con 6 opciones
    vector <string> evidencias = {
        "Huella dactilar",
        "Arma del crimen",
        "Cámara de seguridad",
        "Testigo presencial",
        "Documento sospechoso",
        "Mancha de sangre"
    };

    vector<string> seleccionadas;
    
    int opcion;

    // Repetir hasta seleccionar 6 veces
    for (int i = 0; i < 6; i++) {
        cout << "\nOpciones disponibles:\n";
        for (size_t j = 0; j < evidencias.size(); j++) {
            cout << j + 1 << ". " << evidencias[j] << endl;
        }

        cout << "Selecciona una opción (1-6): ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 6) {
            seleccionadas.push_back(evidencias[opcion - 1]);
        } else {
            cout << "Opción no válida. Intenta otra vez.\n";
            i--; // Para no contar una selección inválida
        }
    }

    // Mostrar las selecciones hechas
    cout << "\nEvidencias seleccionadas:\n";
    for (const string& evidencia : seleccionadas) {
        cout << "- " << evidencia << endl;
    }

    return 0;
}
