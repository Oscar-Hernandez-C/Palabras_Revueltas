#ifndef PALABRA_H
#define PALABRA_H
#include <string>
#include "Enums.h"

class Palabra {
private:
    std::string palabraOriginal;
    std::string palabraRevuelta;
    TipoPalabra tipo;
    EstadoPalabra estado;

public:
    Palabra(std::string palabraOriginal = "", TipoPalabra tipo = TipoPalabra::INCOMPLETA);
    std::string getPalabraOriginal();
    std::string getPalabraRevuelta();
    TipoPalabra getTipo();
    EstadoPalabra getEstado();
    bool comprobarRespuesta(std::string respuesta);
    void marcarAcertada();
    void marcarFallada();
    void marcarPendiente();
};
#endif
