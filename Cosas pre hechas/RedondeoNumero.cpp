/*
Hacer una función llamada Redondear que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78, debe devolver 8.
Si recibe 7.48, debe devolver 7.
Si recibe 7.5, debe devolver 8.

Hacer un programa para ingresar un número y, utilizando Redondear, emita luego un cartel indicando el número redondeado.
*/
#include <iostream>
using namespace std;

int Redondear(float input);


int main(){
    float input;
    cout<<"Enter number: ";
    cin>>input;
    Redondear(input);






}

int Redondear(float input){
    int redondeado=(input+0.5f);//la "F" significa que es un numero decimal
    cout<<"El numero rendoado es: "<<redondeado;





}
