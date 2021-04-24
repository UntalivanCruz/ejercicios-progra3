/*+
TABLAS DE MULTIPLICAR
*/

#include <iostream>
using namespace std;

int main(){
	int Tabla, Contador;
	cout<<"Ingrese la tabla de multiplicar: ";
	cin>>Tabla;
	
	Contador=1;
	
	while(Contador<=10){
		cout<<Tabla<<" x "<<Contador<<" : "<<Tabla*Contador<<endl;
		Contador++;
	}
	return 0;
}
