#ifndef TARJETA_HXX
#define TARJETA_HXX

#include <iostream>
#include "Tarjeta.h"

std::string Tarjeta::displayInfo() {
    std::string info;

    info = "id de Tarjeta: " + std::to_string(idTarjeta) + "\n";
    info += "Territorio: " + territorio + "\n";
    info += "Ficha: " + ficha.getNombre() + "\n";
    info += "Color de ocupación de la tarjeta: " + std::to_string(colorOcupacion) + "\n";

    return info;
}

const Ficha &Tarjeta::getFicha() const {
    return ficha;
}

void Tarjeta::setFicha(const Ficha &ficha) {
    Tarjeta::ficha = ficha;
}


#endif
