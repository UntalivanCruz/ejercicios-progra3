//LISTAS ENLAZADAS

/*array, debemos reservar un espacio y la memoria es continua

Lista enlazada, vamos ocupando el espacio que necesitamos

*/
// RECURSIVIDAD
#include <iostream>

using namespace std;

class Caja{
    public:
        int codigo;
       // addDatos();
       // mostrarDatos();
        Caja *continuacion;
    private:
        //
};

void addCajas(Caja *&lista, int codigo){
    Caja *nueva_caja = new Caja();
    nueva_caja->codigo = codigo;
    
    Caja *a1=lista;
    Caja *a2;
    
    while((a1 != NULL) && (a1->codigo <codigo)){
        a2=a1;
        a1=a1->continuacion;
    }
    
    if(lista == a1){
        lista = nueva_caja;
    }else{
        a2->continuacion = nueva_caja;
    }
    
    nueva_caja->continuacion = a1;
}

void mostrarCajas(Caja *lista){
    Caja *recorre = new Caja();
    recorre = lista;
    
    while(recorre != NULL){
        cout<<recorre->codigo<<" -> ";
        recorre=recorre->continuacion;
    }
    cout<<endl;
}

Caja * buscarCaja(Caja *lista, int codigo){
    bool band=false;
    Caja *recorre = new Caja();
    recorre = lista;
    Caja *encontrada= NULL;
     while(recorre != NULL){
        if(recorre->codigo == codigo){
            band=true;
            encontrada=recorre;
        } 
        recorre = recorre->continuacion;
     }
     
    if(band==false){
        cout<<"El valor a buscar no se encuentra"<<endl;
    }else{
        cout<<"El valor se encontro"<<endl;
    }
    return encontrada;
}

void borrarCaja(){
    //
    delete caja;
}

int main(){
    //LISTA MASTER
    Caja *listaMaster = NULL;
    int opcion,codigo;
    bool salir=false;

    while(!salir){
        cout<<"\tMENU\n1.Agregar Cajas\n2.Mostrar Inventario\n3.Buscar\n4.Salir"<<endl;
        cout<<"Ingrese la opcion:";
        cin>>opcion;
        switch(opcion){
            case 1:
                cout<<"Ingrese el codigo de la caja:";
                cin>>codigo;
                addCajas(listaMaster,codigo);
                break;
            case 2:
                mostrarCajas(listaMaster);
                break;
            case 3:
                cout<<"Que codigo desea buscar?: ";
                cin>>codigo;
                cout<<"Posicion Caja: "<<buscarCaja(listaMaster,codigo)<<endl;
                break;
            case 4:
                salir=1;
                break;
        }
    }
    
    return 0;
}