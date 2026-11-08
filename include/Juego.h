#ifndef JUEGO_H
#define JUEGO_H
#include "Enums.h"
#include "Jugador.h"
#include "Tablero.h"
#include "Catalogo.h"

class Juego {
private:
    EstadoJuego estado;
    int nivelDificultad;
    int nivelJuego;
    Jugador jugador;
    Tablero tablero;
    Catalogo catalogo;

public:
    Juego(Jugador jugador, Tablero tablero, Catalogo catalogo, int dificultad, int nivel);
    EstadoJuego getEstado();
    int getNivelDificultad();
    int getNivelJuego();
    void iniciarPartida();
    void mostrarPalabra();
    bool comprobarRespuesta(std::string respuesta);
    void asignarPuntos();
    void repetirPalabra();
    bool finPartida();
    void mostrarPuntaje();
};
#endif
