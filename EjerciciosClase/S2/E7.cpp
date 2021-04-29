/*
Una expresión que evalúe a “Blanco”, “Azul”, “Rojo” o “Amarillo” 
dependiendo de un valor X en 0, 1, 2 y 3 respectivamente.
Si poner un valor fuera del rango, muestre mensaje y repita todo
*/

#include <iostream>
using namespace std;

int main(){
    
    int opcion;
    do{
        cout<<"Bienvenido, ingrese un numero del 0 al 3 de la opcion de color que desea:";
        cin>>opcion;
        switch(opcion){
        case 0:
            cout<<"Blanco"<<endl;
            break;
        case 1:
            cout<<"Azul"<<endl;
            break;
        case 2:
            cout<<"Rojo"<<endl;
            break;
        case 3:
            cout<<"Amarillo"<<endl;
            break;
        default:
            cout<<"El numero no esta dentro del limite"<<endl;
            break;
        }
    }while(opcion<0 || opcion>3);
    
    return 0;
}
