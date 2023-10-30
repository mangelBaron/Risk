#ifndef JUGADOR_HXX
#define JUGADOR_HXX

#include "Jugador.h"
#include <iostream>



//-----------------------
     //METODOS


std::string Jugador::displayInfo() {
    std::string info;

    info = "id jugador: " + std::to_string(idJugador) + "\n"
           + "nombre: " + nombre + "\n"
           + "color: " + std::to_string(color) + "\n"
           + "unidades infanteria: " + std::to_string(unidadesInfanteria);

    return info;
}

void Jugador::setIdJugador(int idJugador) {
    Jugador::idJugador = idJugador;
}

void Jugador::setNombre(const std::string &nombre) {
    Jugador::nombre = nombre;
}

void Jugador::setColor(int color) {
    Jugador::color = color;
}


#endif
