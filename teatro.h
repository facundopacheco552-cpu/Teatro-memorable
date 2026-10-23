#pragma once
#include <iostream>
#include <cstring>

class Teatro
{
    public:
        Teatro();
        ~Teatro();

        ///sets
        setIdTeatro(int);
        setNombre(const char *valor){strcpy(_nombre,valor);}
        setDirecion(const char *valor){strcopy(_direcion, valor);}
        setTelefono(const char *valor){strcopy(_telefono, valor);}
        setLink(const char *valor){strcopy(_link, valor);}
        setCandyBar(bool );
        setHoraApertura(horaApertura);
        setHoraCierre(horaCierre);
         const char* getNombre(){return nombre;} //string


    private:
        int  _idTeatro;
        char _nombre[20];
        char _direcion[100];
        char _telefono[20];
        char _link[100];
        bool _candyBar;
        Horario horaApertura;
        Horario horaCierre;
};

#endif // Teatro_H
