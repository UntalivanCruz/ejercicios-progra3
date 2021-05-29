#include <iostream>

using namespace std;

int main(){
    //La vida simple
    // reserva un espacio en memoria RAM-> 4 bytes
    int a;
    a=10;
    cout<<a <<endl;
    cout<<"Posicion de memoria de la variable: "<<&a<<"\n"<<endl;
    
    /*La vida con memoria dinamica
    Que es la memoria dinamica?
    Puntero o apuntador
    "*" asterisco antes del nombre crea una variable de tipo apuntador
    "&" ampersand antes de la variable puedo obtener la posicion en memoria
    "*" con un apuntador puedo acceder a los datos que apunta!!!
    */
    
    int * apuntador;
    cout<<"La posicion del apuntador: "<< &apuntador <<"\n"<<endl;
    
    apuntador = &a; //unicamente me acepta posiciones en memoria.
    cout<<"La posicion que tiene almacenada: "<<apuntador <<endl;
    cout<<"El valor que tiene la variable a la que apunta: "<< *apuntador <<endl;

    return 0;
}
/*

Variable		Valor			Posicion Memoria
   a			10			        0x7fff26c2d5ec
apuntador		0x7fff26c2d5ec		0x7fff26c2d5e0

*/