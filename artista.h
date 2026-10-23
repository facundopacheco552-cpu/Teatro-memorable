#pragma once
#include <iostream>
#include <cstring>
#include "Fecha.h"

<<<<<<< Updated upstream
#pragma once

class Artista{
  private:

  public:

 //test
}
=======
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
        void setEspecialidad(char* especialidad);
        void setDni(int dni);
        void setNombre(char* nombre);
        void setApellido(char* apellido);
        void setTelefono(char* telefono);
        void setEmail(char* email);
        void setFechaNacimiento(Fecha fechaNacimiento);
        void cargarArtista();
        void mostrarArtista();
};

#endif
>>>>>>> Stashed changes
