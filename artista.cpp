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

int Artista::getDNI()
{

}

bool Artista::getEstado()
{

}

const char* Artista::getEspecialidad() const
{

}

const char* Artista::getNombre() const
{

}

const char* Artista::getApellido() const
{

}

const char* Artista::getTelefeno() const
{

}

const char* Artista::getEmail() const
{

}

Fecha Artista::getFechaNacimiento()
{

}

//SETTERS
void Artista::setEstado(bool estado)
{

}

void Artista::setIdArtista(int idArtista)
{

}

void Artista::setEspecialidad(char* especialidad)
{

}

void Artista::setDni(int dni)
{

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
