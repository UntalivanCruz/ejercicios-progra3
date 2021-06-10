#ifndef funciones
#define funciones

#include <iostream>
using namespace std;

void setDatos(int *datos,int cantidad){
    cout<<"Cuantos valores desea registrar?: ";
    cin>>cantidad;
    
    datos = new int[cantidad];
    
    for(int contador=0; contador<cantidad; contador++){
        cout<<"Ingrese el elemento numerico "<<contador+1<<":";
        cin>>*(datos+contador);
    }
}

void mostrarDatos(int *datos,int cantidad){
    for(int contador=0; contador<cantidad; contador++){
        cout<<*(datos+contador)<<endl;
    }
}

#endif