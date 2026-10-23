#pragma once
#include <iostream>
#include <cstring>

class Surcusal
{
    public:
        Surcusal();
        ~Surcusal();

        ///sets
        setSurcusal(int);
        setNombre(const char *valor){strcpy(_nombre,valor);}
        setTelefono(const char *valor){strcopy(_telefono, valor);}

         const char* getNombre(){return nombre;} //string

    private:
        int  _idSurcusal;
        char _nombre[30];
        char _telefono[20];
        char _link[100];

        bool _candyBar;
        int _cantSalas;
        float _precioTicket;
        Horario horaApertura;
        Horario horaCierre;
};

#endif // Surcusal_H
