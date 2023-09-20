#ifndef FICHA_HXX
#define FICHA_HXX

#include "Ficha.h"
#include <iostream>


void Ficha::displayInfo(){

    std::cout<<"Ficha: "<< nombre << std::endl;
    std::cout<<"Equivale a "<<infanterias << " infanterias" << std::endl;
}

#endif