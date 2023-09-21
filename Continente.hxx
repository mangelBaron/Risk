#ifndef CONTINENTE_HXX
#define CONTINENTE_HXX

#include "Continente.h"

//-----------------------
  //METODOS
std::string Continente::displayInfo() {
    std::string info;

    info = "Nombre Continente: " + nombreContinente + "\n";

    for (std::list<Pais>::iterator it = paises.begin(); it != paises.end(); ++it) {
        info += it->displayInfo() + "\n";
    }

    return info;
}



#endif
