
#ifndef ESTRUCT_COMP_NODOHUFFMAN_H
#define ESTRUCT_COMP_NODOHUFFMAN_H

#include <string>

class NodoHuffman{

public:
    std::pair<std::string, int> dato;
    NodoHuffman* izquierdo;
    NodoHuffman* derecho;


    NodoHuffman(const std::pair<std::string, int> &dato);


    NodoHuffman(int frecuencia);





};

#endif //ESTRUCT_COMP_NODOHUFFMAN_H
