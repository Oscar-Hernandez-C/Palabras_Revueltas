#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using namespace std;

class Jugador {
private:
    string nombre;
    int puntos;
    int palabrasEncontrada;

public:

    Jugador();
    Jugador(string nombre);


    string getNombre();
    void setNombre(string nombre);

    int getPuntos();
    int getPalabrasEncontrada();
    int getScore();

    void acumularPuntos(int cantidad);
    void registrarAciertos();
    void reiniciarDatos();
};

#endif
