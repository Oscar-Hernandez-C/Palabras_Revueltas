#include "Jugador.h"
#include <iostream>

using namespace std;


Jugador::Jugador() {
    nombre = "Invitado";
    puntos = 0;
    palabrasEncontrada = 0;
}


Jugador::Jugador(string nombreJugador) {
    nombre = nombreJugador;
    puntos = 0;
    palabrasEncontrada = 0;
}


string Jugador::getNombre() {
    return nombre;
}


void Jugador::setNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}


int Jugador::getPuntos() {
    return puntos;
}


int Jugador::getPalabrasEncontrada() {
    return palabrasEncontrada;
}


int Jugador::getScore() {
    return puntos;
}


void Jugador::acumularPuntos(int cantidad) {
    puntos += cantidad;
}


void Jugador::registrarAciertos() {
    palabrasEncontrada++;
}


void Jugador::reiniciarDatos() {
    puntos = 0;
    palabrasEncontrada = 0;
}
