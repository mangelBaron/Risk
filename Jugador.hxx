#ifndef JUGADOR_HXX
#define JUGADOR_HXX

#include "Jugador.h"
#include <iostream>



//-----------------------
     //METODOS


std::string Jugador::displayInfo() {
    std::string info;

    info = "idJugador: " + std::to_string(idJugador) + "\n"
           + "nombre: " + nombre + "\n"
           + "color: " + std::to_string(color) + "\n"
           + "unidadesInfanteria: " + std::to_string(unidadesInfanteria);

    return info;
}
    

#endif
