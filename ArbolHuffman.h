
#ifndef ESTRUCT_COMP_ARBOLHUFFMAN_CPP
#define ESTRUCT_COMP_ARBOLHUFFMAN_CPP

#include <deque>
#include <algorithm>
#include "NodoHuffman.h"
class ArbolHuffman{
public:
    NodoHuffman* root;
public:
    ArbolHuffman();

    explicit ArbolHuffman(NodoHuffman *root);

    void organizarDeque(std::deque<std::pair<std::string, int>>& pairDeque, NodoHuffman* nodoPadre);

    //Condicional size mayor a uno (while)
    //Parametros: Deque de pairs
    //Sacar primera dato del deque y creo nodo izquierdo
    //Sacar segundo dato del deque y creo nodo derecho
    //Crear nodo intermedio (padre) y se usa el constructor que usa solo la frecuencia
    //Insertar en el deque en su respectivo orden
    void llenarArbol(std::deque<std::pair<std::string, int>> pairDeque);



    std::string codificarTexto(const std::string& texto);
    void imprimirArbol(NodoHuffman* raiz);

    std::string codificarCaracter(NodoHuffman *raiz, char c, std::string codigoActual);
};

#endif
