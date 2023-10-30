#ifndef PAIS_HXX
#define PAIS_HXX

#include "Pais.h" // Include the main header for declarations




//-----------------------
    //METODOS
std::string Pais::displayInfo() {
    std::string info;

    info = "id pais: " + std::to_string(idPais) + "\n";
    info += "nombre pais: " + nombrePais + "\n";
    info += "cantidad infanterias: " + std::to_string(cantidadInfanterias) + "\n";
    info += "color ocupacion: " + std::to_string(colorOcupacion) + "\n";

    // Si hay paises colindantes, agrega la información correspondiente.
    if (!paisesColindantes.empty()) {
        info += "paises colindantes: ";
        for (std::list<int>::iterator it = paisesColindantes.begin(); it != paisesColindantes.end(); ++it) {
            info += std::to_string(*it);
            if (std::next(it) != paisesColindantes.end()) {
                info += ",";
            }
        }
        info += "\n";
    }

    return info;
}


    

    void Pais::getInfoPais() {
        std::cout<<"("<<idPais<<") "<<nombrePais<<std::endl;
        std::cout << "Cantidad Infanterias: " << cantidadInfanterias << std::endl;
        std::cout << "Color Ocupacion: " << colorOcupacion << std::endl<<std::endl;
    }

int Pais::getIdPais() const {
    return idPais;
}

void Pais::setIdPais(int idPais) {
    Pais::idPais = idPais;
}

void Pais::setNombrePais(const std::string &nombrePais) {
    Pais::nombrePais = nombrePais;
}

void Pais::setPaisesColindantes(int paisColindante) {


        paisesColindantes.push_back(paisColindante);



}


#endif
