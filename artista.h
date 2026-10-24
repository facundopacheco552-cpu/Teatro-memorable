#pragma once
#include <iostream>
#include <cstring>
#include "Fecha.h"

class Artista{
    private:
        int _idArtista;
        char _especialidad[30];
        int _dni;
        char _nombre[20];
        char _apellido[20];
        char _telefono[20];
        char _email[50];
        Fecha _fechaNacimiento;
        bool _estado;

    public:
        Artista();
        //GETTERS
        int getIdArtista();
        int getDNI();
        bool getEstado();
        const char* getEspecialidad() const;
        const char* getNombre() const;
        const char* getApellido() const;
        const char* getTelefeno() const;
        const char* getEmail() const;
        Fecha getFechaNacimiento();

        //SETTERS
        void setEstado(bool estado);
        void setIdArtista(int idArtista);
        void setEspecialidad(const char* especialidad);
        void setDni(int dni);
        void setNombre(const char* nombre);
        void setApellido(const char* apellido);
        void setTelefono(const char* telefono);
        void setEmail(const char* email);
        void setFechaNacimiento(Fecha fechaNacimiento);

        //METODOS
        void cargarArtista();
        void mostrarArtista();
};
