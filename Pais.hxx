#ifndef PAIS_HXX
#define PAIS_HXX

#include "Pais.h" // Include the main header for declarations




//-----------------------
    //METODOS
std::string Pais::displayInfo() {
    std::string info;

    info = "id Pais: " + std::to_string(idPais) + "\n";
    info += "Nombre Pais: " + nombrePais + "\n";
    info += "Cantidad Infanterias: " + std::to_string(cantidadInfanterias) + "\n";
    info += "Color Ocupacion: " + std::to_string(colorOcupacion) + "\n\n";

    return info;
}


    

    void Pais::getInfoPais() {
        std::cout<<"("<<idPais<<") "<<nombrePais<<std::endl;
        std::cout << "Cantidad Infanterias: " << cantidadInfanterias << std::endl;
        std::cout << "Color Ocupacion: " << colorOcupacion << std::endl<<std::endl;
    }

    

#endif
