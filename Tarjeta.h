//
// Created by FAM-BARON on 11/09/2023.
//

#ifndef ESTRUCT_COMP_TARJETA_H
#define ESTRUCT_COMP_TARJETA_H

#include <string>

class Tarjeta{
private:
    int idTarjeta;
    std::string territorio;
    int infanterias;
    int colorOcupacion;

public:
    Tarjeta(int idTarjeta, const std::string &territorio, int infanterias, int colorOcupacion) : idTarjeta(idTarjeta),
                                                                                                 territorio(territorio),
                                                                                                 infanterias(
                                                                                                         infanterias),
                                                                                                 colorOcupacion(
                                                                                                         colorOcupacion) {}

    int getIdTarjeta() const {
        return idTarjeta;
    }

    void setIdTarjeta(int idTarjeta) {
        Tarjeta::idTarjeta = idTarjeta;
    }

    const std::string &getTerritorio() const {
        return territorio;
    }

    void setTerritorio(const std::string &territorio) {
        Tarjeta::territorio = territorio;
    }

    int getInfanterias() const {
        return infanterias;
    }

    void setInfanterias(int infanterias) {
        Tarjeta::infanterias = infanterias;
    }

    int getColorOcupacion() const {
        return colorOcupacion;
    }

    void setColorOcupacion(int colorOcupacion) {
        Tarjeta::colorOcupacion = colorOcupacion;
    }


    void displayInfo();
};



#endif //ESTRUCT_COMP_TARJETA_H
