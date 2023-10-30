#ifndef RISK_HXX
#define RISK_HXX
#include <stdlib.h>
#include "Risk.h"
#include "ArbolHuffman.h"
#include <fstream>
#include <sstream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <deque>


void Risk::inicializar(){
    int cantidadJugadores;
    int cantidadFichas;
    bool flag;
    std::string nombre;
    int color;
    int opcionColor=0;
    std::list<int> coloresList = {1, 2, 3, 4, 5, 6};
    int contador=0;
    std::list<int> turnosJugadores;
    int consolaContinente;
    int consolaPais;


    continentes.push_back(
        Continente(0, "america del Norte", {
            Pais(1,"alaska", 0, 0, {6,2,22}),
            Pais(2,"alberta", 0, 0, {1,2,6,9,7}),
            Pais(3,"america Central", 0, 0, {32,9,4}),
            Pais(4,"estados unidos orientales", 0, 0, {3,9,7,8}),
            Pais(5,"groenlandia", 0, 0, {6,7,8,11}),
            Pais(6,"territorio Noroccidental", 0, 0, {1,2,7,5}),
            Pais(7,"ontario", 0, 0, {6,2,9,4,8,5}),
            Pais(8,"quebec", 0, 0, {5,7,4}),
            Pais(9,"estados unidos cccidentales", 0, 0, {2,7,4,3}),
        })
    );

    continentes.push_back(
        Continente(1, "europa", {
            Pais(10,"gran bretania", 0, 0, {11,13,12,16}),
            Pais(11,"islandia", 0, 0, {5,13,10}),
            Pais(12,"europa del norte", 0, 0, {10,16,14,13}),
            Pais(13,"escandinavia", 0, 0, {11,10,12,15}),
            Pais(14,"europa del sur", 0, 0, {12,16,15,23,37,35}),
            Pais(15,"ucrania", 0, 0, {13,12,14,23,17,27}),
            Pais(16,"europa occidental", 0, 0, {10,12,14,37}),
        })
    );

    continentes.push_back(
        Continente(2, "asia", {
            Pais(17,"afghanistan", 0, 0, {18,19,27,23,15}),
            Pais(18,"china", 0, 0, {19,25,24,17}),
            Pais(19,"india", 0, 0, {25,18,17,23}),
            Pais(20,"irkutsk", 0, 0, {24,22,28,26}),
            Pais(21,"japon", 0, 0, {24,22}),
            Pais(22,"kamchatka", 0, 0, {21,20,24,28}),
            Pais(23,"medio oriente", 0, 0, {17,19,15,35,14}),
            Pais(24,"mongolia", 0, 0, {22,20,21,18,26}),
            Pais(25,"siam", 0, 0, {40,18,19}),
            Pais(26,"siberia", 0, 0, {20,18,27,28,24}),
            Pais(27,"ural", 0, 0, {17,15,26}),
            Pais(28,"yakutsk", 0, 0, {26,20,22,18}),
        })
    );

    continentes.push_back(
        Continente(3, "america del Sur", {
            Pais(29,"argentina", 0, 0, {30,31}),
            Pais(30,"brasil", 0, 0, {29,31,32,37}),
            Pais(31,"peru", 0, 0, {29,30,32}),
            Pais(32,"venezuela", 0, 0, {30,31,3}),
        })
    );

    continentes.push_back(
        Continente(4, "africa", {
            Pais(33,"congo", 0, 0, {34,37,38}),
            Pais(34,"africa oriental", 0, 0, {33,35,36,37,38}),
            Pais(35,"egipto", 0, 0, {34,37,23,14}),
            Pais(36,"madagascar", 0, 0, {34,38}),
            Pais(37,"africa del norte", 0, 0, {33,34,35,30,14,16}),
            Pais(38,"africa del sur", 0, 0, {33,34,36}),
        })
    );

    continentes.push_back(
        Continente(5,"australia", {
            Pais(39,"australia oriental", 0, 0, {41,42}),
            Pais(40,"indonesia", 0, 0, {41,42,25}),
            Pais(41,"nueva guinea", 0, 0, {39,40,42}),
            Pais(42,"australia occidental", 0, 0, {39,40,41}),
        })
    );

    //TARJETAS

      tarjetas.push_back(Tarjeta{1, "alaska", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{2, "alberta", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{3, "america central", Ficha("artilleria",10), 0});
      tarjetas.push_back(Tarjeta{4, "estados unidos orientales", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{5, "groenlandia", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{6, "territorio noroccidental", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{7, "ontario", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{8, "quebec", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{9, "estado unidos occidentales", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{10, "gran bretania", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{11,"islandia", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{12, "europa del norte", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{13, "escandinavia", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{14, "europa del sur", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{15, "ucrania", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{16, "europa occidental", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{17, "afghanistan", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{18, "china", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{19, "india", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{20, "irkutsk", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{21, "japon", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{22, "kamchatka", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{   23, "medio Oriente", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{24, "mongolia", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{25, "siam", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{26, "siberia", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{27, "ural", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{28, "yakutsk", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{29, "argentina", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{30, "brasil", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{31, "peru", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{32, "venezuela", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{33, "congo", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{34, "africa Oriental", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{35, "egipto", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{36, "madagascar", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{37, "africa del Norte", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{38, "africa del Sur", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{39, "australia Oriental", Ficha("artilleria", 10), 0});
      tarjetas.push_back(Tarjeta{40, "indonesia", Ficha("infanteria", 1), 0});
      tarjetas.push_back(Tarjeta{41, "nueva Guinea", Ficha("caballeria", 5), 0});
      tarjetas.push_back(Tarjeta{42, "australia occidental", Ficha("artilleria", 10), 0});


      comodines.push_back(Comodin{1, 0});
      comodines.push_back(Comodin{2, 0});
      comodines.push_back(Comodin{3, 0});



   

    system("cls");
    std::cout<<"(Inicializacion satisfactoria) El juego se ha inicializado correctamente!"<<std::endl<<std::endl;
    std::cout<<"Ingrese la cantidad de jugadores: ";
    std::cin>>cantidadJugadores;
    if(cantidadJugadores<2||cantidadJugadores>6){
      std::cout<<"No cumple la cantidad de jugadores necesarios"<<std::endl<<std::endl;
      inicio_J=false;
      return;
    }

 
   
    for(int i=1;i<cantidadJugadores+1;i++){
      flag=false;

    system("cls");
      std::cout<<"Jugador "<<i<<" ingrese su nombre: ";
      std::cin>>nombre;
   

        std::cout<<"\nSELECCION DEL COLOR"<<std::endl<<std::endl;
     

      do{
        for (std::list<int>::iterator itdor = coloresList.begin(); itdor != coloresList.end();       ++itdor){
          if(*itdor==1){
            std::cout<<"1.- Verde"<<std::endl;
          }
          if(*itdor==2){
            std::cout<<"2.- Azul"<<std::endl;
          }
          if(*itdor==3){
            std::cout<<"3.- Rojo"<<std::endl;
          }
          if(*itdor==4){
            std::cout<<"4.- Amarillo"<<std::endl;
          }
          if(*itdor==5){
            std::cout<<"5.- Negro"<<std::endl;
          }
          if(*itdor==6){
            std::cout<<"6.- Gris"<<std::endl;
          }
         
        }
        std::cout<<"\nJugador "<<i<<" digite alguno de los colores: ";  // (verde, azul, rojo, amarillo, negro y gris)
      std::cin>>opcionColor;

      for (std::list<int>::iterator itdor = coloresList.begin(); itdor != coloresList.end(); ++itdor) {
        if (*itdor == opcionColor) {
          flag=true;
          itdor = coloresList.erase(itdor);  // erase returns the next valid iterator
        }
      }
        if(flag==false){
          std::cout<<"Color invalido"<<std::endl;
        }
      }while(opcionColor<1||opcionColor>6||flag==false);

      if(cantidadJugadores==3){
        turnosJugadores = {1, 2, 3};
        cantidadFichas=35;
        jugadores.push_back(Jugador(i,nombre,opcionColor,35));
       
      }
      if(cantidadJugadores==4){
        turnosJugadores = {1, 2, 3, 4};
        cantidadFichas=30;
        jugadores.push_back(Jugador(i,nombre,opcionColor,30));
       
      }
      if(cantidadJugadores==5){
        turnosJugadores = {1, 2, 3, 4, 5};
        cantidadFichas=25;
        jugadores.push_back(Jugador(i,nombre,opcionColor,25));
       
      }
      if(cantidadJugadores==6){
        turnosJugadores = {1, 2, 3, 4, 5, 6};
        cantidadFichas=20;
        jugadores.push_back(Jugador(i,nombre,opcionColor,20));
       
      }
    }

    //MOSTRAR LA INTERFAZ PARA ELEGIR DONDE PONER INFANTERIA

    system("cls");

    std::cout<<"SELECCION DEL CONTINENTE!"<<std::endl;

    std::list<int>::iterator itdorT = turnosJugadores.begin();

    std::list<Jugador>::iterator itdorJugadores = jugadores.begin();

   

   
    //42 iteraciones para agregar 1 infanteria en todos los paises
    for(int i=0;i<3;i++){
      do{
      contador=0;
      //std::cout<<"\nJugador "<<*itdorT <<" estos son los continentes"<<std::endl<<std::endl;
     
      std::cout<<"\nJugador "<<itdorJugadores->getIdJugador()<<" estos son los continentes\n"<<std::endl;
     
      for (std::list<Continente>::iterator itdor = continentes.begin(); itdor != continentes.end();++itdor) {
        std::cout<<"("<<contador<<") "<<itdor->getNombreContinente()<<"\n";
        contador++;
      }
      std::cout<<"\nDigite alguno de los continentes: ";
      std::cin>>consolaContinente;

      std::cout<<std::endl;
   
    system("cls");

      if(consolaContinente == 0){
        std::cout<<"AMERICA DEL NORTE"<<std::endl<<std::endl;
      }else  if(consolaContinente == 1){
        std::cout<<"EUROPA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 2){
        std::cout<<"ASIA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 3){
        std::cout<<"AMERICA DEL SUR"<<std::endl<<std::endl;
      }else  if(consolaContinente == 4){
        std::cout<<"AFRICA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 5){
        std::cout<<"AUSTRALIA"<<std::endl<<std::endl;
      }

     
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
       
        if(itdorCont->getIdContinente()==consolaContinente){
          itdorCont->getPaises();
       
          flag=false;
          std::cout<<"Digite el pais que desea ocupar: ";
          std::cin>>consolaPais;
          //Funcion dentro de continente que itere sobre la lista de paises hasta que encuentre el
          //seleccionado por el usuario y modofique los datos respectivos

         
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
     
            if(itdorP->getIDPais()==consolaPais){
              flag=true;
              if(itdorP->getCantidadInfanterias()==0){

             
               
                itdorP->setColorOcupacion(itdorJugadores->getColor());
                itdorP->setCantidadInfanterias(itdorP->getCantidadInfanterias()+1);
                itdorJugadores->setUnidadesInfanteria(itdorJugadores->getUnidadesInfanteria()-1);

                system("cls");
                std::cout<<"\nEl jugador "<< itdorJugadores->getIdJugador()<<" reclamo el territorio "<<itdorP->getNombrePais()<<"!"<<std::endl;
                itdorJugadores->setCartas(itdorJugadores->getCartas()+1);

                      for (std::list<Tarjeta>::iterator itdorTarjeta = tarjetas.begin(); itdorTarjeta != tarjetas.end(); itdorTarjeta++) {
                          if(itdorTarjeta->getIdTarjeta() == consolaPais && itdorTarjeta->getColorOcupacion()==0) {
                              itdorTarjeta->setColorOcupacion(itdorJugadores->getColor());
                              itdorTarjeta->getColorOcupacion();

                              std::cout<<"Se reclamo la tarjeta de "<<itdorTarjeta->getTerritorio()<<" exitosamente!"<<std::endl;
                          }
                      }

                if(itdorJugadores->getIdJugador()==jugadores.end()->getIdJugador()){
                  itdorJugadores=jugadores.begin();
                }else{
                  itdorJugadores++;
                }
              }else{
                 system("cls");
                std::cout<<"El territorio "<<itdorP->getNombrePais()<<" ya fue reclamado por el color "<<itdorP->getColorOcupacion()<<std::endl;
                flag=false;                
              }


          }

          }

      }
    }
      //ADELANTAR UN TURNO, HACE UN CONDICIONAL QUE REVISE SI EL TURNO ES IGUAL AL FINAL DE LA LISTA,
      //VUELVA A LA POSICION 1.
        }while(flag==false);
    }

   
    std::cout<<"\nSe han ocupado todos los territorios!!\n";
    std::cout<<"\nA continuacion cada jugador pondra de a una infanteria en cada uno de sus territorios!!\n";





int flagAux=false;
int consola;

    //---*

//CAMBIARLO POR LA CANTIDAD TOTAL DE TROPAS
itdorJugadores=jugadores.begin();
      do{
      //MUESTRA TERRENOS DONDE TIENE DOMINIOS
   

    std::cout<<"\nJugador "<<itdorJugadores->getIdJugador()<<" estos son sus territorios\n"<<std::endl;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
        if(itdorP->getColorOcupacion()==itdorJugadores->getColor()){
          std::cout<<"("<<itdorCont->getIdContinente()<<") "<<itdorCont->getNombreContinente()<<"\n";
          break;
        }
      }
    }

      std::cout<<"\nDigite alguno de los continentes: ";
      std::cin>>consolaContinente;
      std::cout<<std::endl;
   
    system("cls");

      if(consolaContinente == 0){
        std::cout<<"AMERICA DEL NORTE"<<std::endl<<std::endl;
      }else  if(consolaContinente == 1){
        std::cout<<"EUROPA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 2){
        std::cout<<"ASIA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 3){
        std::cout<<"AMERICA DEL SUR"<<std::endl<<std::endl;
      }else  if(consolaContinente == 4){
        std::cout<<"AFRICA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 5){
        std::cout<<"AUSTRALIA"<<std::endl<<std::endl;
      }

    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
       
        if(itdorCont->getIdContinente()==consolaContinente){
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
            if(itdorP->getColorOcupacion()==itdorJugadores->getColor()){
              itdorP->getInfoPais();
            }
          }
          flag=false;
          std::cout<<"Si no puede ver ningun país disponible para ocupar, inserte cualquier numero para volver al menu de continentes"<<std::endl;
          std::cout<<"Digite el pais que desea ocupar: ";
          std::cin>>consolaPais;
          //Funcion dentro de continente que itere sobre la lista de paises hasta que encuentre el
          //seleccionado por el usuario y modofique los datos respectivos
         
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
     
            if(itdorP->getIDPais()==consolaPais&&itdorP->getColorOcupacion()==itdorJugadores->getColor()){
 
              if(itdorJugadores->getUnidadesInfanteria()>0){
                std::cout<<"Posee "<<itdorJugadores->getUnidadesInfanteria()<<" Unidades de infanteria\n";
                std::cout<<"Ingrese la cantidad de infanterias que ingresara: ";
                std::cin>>consola;
                if(itdorJugadores->getUnidadesInfanteria()>=consola){
                 itdorP->setCantidadInfanterias(itdorP->getCantidadInfanterias()+consola);
                  itdorJugadores->setUnidadesInfanteria(itdorJugadores->getUnidadesInfanteria()-consola);
                  system("cls");
                std::cout<<"\nEl jugador "<< itdorJugadores->getIdJugador()<<" agrego a "<<itdorP->getNombrePais()<<" "<< consola <<" Unidades"<<"!"<<std::endl;
                 
                    if(itdorJugadores->getIdJugador()==jugadores.end()->getIdJugador()){
                      itdorJugadores=jugadores.begin();
                    }else{
                      itdorJugadores++;
                    }
                }
              }else{
                 system("cls");
                std::cout<<"Jugador "<<itdorJugadores->getIdJugador()<<" no tiene unidades de infanteria\n";
                flag=false;
                itdorJugadores++;
              }
          }
          }
      }
    }
        contador=0;
        for (std::list<Jugador>::iterator itdorJug = jugadores.begin(); itdorJug != jugadores.end();++itdorJug) {
          contador=contador + itdorJug->getUnidadesInfanteria();
        }
        if(contador==0){
          flag=true;
        }
        }while(flag==false);
    return;
  }


 //----------------------------------------



//LANZAR DADO--------------------

int Risk::lanzarDado() {

    // Generar un número aleatorio entre 1 y 6
    return (std::rand() % 6) + 1;

}
//--------------------------------

//TURNO -------------------------------
  void Risk::turno(int turno){
      int colorJugador;
      int consolaPais;
      int consolaContinente;
      int opcion;
      int opcionAtacar;
      int opcionFortificar;
      int consola;
      bool flag;
      bool flag2;
      std::list<Jugador>::iterator itdorJugador;
      std::list<Pais>::iterator itdorPaisSeleccion;
      int turnoFinal;
      
      int paisesJugador;
   
    int cantidadJugadores =jugadores.size();
    
    itdorJugador=jugadores.end();
    turnoFinal=itdorJugador->getIdJugador();
   
    if(inicio_J==false){
        std::cout<<"(Juego no inicializado) Esta partida no ha sido inicializada correctamente\n";
        return;
    }
    if(j_Terminado==true){
        std::cout<<"(Juego terminado) Esta partida ya tuvo un ganador\n";
        return;
    }
    
    for (std::list<Jugador>::iterator itdorJug = jugadores.begin(); itdorJug != jugadores.end();++itdorJug) {
          if(turno==itdorJug->getIdJugador()){
              itdorJugador=itdorJug;
              flag=true;
          }
        }
   
    if(flag==false){
        std::cout<<"(Jugador no válido) El jugador "<<turno<<" no forma parte de esta partida\n";
        return;
    }
    if(turnoPartida==-1){
        std::list<Jugador>::iterator itdorJug = jugadores.begin();
        turnoPartida=itdorJug->getIdJugador();
    }
    if(turnoPartida!=turno){
        std::cout<<"(Jugador fuera de turno) No es el turno del jugador "<<turno<<"\n";
        return;
    }
    
   
   
    colorJugador=itdorJugador->getColor();
    
    //AGREGAR UN CONTADOR DE PAISES Y SI UN CONTADOR DA CERO, IGNORAR SU TURNO
    paisesJugador=0;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
              paisesJugador=paisesJugador+1;
          }
      }
    }
    if(paisesJugador==0){
        //SALTA EL TURNO SI ESTE JUGADOR YA NO TIENE PAISES
        if(turnoPartida==turnoFinal){
            turnoPartida=1;
        }else{
            turnoPartida++;
        }
            return;
    }
    
    
    //Cuenta los paises del jugador y si suman 42, finalizará el juego
    paisesJugador=0;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
              paisesJugador=paisesJugador+1;
          }
      }
    }
    if(paisesJugador==6){
        j_Terminado=true;
        std::cout<<"El jugador "<<itdorJugador->getNombre()<<" Ha ganado\n";
        return;
    }
    
   
    std::cout<<"El Jugador "<<itdorJugador->getIdJugador()<<" puede reclamar: "<<(itdorJugador->getCartas()/3)<<" Fichas\n";
    std::cout<<"Desea reclamarlas (1) SI (2)NO\n";
    std::cin>>opcion;
    if(opcion==1&&(itdorJugador->getCartas()/3)!=0){
        itdorJugador->setUnidadesInfanteria(itdorJugador->getUnidadesInfanteria()+(itdorJugador->getCartas()/3));
        itdorJugador->setCartas(0);
        flag=false;
        do{
      //MUESTRA TERRENOS DONDE TIENE DOMINIOS
   

    std::cout<<"\nJugador "<<itdorJugador->getIdJugador()<<" estos son sus territorios\n"<<std::endl;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
        if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
          std::cout<<"("<<itdorCont->getIdContinente()<<") "<<itdorCont->getNombreContinente()<<"\n";
          break;
        }
      }
    }

      std::cout<<"\nDigite alguno de los continentes: ";
      std::cin>>consolaContinente;
      std::cout<<std::endl;
   
    system("cls");

      if(consolaContinente == 0){
        std::cout<<"AMERICA DEL NORTE"<<std::endl<<std::endl;
      }else  if(consolaContinente == 1){
        std::cout<<"EUROPA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 2){
        std::cout<<"ASIA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 3){
        std::cout<<"AMERICA DEL SUR"<<std::endl<<std::endl;
      }else  if(consolaContinente == 4){
        std::cout<<"AFRICA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 5){
        std::cout<<"AUSTRALIA"<<std::endl<<std::endl;
      }

    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
       
        if(itdorCont->getIdContinente()==consolaContinente){
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
            if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
              itdorP->getInfoPais();
            }
          }
          flag=false;
          std::cout<<"Si no puede ver ningun país disponible para ocupar, inserte cualquier numero para volver al menu de continentes"<<std::endl;
          std::cout<<"Digite el pais que desea ocupar: ";
          std::cin>>consolaPais;
          //Funcion dentro de continente que itere sobre la lista de paises hasta que encuentre el
          //seleccionado por el usuario y modofique los datos respectivos
         
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
     
            if(itdorP->getIDPais()==consolaPais&&itdorP->getColorOcupacion()==itdorJugador->getColor()){
                flag=true;
              if(itdorJugador->getUnidadesInfanteria()>0){
                std::cout<<"Posee "<<itdorJugador->getUnidadesInfanteria()<<" Unidades de infanteria\n";
                std::cout<<"Ingrese la cantidad de infanterias que ingresara: ";
                std::cin>>consola;
                if(itdorJugador->getUnidadesInfanteria()>=consola){
                 itdorP->setCantidadInfanterias(itdorP->getCantidadInfanterias()+consola);
                  itdorJugador->setUnidadesInfanteria(itdorJugador->getUnidadesInfanteria()-consola);
                  system("clear");
                std::cout<<"\nEl jugador "<< itdorJugador->getIdJugador()<<" agrego a "<<itdorP->getNombrePais()<<" "<< consola <<" Unidades"<<"!"<<std::endl;
               
                }else{
                    flag=false;
                }
              }
            }
        }
      }
    }
        }while(flag==false);
    }
   
   
    flag =false;
    flag2 =false;
    do{
        std::cout<<"\n\n\nATACAR!"<<std::endl;
        std::cout<<"A continuacion seleccione uno de sus dominios por el cual atacar\n";
        itdorPaisSeleccion=seleccionDominio(itdorJugador);
        flag = ataquePais(itdorPaisSeleccion, seleccionTerrenoColindanteEnemigo(itdorPaisSeleccion));
        std::cout<<"Desea dejar de atacar? (1) Si - (0) No"<<std::endl;
            std::cin>>opcionAtacar; 
            
            if(opcionAtacar = 1){
                flag2 = true;
            }else{
                flag2 = false;
            }
    }while(flag2==false);
    if(flag==true){
        system("cls");
        std::cout<<"Se le ha agregado 1 carta\n";
        itdorJugador->setCartas(itdorJugador->getCartas()+1);
    }
    
    
    //fortificar 
    
    
    flag = false;
    flag2 =false;
     do{
         std::cout<<"\n\n\nFORTIFICAR!"<<std::endl;
        std::cout<<"\n\nA continuacion seleccione uno de sus territorios de donde quiere mover sus infanterias: ";
        itdorPaisSeleccion=seleccionDominio(itdorJugador);
        
        flag = moverInfanteria(itdorPaisSeleccion, seleccionTerrenoColindante(itdorPaisSeleccion));
        
        std::cout<<"Desea dejar de fortificar? (1) Si - (0) No"<<std::endl;
            std::cin>>opcionFortificar;
            
            if(opcionFortificar==1){
                flag2 = true;
            }else{
                flag2 = false;
            }
    }while(flag2==false);
    
    
    //ESTO ES PARA AVANZAR DE TURNO
    if(turnoPartida==turnoFinal){
        turnoPartida=1;
    }else{
        turnoPartida++;
    }
   
  }
  
  
  
  
  
  int Risk::moverInfanteria(std::list<Pais>::iterator primerPais, std::list<Pais>::iterator segundoPais){
       
       if(primerPais->getIDPais()==segundoPais->getIDPais()){
           return 0;
       }
       
       system("cls");
       int cantidad;
        if(primerPais->getColorOcupacion() == segundoPais->getColorOcupacion()){
            
            primerPais->getInfoPais();
            
            std::cout<<std::endl;
            
            segundoPais->getInfoPais();
            
       std::cout<<"Digite la cantidad de infanterias que quiere mover de "<<primerPais->getNombrePais()<<" a "<<segundoPais->getNombrePais()<<":";
        std::cin>>cantidad;
        
       
        if(cantidad<primerPais->getCantidadInfanterias()){
            
            
            
            
        primerPais->setCantidadInfanterias(primerPais->getCantidadInfanterias()-cantidad);
        
        segundoPais -> setCantidadInfanterias(segundoPais->getCantidadInfanterias()+cantidad);
        
        system("cls");
        
        std::cout<<"Fortificacion exitosa!"<<std::endl;
        
        primerPais->getInfoPais();
            
            std::cout<<std::endl;
            
            segundoPais->getInfoPais();
        
        
        
        
        }else{
            std::cout<<"Cantidad invalida"<<std::endl;
        }
        }else{
            std::cout<<"No se puede mover la infanteria debido a que no ocupas alguno de los terrenos elegidos "<<std::endl;
        }
    
   }
 
  std::vector<int> Risk::dadosRojosFunc() {
    int valorDado = 0;
    int Aux;
    std::vector<int> dadosRojos;

    dadosRojos.push_back(lanzarDado());
    dadosRojos.push_back(lanzarDado());

    for (int i = 0; i < 3; i++) {
        Aux = lanzarDado();
        if (valorDado <= Aux) {
            dadosRojos.push_back(Aux);
        }
        valorDado = lanzarDado();
    }

    // Se ordenan para tener los dos mayores datos
    std::sort(dadosRojos.begin(), dadosRojos.end(), std::greater<int>());
   
    // Se acomoda el tamaño para descartar el ultimo
    dadosRojos.resize(1);

    return dadosRojos;
}
 
  std::vector<int> Risk::dadosBlancosFunc(){
      std::vector<int> dadosBlancos;
      dadosBlancos.push_back(lanzarDado());
      dadosBlancos.push_back(lanzarDado());
      
      std::sort(dadosBlancos.begin(), dadosBlancos.end(), std::greater<int>());
      
      dadosBlancos.resize(1);
     
      return dadosBlancos;
  }
 
 
 
 
 //---------------------------------------------------------------------------
  int Risk::ataquePais(std::list<Pais>::iterator atacantePais, std::list<Pais>::iterator defensorPais){
      std::vector<int> dadosRojos;
      std::vector<int> dadosBlancos;
      int opcion;
      int tropasAtaque;
      bool flag;
      bool flagAux;
      
      if(atacantePais->getIDPais()==defensorPais->getIDPais()){
           return 0;
       }
     
      do{
        
        std::cout<<"Indique con cuanta infanteria realizara el ataque desde "<<atacantePais->getNombrePais()<<"\n";
        std::cout<<"Infanteria disponible: "<<atacantePais->getCantidadInfanterias()<<"\n";
        std::cin>>tropasAtaque;
        if(tropasAtaque>=atacantePais->getCantidadInfanterias()){
            flag=false;
            std::cout<<"Cantidad invalida\n";
            return 0;
        }else{
            flag=true;
        }
      }while(flag==false);
      
      //Le restamos al pais la cantidad de tropas que fueron a atacar
       atacantePais->setCantidadInfanterias(atacantePais->getCantidadInfanterias()-tropasAtaque);
     
      //HACER LO DE LOS DADOS Y CONTINUAR HASTA QUE ALGUNO DE LOS PAISES SE QUEDE SIN TROPAS
      flag=false;
      flagAux=false;
      int ronda=0;
      do{
          dadosRojos = dadosRojosFunc();
          dadosBlancos = dadosBlancosFunc();
          std::cout<<"Ronda: "<<ronda<<"\n";
          if(dadosRojos[0]>dadosBlancos[0]){
              //reduzco ejercito del atacante
              defensorPais->setCantidadInfanterias(defensorPais->getCantidadInfanterias()-1);
              std::cout<<"Dados Rojos: "<<dadosRojos[0]<<"\n";
              std::cout<<"Dados Blancos: "<<dadosBlancos[0]<<"\n";
              std::cout<<"Gana Atacante.\n";
              std::cout<<"Tropas Atacante: "<<tropasAtaque<<"\n";
              std::cout<<"Tropas Defensor: "<<defensorPais->getCantidadInfanterias()<<"\n\n";
          }
          if(dadosRojos[0]<=dadosBlancos[0]){
              //reduzco ejercito del atacante
              tropasAtaque=tropasAtaque-1;
              //atacantePais->setUnidadesInfanteria(atacantePais->getUnidadesInfanteria()-1);
              std::cout<<"Dados Rojos: "<<dadosRojos[0]<<"\n";
              std::cout<<"Dados Blancos: "<<dadosBlancos[0]<<"\n";
              std::cout<<"Gana Defensor.\n";
              std::cout<<"Tropas Atacante: "<<tropasAtaque<<"\n";
              std::cout<<"Tropas Defensor: "<<defensorPais->getCantidadInfanterias()<<"\n\n";
          }
          if(defensorPais->getCantidadInfanterias()==0){
              //pedir al usuario poner una cantidad de tropas en el Pais
              //cambiar el color de ocupacion
              flag=true;
              atacantePais->setCantidadInfanterias(atacantePais->getCantidadInfanterias()+tropasAtaque);
              for (std::list<Tarjeta>::iterator itdorTarjeta = tarjetas.begin(); itdorTarjeta != tarjetas.end(); itdorTarjeta++){
                  if(itdorTarjeta->getIdTarjeta() == defensorPais->getIDPais()){
                      itdorTarjeta->setColorOcupacion(atacantePais->getColorOcupacion());

                      std::cout<<"Se transfirió la tarjeta del territorio defensor al atacante"<<std::endl;
                  }

              }
              std::cout<<"Cantidad de tropas a disposicion: "<<atacantePais->getCantidadInfanterias()<<"\n";
              do{
                  std::cout<<"Ha ganado la batalla, Seleccione un cantidad de tropas para ocupar\n";
                  std::cin>>opcion;
                  if(opcion>=atacantePais->getCantidadInfanterias()){
                      flagAux=false;
                  }
                  else{
                      flagAux=true;
                      defensorPais->setColorOcupacion(atacantePais->getColorOcupacion());
                      defensorPais->setCantidadInfanterias(opcion);
                      return 1;
                  }
              }while(flagAux==false);
              
              
              
          }
          if(tropasAtaque==0){
              //Mostrar que el asalto ha acabado
              std::cout<<"Usted ha perdido la batalla contra "<<defensorPais->getNombrePais()<<"\n";
              atacantePais->setCantidadInfanterias(atacantePais->getCantidadInfanterias()+tropasAtaque);
              flag=true;
          }
          ronda++;
          
      }while(flag==false);
     return 0;
     
  }
  
  
  std::list<Pais>::iterator Risk::seleccionTerrenoColindante(std::list<Pais>::iterator itdorDominio) {
    int consola, consolaContinente, consolaPais;
    bool flag = false;
    std::list<Pais>::iterator aux;
    int contadorColin;

    do {
        //MUESTRA TERRENOS DONDE TIENE DOMINIOS
   contadorColin=0;
    std::cout<<"\nPaises Colindantes de "<<itdorDominio->getNombrePais()<<": \n"<<std::endl;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          for(std::list<int>::iterator itdorColindantes = itdorDominio->getPaisesColindantes().begin(); itdorColindantes != itdorDominio->getPaisesColindantes().end();++itdorColindantes){
            if(*itdorColindantes==itdorP->getIDPais()&&itdorP->getColorOcupacion()==itdorDominio->getColorOcupacion()){
           std::cout<<"("<<itdorP->getIDPais()<<") "<<itdorP->getNombrePais()<<"\n";
           contadorColin=contadorColin+1;
          }
        }
      }
    }
    if(contadorColin==0){
        return itdorDominio;
    }
    
   
          flag=false;
          std::cout<<"Digite el dominio que desea seleccionar: ";
          std::cin>>consolaPais;
         
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          for(std::list<int>::iterator itdorColindantes = itdorDominio->getPaisesColindantes().begin(); itdorColindantes != itdorDominio->getPaisesColindantes().end();++itdorColindantes){
            if(*itdorColindantes==itdorP->getIDPais()&&itdorP->getIDPais()==consolaPais&&itdorP->getColorOcupacion()==itdorDominio->getColorOcupacion()){
                flag=true;
                return itdorP;
          }
        }
      }
    }
     
    } while (flag == false);
    return aux;
  }
  
  
 
  std::list<Pais>::iterator Risk::seleccionTerrenoColindanteEnemigo(std::list<Pais>::iterator itdorDominio) {
    int consola, consolaContinente, consolaPais;
    bool flag = false;
    std::list<Pais>::iterator aux;
    int contadorColin;

    do {
        //MUESTRA TERRENOS DONDE TIENE DOMINIOS
    contadorColin=0;
    std::cout<<"\nPaises Colindantes de "<<itdorDominio->getNombrePais()<<": \n"<<std::endl;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          for(std::list<int>::iterator itdorColindantes = itdorDominio->getPaisesColindantes().begin(); itdorColindantes != itdorDominio->getPaisesColindantes().end();++itdorColindantes){
            if(*itdorColindantes==itdorP->getIDPais()&&itdorP->getColorOcupacion()!=itdorDominio->getColorOcupacion()){
            std::cout<<"("<<itdorP->getIDPais()<<") "<<itdorP->getNombrePais()<<"\n";
            contadorColin=contadorColin+1;
          }
        }
      }
    }
    if(contadorColin==0){
        return itdorDominio;
    }
   
          flag=false;
          std::cout<<"Digite el dominio que desea seleccionar: ";
          std::cin>>consolaPais;
         
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
          for(std::list<int>::iterator itdorColindantes = itdorDominio->getPaisesColindantes().begin(); itdorColindantes != itdorDominio->getPaisesColindantes().end();++itdorColindantes){
            if(*itdorColindantes==itdorP->getIDPais()&&itdorP->getIDPais()==consolaPais&&itdorP->getColorOcupacion()!=itdorDominio->getColorOcupacion()){
                flag=true;
                return itdorP;
          }
        }
      }
    }
     
    } while (flag == false);
    return aux;
  }
 

 
  std::list<Pais>::iterator Risk::seleccionDominio(std::list<Jugador>::iterator itdorJugador) {
    int consola, consolaContinente, consolaPais;
    bool flag = false;
    std::list<Pais>::iterator aux;


    do {
        //MUESTRA TERRENOS DONDE TIENE DOMINIOS
   

    std::cout<<"\nJugador "<<itdorJugador->getIdJugador()<<" estos son sus territorios\n"<<std::endl;
    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
      for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
        if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
          std::cout<<"("<<itdorCont->getIdContinente()<<") "<<itdorCont->getNombreContinente()<<"\n";
          break;
        }
      }
    }

      std::cout<<"\nDigite alguno de los continentes: ";
      std::cin>>consolaContinente;
      std::cout<<std::endl;
   
    system("cls");

      if(consolaContinente == 0){
        std::cout<<"AMERICA DEL NORTE"<<std::endl<<std::endl;
      }else  if(consolaContinente == 1){
        std::cout<<"EUROPA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 2){
        std::cout<<"ASIA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 3){
        std::cout<<"AMERICA DEL SUR"<<std::endl<<std::endl;
      }else  if(consolaContinente == 4){
        std::cout<<"AFRICA"<<std::endl<<std::endl;
      }else  if(consolaContinente == 5){
        std::cout<<"AUSTRALIA"<<std::endl<<std::endl;
      }

    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
       
        if(itdorCont->getIdContinente()==consolaContinente){
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
            if(itdorP->getColorOcupacion()==itdorJugador->getColor()){
              itdorP->getInfoPais();
            }
          }
          flag=false;
          std::cout<<"Si no puede ver ningun país disponible, inserte cualquier numero para volver al menu de continentes"<<std::endl;
          std::cout<<"Digite el dominio que desea seleccionar: ";
          std::cin>>consolaPais;
         
          for (std::list<Pais>::iterator itdorP = (itdorCont->getPaisesList().begin()); itdorP != itdorCont->getPaisesList().end();++itdorP) {
            if(itdorP->getIDPais()==consolaPais&&itdorP->getColorOcupacion()==itdorJugador->getColor()){
                flag=true;
                return itdorP;
            }
        }
      }
    }
    } while (flag == false);
    return aux;
  }

  void Risk::guardarPartida(std::string nombreArchivo){
    int cantidadJugadores = jugadores.size();

    int contador =0;

        std::fstream archivo;


        archivo.open(nombreArchivo, std::ios::out);

        if(archivo.fail()){

            std::cout<<"(Error al guardar) La partida no ha sido guardada correctamente."<<std::endl;


        }else{

            archivo<< "cantidad de jugadores: "<< cantidadJugadores <<std::endl;

            for (std::list<Jugador>::iterator itdorJug = jugadores.begin(); itdorJug != jugadores.end();++itdorJug) {
                archivo << "id jugador: " << itdorJug->getIdJugador()<< std::endl;
                archivo << "nombre: " <<itdorJug->getNombre()<<std::endl;
                archivo << "color: " <<itdorJug->getColor()<<std::endl;
                archivo << "unidades de infanteria: "<<itdorJug->getUnidadesInfanteria()<<std::endl;
            }

            for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end();++itdorCont) {
                archivo<< itdorCont->displayInfo();
            }


            for (std::list<Tarjeta>::iterator itdorTarjeta = tarjetas.begin(); itdorTarjeta != tarjetas.end(); itdorTarjeta++){
                archivo<< itdorTarjeta->displayInfo()<<std::endl;
            }
            

            for(std::list<Comodin>::iterator itdorComodin = comodines.begin(); itdorComodin != comodines.end(); itdorComodin++){
                archivo<< itdorComodin->displayInfo()<<std::endl;
            }


            archivo.close();
            std::cout<<"(Comando correcto) La partida ha sido guardada correctamente."<<std::endl;
        }

        return;
}

void Risk::inicializarArchivo(std::string nombreArchivo) {


    std::ifstream archivo(nombreArchivo, std::ios::in);

    if (!archivo.is_open()) {
        inicio_J =false;
        std::cerr << "(Archivo vacío/incompleto o inexistente) " << nombreArchivo << " no contiene información valida para inicializar el juego."<< std::endl;
        return;
    }
    inicio_J=true;
    int cantidadJugadores;
    Continente continenteActual;



    std::string linea;
    while (std::getline(archivo, linea)) {
        if (linea.find("cantidad de jugadores:") != std::string::npos) {
            cantidadJugadores = std::stoi(linea.substr(linea.find(":") + 1));
        } else if (linea.find("id jugador:") != std::string::npos) {
            Jugador jugador;
            jugador.setIdJugador(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            jugador.setNombre(linea.substr(linea.find(":") + 1));

            std::getline(archivo, linea);
            jugador.setColor(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            jugador.setUnidadesInfanteria(std::stoi(linea.substr(linea.find(":") + 1)));

            jugadores.push_back(jugador);

        } else  if (linea.find("id de continente:") != std::string::npos) {
            Continente continenteActual;
            continenteActual.setIdContinente(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            continenteActual.setNombreContinente(linea.substr(linea.find(":") + 1));
            continentes.push_back( continenteActual);
        }
        else if (linea.find("id pais:") != std::string::npos) {
            // Procesar un nuevo país
            Pais paisActual;
            paisActual.setIdPais(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            paisActual.setNombrePais(linea.substr(linea.find(":") + 1));

            std::getline(archivo, linea);
            paisActual.setCantidadInfanterias(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            paisActual.setColorOcupacion(std::stoi(linea.substr(linea.find(":") + 1)));

            bool flagColindantes = true;
            while (flagColindantes) {
                std::getline(archivo, linea);
                if (linea.find("paises colindantes:") != std::string::npos) {
                    std::string colindantes = linea.substr(linea.find(":") + 1);
                    std::istringstream ss(colindantes);
                    std::string colindante;
                    while (std::getline(ss, colindante, ',')) {
                        paisActual.setPaisesColindantes(std::stoi(colindante));
                    }
                } else {
                    flagColindantes = false;
                }
            }


            if(paisActual.getIDPais()>0 && paisActual.getIDPais()<10){
                for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                    if(it->getIdContinente()==0){
                        it->paises.push_back(paisActual);
                    }
                }

            }else if(paisActual.getIDPais()>9 && paisActual.getIDPais()<17){
                for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                    if(it->getIdContinente()==1){
                        it->paises.push_back(paisActual);
                    }
            }}else if(paisActual.getIDPais()>16 && paisActual.getIDPais()<29){
                    for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                        if(it->getIdContinente()==2){
                            it->paises.push_back(paisActual);
                        }
                }
            }else if(paisActual.getIDPais()>28 && paisActual.getIDPais()<33){
                for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                    if(it->getIdContinente()==3){
                        it->paises.push_back(paisActual);
                    }
                }
            }else if(paisActual.getIDPais()>32 && paisActual.getIDPais()<39){
                for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                    if(it->getIdContinente()==4){
                        it->paises.push_back(paisActual);
                    }
                }
            }else if(paisActual.getIDPais()>38 && paisActual.getIDPais()<43){
                for(std::list<Continente>::iterator it= continentes.begin(); it !=  continentes.end(); it++){
                    if(it->getIdContinente()==5){
                        it->paises.push_back(paisActual);
                    }
                }
            }




        }

else if (linea.find("id de tarjeta:") != std::string::npos){

            Tarjeta tarjeta;
            tarjeta.setIdTarjeta(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            tarjeta.setTerritorio(linea.substr(linea.find(":") + 1));

            std::getline(archivo, linea);
            Ficha ficha;



            if(linea=="infanteria"){
                ficha.setNombre(linea);
                ficha.setInfanterias(1);
            }else if(linea=="caballeria"){
                ficha.setNombre(linea);
                ficha.setInfanterias(5);
            }else if(linea=="artilleria"){
                ficha.setNombre(linea);
                ficha.setInfanterias(10);
            }

            tarjeta.setFicha(ficha);

            std::getline(archivo, linea);
            tarjeta.setColorOcupacion(std::stoi(linea.substr(linea.find(":") + 1)));

            tarjetas.push_back(tarjeta);
        }else if(linea.find("id del comodin:") != std::string::npos){
            Comodin comodin;
            comodin.setIdComodin(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);
            comodin.setInfanterias(std::stoi(linea.substr(linea.find(":") + 1)));

            std::getline(archivo, linea);

            comodin.setColorOcupacion(std::stoi(linea.substr(linea.find(":") + 1)));

            comodines.push_back(comodin);


        }
    }


    archivo.close();

    std::cout<<"(Comando correcto) Juego "<<nombreArchivo <<"  haa sido inicializado correctamente!";


}


int calcularFrecuenciaCaracter(const std::string& cadena, char caracter) {
    int frecuencia = 0;

    for (char c : cadena) {
        if (c == caracter) {
            frecuencia++;
        }
    }

    return frecuencia;
}


void Risk::guardarArchivoBinario(std::string nombreArchivo) {

    int cantidadJugadores = jugadores.size();
    std::string archivo;
    archivo = "cantidad de jugadores: " + std::to_string(jugadores.size()) + "\n";

    for (std::list<Jugador>::iterator itdorJug = jugadores.begin(); itdorJug != jugadores.end(); ++itdorJug) {
        archivo += "id jugador: " + std::to_string(itdorJug->getIdJugador()) + "\n";
        archivo += "nombre: " + itdorJug->getNombre() + "\n";
        archivo += "color: " + std::to_string(itdorJug->getColor()) + "\n";
        archivo += "unidades infanteria: " + std::to_string(itdorJug->getUnidadesInfanteria()) + "\n";
    }

    for (std::list<Continente>::iterator itdorCont = continentes.begin(); itdorCont != continentes.end(); ++itdorCont) {
        archivo += itdorCont->displayInfo() + "\n";
    }

    for (std::list<Tarjeta>::iterator itdorTarjeta = tarjetas.begin(); itdorTarjeta != tarjetas.end(); ++itdorTarjeta) {
        archivo += itdorTarjeta->displayInfo() + "\n";
    }

    for (std::list<Comodin>::iterator itdorComodin = comodines.begin();
         itdorComodin != comodines.end(); ++itdorComodin) {
        archivo += itdorComodin->displayInfo() + "\n";
    }
    std::cout<<archivo;
//DECLARAR ARREGLOS
    int frecuencias[40];
    char caracteres[40];
    ArbolHuffman();

    //
    std::pair<std::string, int> myPair;
    std::deque<std::pair<std::string, int>> pairDeque;
    // CARACTERES
    char caracter_a = 'a';
    char caracter_b = 'b';
    char caracter_c = 'c';
    char caracter_d = 'd';
    char caracter_e = 'e';
    char caracter_f = 'f';
    char caracter_g = 'g';
    char caracter_h = 'h';
    char caracter_i = 'i';
    char caracter_j = 'j';
    char caracter_k = 'k';
    char caracter_l = 'l';
    char caracter_m = 'm';
    char caracter_n = 'n';
    char caracter_o = 'o';
    char caracter_p = 'p';
    char caracter_q = 'q';
    char caracter_r = 'r';
    char caracter_s = 's';
    char caracter_t = 't';
    char caracter_u = 'u';
    char caracter_v = 'v';
    char caracter_w = 'w';
    char caracter_x = 'x';
    char caracter_y = 'y';
    char caracter_z = 'z';
    char caracter_espacio = ' ';
    char caracter_saltoLinea = '\n';
    char caracter_dospuntos = ':';
    char caracter_coma = ',';
    char caracter_uno = '1';
    char caracter_dos = '2';
    char caracter_tres = '3';
    char caracter_cuatro = '4';
    char caracter_cinco = '5';
    char caracter_seis = '6';
    char caracter_siete = '7';
    char caracter_ocho = '8';
    char caracter_nueve = '9';
    char caracter_cero = '0';

    int frecuencia_a = calcularFrecuenciaCaracter(archivo, caracter_a);
    int frecuencia_b = calcularFrecuenciaCaracter(archivo, caracter_b);
    int frecuencia_c = calcularFrecuenciaCaracter(archivo, caracter_c);
    int frecuencia_d = calcularFrecuenciaCaracter(archivo, caracter_d);
    int frecuencia_e = calcularFrecuenciaCaracter(archivo, caracter_e);
    int frecuencia_f = calcularFrecuenciaCaracter(archivo, caracter_f);
    int frecuencia_g = calcularFrecuenciaCaracter(archivo, caracter_g);
    int frecuencia_h = calcularFrecuenciaCaracter(archivo, caracter_h);
    int frecuencia_i = calcularFrecuenciaCaracter(archivo, caracter_i);
    int frecuencia_j = calcularFrecuenciaCaracter(archivo, caracter_j);
    int frecuencia_k = calcularFrecuenciaCaracter(archivo, caracter_k);
    int frecuencia_l = calcularFrecuenciaCaracter(archivo, caracter_l);
    int frecuencia_m = calcularFrecuenciaCaracter(archivo, caracter_m);
    int frecuencia_n = calcularFrecuenciaCaracter(archivo, caracter_n);
    int frecuencia_o = calcularFrecuenciaCaracter(archivo, caracter_o);
    int frecuencia_p = calcularFrecuenciaCaracter(archivo, caracter_p);
    int frecuencia_q = calcularFrecuenciaCaracter(archivo, caracter_q);
    int frecuencia_r = calcularFrecuenciaCaracter(archivo, caracter_r);
    int frecuencia_s = calcularFrecuenciaCaracter(archivo, caracter_s);
    int frecuencia_t = calcularFrecuenciaCaracter(archivo, caracter_t);
    int frecuencia_u = calcularFrecuenciaCaracter(archivo, caracter_u);
    int frecuencia_v = calcularFrecuenciaCaracter(archivo, caracter_v);
    int frecuencia_w = calcularFrecuenciaCaracter(archivo, caracter_w);
    int frecuencia_x = calcularFrecuenciaCaracter(archivo, caracter_x);
    int frecuencia_y = calcularFrecuenciaCaracter(archivo, caracter_y);
    int frecuencia_z = calcularFrecuenciaCaracter(archivo, caracter_z);
    int frecuencia_espacio = calcularFrecuenciaCaracter(archivo, caracter_espacio);
    int frecuencia_saltoLinea = calcularFrecuenciaCaracter(archivo, caracter_saltoLinea);
    int frecuencia_dospuntos = calcularFrecuenciaCaracter(archivo, caracter_dospuntos);
    int frecuencia_coma = calcularFrecuenciaCaracter(archivo, caracter_coma);
    int frecuencia_uno = calcularFrecuenciaCaracter(archivo, caracter_uno);
    int frecuencia_dos = calcularFrecuenciaCaracter(archivo, caracter_dos);
    int frecuencia_tres = calcularFrecuenciaCaracter(archivo, caracter_tres);
    int frecuencia_cuatro = calcularFrecuenciaCaracter(archivo, caracter_cuatro);
    int frecuencia_cinco = calcularFrecuenciaCaracter(archivo, caracter_cinco);
    int frecuencia_seis = calcularFrecuenciaCaracter(archivo, caracter_seis);
    int frecuencia_siete = calcularFrecuenciaCaracter(archivo, caracter_siete);
    int frecuencia_ocho= calcularFrecuenciaCaracter(archivo, caracter_ocho);
    int frecuencia_nueve = calcularFrecuenciaCaracter(archivo, caracter_nueve);
    int frecuencia_cero = calcularFrecuenciaCaracter(archivo, caracter_cero);


    caracteres[0]={caracter_a};
    caracteres[1]={caracter_b};
    caracteres[2]={caracter_c};
    caracteres[3]={caracter_d};
    caracteres[4]={caracter_e};
    caracteres[5]={caracter_f};
    caracteres[6]={caracter_g};
    caracteres[7]={caracter_h};
    caracteres[8]={caracter_i};
    caracteres[9]={caracter_j};
    caracteres[10]={caracter_k};
    caracteres[11]={caracter_l};
    caracteres[12]={caracter_m};
    caracteres[13]={caracter_n};
    caracteres[14]={caracter_o};
    caracteres[15]={caracter_p};
    caracteres[16]={caracter_q};
    caracteres[17]={caracter_r};
    caracteres[18]={caracter_s};
    caracteres[19]={caracter_t};
    caracteres[20]={caracter_u};
    caracteres[21]={caracter_v};
    caracteres[22]={caracter_w};
    caracteres[23]={caracter_x};
    caracteres[24]={caracter_y};
    caracteres[25]={caracter_z};
    caracteres[26]={caracter_espacio};
    caracteres[27]={caracter_saltoLinea};
    caracteres[28]={caracter_dospuntos};
    caracteres[29]={caracter_coma};
    caracteres[30]={caracter_uno};
    caracteres[31]={caracter_dos};
    caracteres[32]={caracter_tres};
    caracteres[33]={caracter_cuatro};
    caracteres[34]={caracter_cinco};
    caracteres[35]={caracter_seis};
    caracteres[36]={caracter_siete};
    caracteres[37]={caracter_ocho};
    caracteres[38]={caracter_nueve};
    caracteres[39]={caracter_cero};


    //Meter datos por extensión de las frecuencias

    frecuencias[0]={frecuencia_a};
    frecuencias[1]={frecuencia_b};
    frecuencias[2]={frecuencia_c};
    frecuencias[3]={frecuencia_d};
    frecuencias[4]={frecuencia_e};
    frecuencias[5]={frecuencia_f};
    frecuencias[6]={frecuencia_g};
    frecuencias[7]={frecuencia_h};
    frecuencias[8]={frecuencia_i};
    frecuencias[9]={frecuencia_j};
    frecuencias[10]={frecuencia_k};
    frecuencias[11]={frecuencia_l};
    frecuencias[12]={frecuencia_m};
    frecuencias[13]={frecuencia_n};
    frecuencias[14]={frecuencia_o};
    frecuencias[15]={frecuencia_p};
    frecuencias[16]={frecuencia_q};
    frecuencias[17]={frecuencia_r};
    frecuencias[18]={frecuencia_s};
    frecuencias[19]={frecuencia_t};
    frecuencias[20]={frecuencia_u};
    frecuencias[21]={frecuencia_v};
    frecuencias[22]={frecuencia_w};
    frecuencias[23]={frecuencia_x};
    frecuencias[24]={frecuencia_y};
    frecuencias[25]={frecuencia_z};
    frecuencias[26]={frecuencia_espacio};
    frecuencias[27]={frecuencia_saltoLinea};
    frecuencias[28]={frecuencia_dospuntos};
    frecuencias[29]={frecuencia_coma};
    frecuencias[30]={frecuencia_uno};
    frecuencias[31]={frecuencia_dos};
    frecuencias[32]={frecuencia_tres};
    frecuencias[33]={frecuencia_cuatro};
    frecuencias[34]={frecuencia_cinco};
    frecuencias[35]={frecuencia_seis};
    frecuencias[36]={frecuencia_siete};
    frecuencias[37]={frecuencia_ocho};
    frecuencias[38]={frecuencia_nueve};
    frecuencias[39]={frecuencia_cero};

    for (int i = 0; i < 40; i++) {
        for (int j = i + 1; j < 40; j++) {
            int temporal = 0;
            char caracterTemporal;
            if (frecuencias[i] > frecuencias[j]) {
                temporal = frecuencias[i];
                caracterTemporal = caracteres[i];
                frecuencias[i] = frecuencias[j];
                caracteres[i] = caracteres[j];
                frecuencias[j] = temporal;
                caracteres[j] = caracterTemporal;
            }
        }
    }

    for (int i = 0; i < 39; i++) {
        myPair = {std::string(1, caracteres[i]), frecuencias[i]};
        if(myPair.second == 0){

        }else{
            pairDeque.push_back(myPair);
        }

    }

    // Imprimir el deque
    for (int i = 0; i < pairDeque.size(); i++) {
        std::pair<std::string, int> element = pairDeque[i];
        if (element.first == "\n") {
            std::cout << "salto de linea: " << element.second << "\n";
        } else if (element.first == " ") {
            std::cout << "espacio: " << element.second << "\n";
        } else {
            std::cout << element.first << ": " << element.second << "\n";
        }
    }


    ArbolHuffman arbol;
    arbol.llenarArbol(pairDeque); // Utilizas la instancia de ArbolHuffman creada

    std::string binario = arbol.codificarTexto(archivo);
    std::cout<<binario;




  return;


    }






#endif
