/*
Menu, con la opcion salir
*/

#include <iostream>

using namespace std;

int main(){
    int opc;
    do{
        cout<<"Ingrese una opcion del menu\n1. Ingresar\n2. Editar\n3. Eliminar\n4. Salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
             cout<<"Ingresando..."<<endl;
             break;
            case 2:
             cout<<"Editando..."<<endl;
             break;
            case 3:
             cout<<"Eliminando..."<<endl;
             break;
            case 4:
             cout<<"Gracias por utilizar el sistema"<<endl;
             break;
            default:
             cout<<"Opcion incorrecta"<<endl;
             break;
        }
    }while(opc!=4);
    return 0;
}