#ifndef FICHA_HXX
#define FICHA_HXX

#include "Ficha.h"
#include <iostream>


void Ficha::displayInfo() {

    std::cout<<"ficha: "<< nombre << std::endl;
    std::cout<<"equivale a "<<infanterias << " infanterias" << std::endl;
}

#endif