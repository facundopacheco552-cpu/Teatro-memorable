#pragma once
#include <iostream>
#include <cstring>

class Teatro
{
    public:
        Teatro();
        ~Teatro();

        ///sets
        void setIdTeatro(int);
        void setNombre(const char *valor){strcpy(_nombre,valor);}
        void setDirecion(const char *valor){strcopy(_direcion, valor);}
        void setTelefono(const char *valor){strcopy(_telefono, valor);}
        void setLink(const char *valor){strcopy(_link, valor);}
        void setCandyBar(bool );
        void setHoraApertura(horaApertura);
        void setHoraCierre(horaCierre);
         const char* getNombre(){return nombre;} //string
        ///gets
        int getIdTeatro(return _idTeatro);
        const char* getNombre(return _nombre);
        const char* getDireccion(return _direccion);
        const char* getTelefono(return _telefono);
        const char* getLink(return _link);
        bool getCandyBar(return _candyBar);
        Horario getHoraApertura(return horaApertura);
        Horario getHoraCierre(return horaCierre);


    private:
        int  _idTeatro;
        char _nombre[20];
        char _direccion[100];
        char _telefono[20];
        char _link[100];
        bool _candyBar;
        Horario horaApertura;
        Horario horaCierre;
};

#endif // Teatro_H
