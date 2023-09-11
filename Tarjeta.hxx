#ifndef TARJETA_HXX
#define TARJETA_HXX

#include <iostream>
#include "Tarjeta.h"

void Tarjeta::displayInfo() {

    std::cout << "id de Tarjeta:  " << idTarjeta << std::endl;
    std::cout << "Territorio:  " << territorio << std::endl;
    std::cout << "cantidad de infanterias: " << infanterias << std::endl;
    std::cout << "Color de ocupación de la tarjeta: " << colorOcupacion << std::endl;

}

#endif
