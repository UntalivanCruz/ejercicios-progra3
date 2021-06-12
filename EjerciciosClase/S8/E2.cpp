/*Hacer una función para almacenar N números en un arreglo dinámico, 
posteriormente en otra función buscar un número en particular. 
ALGORITMO DE BUSQUEDA
Secuencial
*/

#include <iostream>
#include "funciones.h"

using namespace std;

int numEelementos;
int *arregloNumeros;

void busquedaSecuencial(int *datos, int cantidad){
    int valorBuscar, contador;
    bool band=false;
    
    cout<<"Que valor desea encontrar?: ";
    cin>>valorBuscar;
    
    while((band==false)&&contador < cantidad){
        if(*(datos+contador)==valorBuscar){
            band=true;
        }
        contador++;
    }
    
    if(band==false){
        cout<<"El valor a buscar no se encuentra";
    }else{
        cout<<"El valor se encontro";
    }
}

int main(){
    setDatos(arregloNumeros,numEelementos);
    mostrarDatos(arregloNumeros,numEelementos);
    busquedaSecuencial(arregloNumeros,numEelementos);
};