#include <iostream>
#include <cstring>

using namespace std;

void cargarCadena(char *palabra, int tam){
    string texto;
    if(cin.peek()=='\n'){
        cin.ignore();
    }
    getline(cin, texto);
    strncpy(palabra, texto.c_str(), tam);
    palabra[tam-1]='\0';
}
