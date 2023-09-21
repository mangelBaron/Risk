#ifndef COMODIN_HXX
#define COMODIN_HXX

#include <iostream>
#include "Comodin.h"


std::string Comodin::displayInfo() {
    std::string info;

    info = "Id del comodin: " + std::to_string(idComodin) + "\n";
    info += "Cantidad de infanterias: " + std::to_string(infanterias) + "\n";
    info += "Color de ocupación del comodin: " + std::to_string(colorOcupacion) + "\n";

    return info;
}

#endif
