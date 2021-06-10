/*
Aplicacion Registrar inventarios
*/

#include <iostream>
#include "Estructuras.h"
using namespace std;

void Productos::setDatos(){
    cout<<"Ingrese el codigo del producto: ";
    cin>>this->codigo;
    cout<<"Ingrese el nombre del producto: ";
    cin>>this->nombre;
    cout<<"Ingrese la categoria a la que pertenece el producto: ";
    cin>>this->categoria;
}

void Productos::getDatos(){
    cout<<codigo<<" - "<<nombre<< " - "<<categoria<<endl;
}

int Productos::getCodigo(){
    return this->codigo;
}

void Inventario::setDatos(Productos *producto,int cantidad){
    this->producto=producto;
    this->cantidad=cantidad;
}

void Inventario::getDatos(){
    this->producto->getDatos();
    cout<<"Cantidad en inventario: "<<this->cantidad<<endl;
}

Productos *fnBusqueda(int codigo, Productos *producto,Productos *inicio){
   // while(producto==inicio)
    //{
        cout<<producto->getCodigo()<<endl;
        producto--;
        cout<<producto->getCodigo()<<endl;
        producto--;
        cout<<producto->getCodigo()<<endl;
   /* }
    cout<<producto->getCodigo()<<endl;
    cout<<codigo<<endl;
     if(producto->getCodigo() == codigo){
            cout<<"Codigo encontrado!"<<endl;
            return producto;
     }else{
        cout<<"Codigo de producto no encontrado!"<<endl;
     }*/
}

int main(){
    /*
    Productos Mouse;
    Inventario Perifericos;
    int cantidad;
    
    Mouse.setDatos();
    cout<<"Cuantos productos va a registrar?: ";
    cin>>cantidad;
    Perifericos.setDatos(&Mouse, cantidad);
    Perifericos.getDatos();
    */
    int cantProductos;
    int cantidad, codigo;
    Productos *inicio=new Productos;
    //Estructuras de tipo Listas enlazadas(Pilas y Colas)
    
    Productos *busqueda = new Productos;
    cout<<"Cuantos productos desea registrar: ";
    cin>>cantProductos;
    Productos *productos = new Productos[cantProductos];
    inicio=productos;
    for(int cont=0;cont<cantProductos;cont++){
        productos->setDatos();
    }
    
    Inventario *inventario = new Inventario[cantProductos];
    for(int cont=0;cont<cantProductos;cont++, cantidad=0){
        cout<<"Cual es el CODIGO del producto que desea registrar en el inventario? :";
        cin>>codigo;
        cout<<"Ingrese la cantidad del inventario: ";
        cin>>cantidad;
        
        busqueda= fnBusqueda(codigo,productos,inicio);
        
//        inventario.setDatos(,cantidad);
    }
    
    
    return 0;
}