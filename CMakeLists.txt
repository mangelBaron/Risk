cmake_minimum_required(VERSION 3.23)
project(Estruct_Comp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Estruct_Comp
        Comodin.h
        Comodin.hxx
        Continente.h
        Continente.hxx
        Ficha.h
        Ficha.hxx
        Jugador.h
        Jugador.hxx
        main.cpp
        Pais.h
        Pais.hxx
        Risk.h
        Risk.hxx
        Tarjeta.h
        Tarjeta.hxx
        NodoHuffman.h
        NodoHuffman.cpp
        ArbolHuffman.h
        ArbolHuffman.cpp
        NodoHuffman.h
        NodoHuffman.cpp
        ArbolHuffman.h
        ArbolHuffman.cpp)
