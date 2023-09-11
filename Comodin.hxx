#ifndef COMODIN_HXX
#define COMODIN_HXX

#include <iostream>
#include "Comodin.h"


void Comodin::displayInfo(){
    std::cout<<"Id del comodin: "<< idComodin <<std::endl;
    std::cout<<"Cantidad de infanterias: "<< infanterias <<std::endl;
    std::cout<<"Color de ocupación del comodin: "<< colorOcupacion <<std::endl;
}

#endif
