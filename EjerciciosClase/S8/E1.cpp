/* Pedir al usuario N números, almacenarlos en un arreglo dinámico
posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla.
UTILIZAR ALGORITMOS DE BUSQUEDA
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

void ordenarMetodoBurbuja(int *datos,int cantidad){
    int auxiliar;
    int opc;
    cout<<"de que forma quiere ver el orden? Asc = 1     Desc = 0"<<endl;
    cin>>opc;
    if(opc == 1){
    	cout<<"Forma ascendente"<<endl;
	    for(int a=0; a<cantidad; a++){
	        for(int b=0;b<(cantidad-1);b++){
	            
	            if(*(datos+b) > *(datos + b + 1)){
	                auxiliar = *(datos+b);
	                *(datos+b)=*(datos+b+1);
	                *(datos+b+1)=auxiliar;
	            }
	            
	        }
	    }	
	}else if(opc == 0){
		cout<<"Forma descendente"<<endl;
		for(int a=0; a<cantidad; a++){
	        for(int b=0;b<(cantidad-1);b++){
	            
	            if(*(datos+b) < *(datos + b + 1)){
	                auxiliar = *(datos+b);
	                *(datos+b)=*(datos+b+1);
	                *(datos+b+1)=auxiliar;
	            }
	            
	        }
	    }
	}
    
    
}

int main(){
	int seguir;
	
	while(seguir ==0){
		setDatos();
   		//cout<<"\n\tNUMEROS INGRESADOS(Sin Ordenar):"<<endl;
  	
	    ordenarMetodoBurbuja(arregloNumeros,numEelementos);
	    mostrarDatos(arregloNumeros,numEelementos);
	   /*cout<<"\n\tNUMEROS INGRESADOS(Ordenados asc):"<<endl;
	   mostrarDatos(arregloNumeros,numEelementos);*/
	   delete[] arregloNumeros;	
	   
	   cout<<"Desea Seguir?  SI= 0   NO= 1 : ";
	   cin>>seguir;
	}	
   
   return 0;
}

