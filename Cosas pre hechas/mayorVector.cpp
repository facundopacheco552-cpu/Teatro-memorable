///Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor máximo y su posición dentro del vector.

#include <iostream>
using namespace std;

void saveValues(float nroV[], int cant);//saves the variable values
int theBigOne(float nroV[], int cant);//determints the biggest value

int main(){
    const int TAM=5;
    float nro[TAM];
    saveValues(nro,TAM);
    theBigOne(nro,TAM);





}

void saveValues(float nroV[], int cant){
    int i;
    for(i=0;i<cant;i++){
        cout<<"Enter numbers: ";
        cin>>nroV[i];

    }

}

int theBigOne(float nroV[], int cant){
    int i;
    int big, position=1;
    big=nroV[0];

    for (i=0;i<cant;i++){
        if(nroV[i]>big){
        big=nroV[i];
        position=i+1;
    }}

    cout<<"Biggest number: "<<big<<endl;
    cout<<"position: "<<position<<endl;
    }
