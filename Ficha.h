#ifndef ESTRUCT_COMP_FICHA_H
#define ESTRUCT_COMP_FICHA_H



class Ficha{
    private:
        std::string nombre;
        int infanterias;
    public:

    //Constructores
    Ficha(const std::string &nombre, int infanterias) : nombre(nombre), infanterias(infanterias) {}

    Ficha() : nombre(""), infanterias (0){}

    //Metodos de acceso
    const std::string &getNombre() const {
        return nombre;
    }

    void setNombre(const std::string &nombre) {
        Ficha::nombre = nombre;
    }

    int getInfanterias() const {
        return infanterias;
    }

    void setInfanterias(int infanterias) {
        Ficha::infanterias = infanterias;
    }

    //METODOS
    void displayInfo();

};

#endif