// Continente.h
#ifndef CONTINENTE_H
#define CONTINENTE_H

class Continente {
private:
    int idContinente;

public:
    Continente(int idCont, const std::string& nombre, const std::list<Pais>& listaPaises) : idContinente(idCont), nombreContinente(nombre), paises(listaPaises) {}
    Continente() : nombreContinente(""), idContinente(-1) {}
    
    std::string getNombreContinente() {
        return nombreContinente;
      }
      int getIdContinente() {
        return idContinente;
      }

      std::list<Pais>& getPaisesList() {
        return paises;
      }

      void getPaises() {
        for (std::list<Pais>::iterator itdor = paises.begin(); itdor != paises.end();++itdor) {
          itdor->getInfoPais();
        }
      }

    void setIdContinente(int idContinente);

    void setNombreContinente(const std::string &nombreContinente);

    void setPaises(const std::list<Pais> &paises);

    std::string displayInfo();

    std::string nombreContinente;
    std::list<Pais> paises;
};

#include "Continente.hxx"

#endif
