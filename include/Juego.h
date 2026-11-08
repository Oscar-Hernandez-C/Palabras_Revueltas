#ifndef JUEGO_H
#define JUEGO_H
#include "Enums.h"
#include <string>
#include <iostream>

// Forward declarations para engañar al compilador y evitar la dependencia circular
class Jugador;
class Tablero;
class Catalogo;

class Juego {
protected:
    EstadoJuego estado;
    int nivelDificultad;
    int nivelJuego;
    // Se usan punteros obligatoriamente para contener clases que heredan de esta misma
    Jugador* jugador;
    Tablero* tablero;
    Catalogo* catalogo;

public:
    Juego() : estado(EN_MENU), nivelDificultad(1), nivelJuego(1), jugador(nullptr), tablero(nullptr), catalogo(nullptr) {}
    Juego(Jugador* j, Tablero* t, Catalogo* c, int dificultad, int nivel)
        : jugador(j), tablero(t), catalogo(c), nivelDificultad(dificultad), nivelJuego(nivel), estado(EN_MENU) {}
    virtual ~Juego() {}

    EstadoJuego getEstado() { return estado; }
    int getNivelDificultad() { return nivelDificultad; }
    int getNivelJuego() { return nivelJuego; }

    void iniciarPartida() { estado = EN_CURSO; }
    void mostrarPalabra() { std::cout << "Mostrando palabra...\n"; }
    bool comprobarRespuesta(std::string respuesta) { return true; }
    void asignarPuntos() {}
    void repetirPalabra() {}
    bool finPartida() { return estado == FINALIZADA; }
    void mostrarPuntaje() {}
};
#endif
