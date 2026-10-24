#pragma once
#include <iostream>
#include <cstring>
#include "artista.h"

using namespace std:

Artista::Artista()
{
    _idArtista = 0;
    strcpy(_especialidad, " ");
    _dni = 0;
    strcpy(_nombre, " ");
    strcpy(_apellido, " ");
    strcpy(_telefono, " ");
    strcpy(_email, " ");
    _estado = true;
}

//GETTERS
int Artista::getIdArtista(){ return _idArtista; }

int Artista::getDNI(){ return _dni; }

bool Artista::getEstado()
{
    return _estado;
}

const char* Artista::getEspecialidad() const
{
    return _especialidad;
}

const char* Artista::getNombre() const
{
    return _nombre;
}

const char* Artista::getApellido() const
{
    return _apellido;
}

const char* Artista::getTelefeno() const
{
    return _telefono;
}

const char* Artista::getEmail() const
{
    return _email;
}

Fecha Artista::getFechaNacimiento()
{
 return _fechaNacimiento;
}

//SETTERS
void Artista::setEstado(bool estado)
{
    _estado = estado;
}

void Artista::setIdArtista(int idArtista)
{
    _idArtista = idArtista;
}

void Artista::setEspecialidad(char* especialidad)
{
    strcpy(_especialidad, especialidad);
}

void Artista::setDni(int dni)
{
    _dni = dni;
}

void Artista::setNombre(char* nombre)
{

}

void Artista::setApellido(char* apellido)
{

}

void Artista::setTelefono(char* telefono)
{

}

void Artista::setEmail(char* email)
{

}

void Artista::setFechaNacimiento(Fecha fechaNacimiento)
{

}

void Artista::cargarArtista()
{

}

void Artista::mostrarArtista()
{

}
