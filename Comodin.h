//
// Created by FAM-BARON on 11/09/2023.
//

#ifndef ESTRUCT_COMP_COMODIN_H
#define ESTRUCT_COMP_COMODIN_H


class Comodin{

private:
    int idComodin;
    int infanterias = 12;
    int colorOcupacion;
public:

    Comodin(int idComodin, int colorOcupacion) : idComodin(idComodin),
                                                                  colorOcupacion(colorOcupacion) {}

    int getIdComodin() const {
        return idComodin;
    }

    void setIdComodin(int idComodin) {
        Comodin::idComodin = idComodin;
    }


    int getColorOcupacion() const {
        return colorOcupacion;
    }

    void setColorOcupacion(int colorOcupacion) {
        Comodin::colorOcupacion = colorOcupacion;
    }

    void displayInfo();
};

#endif //ESTRUCT_COMP_COMODIN_H
