#ifndef CONTINENTE_HXX
#define CONTINENTE_HXX

#include "Continente.h"

//-----------------------
  //METODOS
std::string Continente::displayInfo() {
    std::string info;

    info = "id de Continente: " + std::to_string(idContinente) + "\n" +
           "Nombre Continente: " + nombreContinente + "\n";

    for (std::list<Pais>::iterator it = paises.begin(); it != paises.end(); ++it) {
        info += it->displayInfo() + "\n";
    }

    return info;
}

void Continente::setIdContinente(int idContinente) {
    Continente::idContinente = idContinente;
}

void Continente::setNombreContinente(const std::string &nombreContinente) {
    Continente::nombreContinente = nombreContinente;
}

void Continente::setPaises(const std::list<Pais> &paises) {
    Continente::paises = paises;
}


#endif
