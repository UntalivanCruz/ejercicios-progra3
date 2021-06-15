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
    
    while((a1 != NULL) 
    //&& (a1->codigo <codigo)
    ){
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

//Borro la primer caja, se pierden las demas...
void borrarCaja(Caja *&lista, int codigo){
    
    Caja *CajaBorrar;
    Caja *auxiliar = NULL;
    
    CajaBorrar = lista;
    
    //Recorrer la lista de cajas
    while((CajaBorrar != NULL) && (CajaBorrar->codigo != codigo)){
        auxiliar = CajaBorrar;
        CajaBorrar = CajaBorrar->continuacion;
    }
    
    if(CajaBorrar == NULL){
        cout<<"La caja no existe"<<endl;
    }else if(auxiliar == NULL){
        lista = lista->continuacion;
        delete CajaBorrar;
        cout<<"Se borro con el metodo 1"<<endl;
    }else{
        auxiliar->continuacion = CajaBorrar->continuacion;
        delete CajaBorrar;
        cout<<"se borro con el metodo 2"<<endl;
    }
}

void eliminarListado(Caja *&lista){
    Caja *aux=lista;
    while(aux->continuacion!=NULL){
        aux=lista->continuacion;
        delete lista;
        lista=aux->continuacion;
    }

}

int main(){
    //LISTA MASTER
    Caja *listaMaster = NULL;
    int opcion,codigo;
    bool salir=false,eliminar=false;

    while(!salir){
        cout<<"\tMENU\n1.Agregar Cajas\n2.Mostrar Inventario\n3.Buscar\n4.Borrar una caja\n5.Borrar todas las cajas\n6.Salir"<<endl;
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
                cout<<"Que caja desea eliminar? Ingrese el codigo: ";
                cin>>codigo;
                borrarCaja(listaMaster,codigo);
                break;
            case 5:
                cout<<"Desea eliminar la lista?: 1.SI 0.NO : ";
                cin>>eliminar;
                if(eliminar){
                    eliminarListado(listaMaster);
                    cout<<"Lista eliminada con exito"<<endl;
                }
                break;
            case 6:
                salir=1;
                break;
        }
    }
    
    return 0;
}