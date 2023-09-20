#ifndef TARJETA_HXX
#define TARJETA_HXX

#include <iostream>
#include "Tarjeta.h"

void Tarjeta::displayInfo() {

    std::cout << "id de Tarjeta:  " << idTarjeta << std::endl;
    std::cout << "Territorio:  " << territorio << std::endl;
    std::cout << "Ficha: " << ficha.getNombre() << std::endl;
    std::cout << "Color de ocupación de la tarjeta: " << colorOcupacion << std::endl;

}

const Ficha &Tarjeta::getFicha() const {
    return ficha;
}

void Tarjeta::setFicha(const Ficha &ficha) {
    Tarjeta::ficha = ficha;
}

#endif
