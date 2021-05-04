/*
Que ingrese 3 nombres y al final los muestres
*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int cantPersonas=0;
    cout<<"Cuantas personas desea registrar?: ";
    cin>> cantPersonas;
    
    string nombres[cantPersonas];
    // CICLO DE REGISTRO DE PERSONAS
    for(
        int numPersona=0;  //VARIABLE CONTADOR
        numPersona<cantPersonas;    // CONDICIONANTE
        numPersona++    //Incrementador de la variable contador
    ){
        cout<<"Ingrese el nombre de la persona "<<numPersona+1<<": ";
        getline(cin,nombres[numPersona]);
    }
    
    // CICLO PARA MOSTRAR EL LISTADO DE PERSONAS
    cout<<"\n\n\t LISTADO DE PERSONAS"<<endl;
    for(int numLista=0; numLista<cantPersonas; numLista++){
        cout<<numLista+1<<". "<<nombres[numLista]<<endl;
    }
    return 0;
}