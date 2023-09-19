cmake_minimum_required(VERSION 3.23)
project(Estruct_Comp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Estruct_Comp
        Continente.h
        Continente.hxx
        Jugador.h
        Jugador.hxx
        main.cpp
        Pais.h
        Pais.hxx
        Risk.h
        Risk.hxx Tarjeta.h Tarjeta.hxx Comodin.h Comodin.hxx
        Ficha.h
        Ficha.hxx)
