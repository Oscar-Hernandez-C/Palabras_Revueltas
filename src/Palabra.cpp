#include "Palabra.h"

Palabra::Palabra(std::string palabraOriginal, TipoPalabra tipo)
    : palabraOriginal(palabraOriginal), tipo(tipo), estado(EstadoPalabra::PENDIENTE) {}

std::string Palabra::getPalabraOriginal() { return palabraOriginal; }
std::string Palabra::getPalabraRevuelta() { return palabraRevuelta; }
TipoPalabra Palabra::getTipo() { return tipo; }
EstadoPalabra Palabra::getEstado() { return estado; }
bool Palabra::comprobarRespuesta(std::string respuesta) { return respuesta == palabraOriginal; }
void Palabra::marcarAcertada() { estado = EstadoPalabra::ACERTADA; }
void Palabra::marcarFallada() { estado = EstadoPalabra::FALLADA; }
void Palabra::marcarPendiente() { estado = EstadoPalabra::PENDIENTE; }
