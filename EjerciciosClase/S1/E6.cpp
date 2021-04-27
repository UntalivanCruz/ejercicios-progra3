/*+
TABLAS DE MULTIPLICAR
*/

#include <iostream>
using namespace std;

int main(){
	int Tabla, Contador;
	int limite=20;
	cout<<"Ingrese la tabla de multiplicar: ";
	cin>>Tabla;
	
	Contador=1;
	
	while(Contador<=limite){
		cout<<Tabla<<" x "<<Contador<<" : "<<Tabla*Contador<<endl;
		Contador++;
	}
	return 0;
}
