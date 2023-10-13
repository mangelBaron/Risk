//
// Created by FAM-BARON on 11/09/2023.
//

#ifndef ESTRUCT_COMP_TARJETA_H
#define ESTRUCT_COMP_TARJETA_H


#include "Ficha.h"

class Tarjeta{
private:
    int idTarjeta;
    std::string territorio;
    Ficha ficha;
    int colorOcupacion;

public:
    Tarjeta(int idTarjeta, const std::string &territorio, Ficha ficha, int colorOcupacion) : idTarjeta(idTarjeta),
                                                                                                 territorio(territorio),
                                                                                                 ficha(
                                                                                                         ficha),
                                                                                              colorOcupacion(
                                                                                                         colorOcupacion) {}


    Tarjeta(): idTarjeta(0), territorio(""), ficha((""),(0)), colorOcupacion(0){}

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


    int getColorOcupacion() const {
        return colorOcupacion;
    }

    void setColorOcupacion(int colorOcupacion) {
        Tarjeta::colorOcupacion = colorOcupacion;
    }

    const Ficha &getFicha() const;

    void setFicha(const Ficha &ficha);

    std::string displayInfo() ;


};



#endif //ESTRUCT_COMP_TARJETA_H
