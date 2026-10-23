#include "fecha.h"
#include <ctime>
#include <cstring>
#include <iostream>
using namespace std;

Fecha::Fecha()
{
    _dia=1;
    _mes=1;
    _anio=2023;
}

Fecha::Fecha(int dia,int mes, int anio)
{
    _dia=dia;
    _mes=mes;
    _anio=anio;
}


Fecha::~Fecha()
{
    //dtor
}

void Fecha::cargar(){
    cout<<"DIA: ";
    cin>>_dia;
    cout<<"MES: ";
    cin>>_mes;
    cout<<"ANIO: ";
    cin>>_anio;
}


void Fecha::setDia(int dia){
    if(dia<=31 && dia>=1){
        _dia=dia;
    }
    else{_dia=0;}

}
void Fecha::diaSemana(){
    int aux=_dia%7;
    if(aux==0){cout<<"DOMINGO"<<endl;}
    if(aux==1){cout<<"LUNES"<<endl;}
    if(aux==2){cout<<"MARTES"<<endl;}
    if(aux==3){cout<<"MIERCOLES"<<endl;}
    if(aux==4){cout<<"JUEVES"<<endl;}
    if(aux==5){cout<<"VIERNES"<<endl;}
    if(aux==6){cout<<"SABADO"<<endl;}



}
bool Fecha::esBisiesto(){

    if(_anio%400==0){
        return true;
    }
    if(_anio%4==0 && _anio%100!=0){
        return true;
    }
    else{
        return false;
    }
}


int Fecha::diasEnMes(){
    {
    if (_mes == 2){
        if(esBisiesto()){return 29;}
        else{return 28;}

    }

    if(_mes == 4 ||
        _mes == 6 ||
        _mes == 9 ||
        _mes == 11){return 30;}

    return 31;
}

}
void Fecha::agregarDia(){
    _dia++;
    if(_dia>diasEnMes()){
        _dia=1;
        _mes++;
    }
}
void Fecha::agregarDias(int dia){
    _dia+=dia;
    if(_dia>diasEnMes()){
        _dia=_dia-diasEnMes();
        _mes++;
    }
}

void Fecha::restarDia(){
    _dia--;
    if(_dia==0){
        _mes--;
        _dia=diasEnMes();//consigue el dia del mes

    }
}

void Fecha::mostrar(){
        cout<<_dia<<"/"<<_mes<<"/"<<_anio<<endl;
        }



char Fecha::toString()
{
    char resultado[10];

    if(_dia < 10){
        resultado+="0";}

    resultado+=to_string(_dia);
    resultado+= "/";

    if(_mes < 10){resultado+= "0";}
    resultado+=to_string(_mes);
    resultado+= "/";
    resultado+= to_string(_anio);

    return resultado;
}

/*bool Fecha::operator==(const Fecha &aux){
    if(_dia!=aux._dia)return false;
    if(_mes!=aux._mes)return false;
    if(_anio!=aux._anio)return false;
    return true;
}*/
