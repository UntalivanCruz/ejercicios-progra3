/*
Crear una funcion que permita calcular las 4 operaciones aritmeticas
basicas (sumar, restar, multiplicar y dividir)
Pidiendo dos valores al usuario
*/
#include <iostream>
using namespace std;


int obtenerTotal(int primerParametro,int segundoParametro, int opc){
   //Definir las variables locales de la funcion
    int resultado=0;

    switch(opc){
    	case 1:
    		resultado =resultado=primerParametro+segundoParametro;
    		break;
    	case 2:
    		resultado =resultado=primerParametro-segundoParametro;
    		break;	
    	case 3:
    		resultado =resultado=primerParametro*segundoParametro;
    		break;	
    	case 4:
    		resultado =resultado=primerParametro/segundoParametro;
    		break;	
	}
    //retornar un valor(debe ser del tipo de dato con que se creo la funcion)
    return resultado;
}


int main(){
    //ESPACIOS LOCALES
    int primerValor=0;
    int segundoValor=0;
    int opci;

    cout<<"Ingresa el primer valor:";
    cin>>primerValor;
    cout<<"Ingresa el segundo valor:";
    cin>>segundoValor;
    
    cout<<"que operacion de sea mostrar?"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"3. Division"<<endl;
    cin>>opci;
    
    cout<<"El resultado es: "<<obtenerTotal(primerValor, segundoValor, opci)<<endl;
    return 0;
}