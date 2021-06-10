/* Pedir al usuario N números, almacenarlos en un arreglo dinámico
posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla.
*/

#include <iostream>

using namespace std;

int numEelementos;
int *arregloNumeros;

void setDatos(){
    cout<<"Cuantos valores desea registrar?: ";
    cin>>numEelementos;
    
    arregloNumeros = new int[numEelementos];
    
    for(int contador=0; contador<numEelementos; contador++){
        cout<<"Ingrese el elemento numerico "<<contador+1<<":";
        cin>>*(arregloNumeros+contador);
    }
}

void mostrarDatos(int *datos,int cantidad){
    for(int contador=0; contador<cantidad; contador++){
        cout<<*(datos+contador)<<endl;
    }
}
//Funcion ordenar de forma ascendente y descendente
void ordenarMetodoBurbuja(int *datos,int cantidad){
    int auxiliar;
    for(int a=0; a<cantidad; a++){
        for(int b=0;b<(cantidad-1);b++){
            if(*(datos+b) > *(datos + b + 1)){
                auxiliar = *(datos+b);
                *(datos+b)=*(datos+b+1);
                *(datos+b+1)=auxiliar;
            }
            
        }
    }
}
//Investigar dos metodos de ordenamiento mas

int main(){
   setDatos();
   cout<<"\n\tNUMEROS INGRESADOS(Sin Ordenar):"<<endl;
   mostrarDatos(arregloNumeros,numEelementos);
   ordenarMetodoBurbuja(arregloNumeros,numEelementos);
   cout<<"\n\tNUMEROS INGRESADOS(Ordenados asc):"<<endl;
   mostrarDatos(arregloNumeros,numEelementos);
   delete[] arregloNumeros;
   return 0;
}

