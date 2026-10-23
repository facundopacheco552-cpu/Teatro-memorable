#include <iostream>



using namespace std;
#include "fecha.h"

int Fecha::getDia(){
    return _dia;
}
int Fecha::getMes(){
    return _mes;
}
int Fecha::getAnio(){
    return _anio;
}
void Fecha::setDia(int dia){
    _dia=dia;
}
void Fecha::setMes(int mes){
    _mes=mes;
}
void Fecha::setAnio(int anio){
    _anio=anio;
}
void Fecha::cargar(){
    cout<<"DIA ";
    cin>>_dia;
    cout<<"MES ";
    cin>>_mes;
    cout<<"ANIO ";
    cin>>_anio;
}
void Fecha::mostrar(){
    ///DEBEN IMPLEMENTAR ALUMNOS
    cout<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
}

Fecha::Fecha(int d, int m, int a){
    _dia=d;
    _mes=m;
    _anio=a;
}

Fecha::Fecha(const string mes){
    if(mes=="ENERO"){
        _dia=1;
        _mes=1;
        _anio=1;
    }
    else{
        _dia=0;
        _mes=0;
        _anio=0;
    }
}

bool Fecha::operator==(const Fecha &aux){
    if(_dia!=aux._dia)return false;
    if(_mes!=aux._mes)return false;
    if(_anio!=aux._anio)return false;
    return true;
}


bool Fecha::operator>(const Fecha &aux){
    if(_anio>aux._anio)return true;
    if(_anio<aux._anio)return false;
    ///anio igual
    if(_mes>aux._mes)return true;
    if(_mes<aux._mes)return false;
    ///anio y mes igual
    if(_dia>aux._dia)return true;
    return false;
}
