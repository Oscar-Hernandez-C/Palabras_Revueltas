#include <iostream>
#include "Juego.h"

using namespace std;

int main() {
    int opcion;
    Juego miJuego;

    do {
        cout << "\n=== PALABRAS REVUELTAS ===\n";
        cout << "1. Iniciar Partida\n";
        cout << "2. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            miJuego.iniciarPartida();
            miJuego.ejecutar();
        }
    } while (opcion != 2);

    cout << "¡Gracias por jugar!\n";
    return 0;
}
