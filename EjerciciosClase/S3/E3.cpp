#include <iostream>
using namespace std;

//ESPACIOS GLOBAL
/* 
float
bool
double
string
*/
int obtenerTotal(int primerParametro,int segundoParametro){
   //Definir las variables locales de la funcion
    int resultado=0;
    //Hacer el proceso/calculo
    resultado=primerParametro+segundoParametro;
    //retornar un valor(debe ser del tipo de dato con que se creo la funcion)
    return resultado;
}

int main(){
    //ESPACIOS LOCALES
    int primerValor=0;
    int segundoValor=0;
    //int total=0;

    cout<<"Ingresa el primer valor:";
    cin>>primerValor;
    cout<<"Ingresa el segundo valor:";
    cin>>segundoValor;
    
    //total=primerValor+segundoValor;
    //total= obtenerTotal(primerValor,segundoValor);
    
    cout<<"El resultado es: "
    <<obtenerTotal(primerValor,segundoValor)<<endl;
    return 0;
}

