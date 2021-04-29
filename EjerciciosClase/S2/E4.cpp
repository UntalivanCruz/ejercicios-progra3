/* Desarrollar un programa que calcule el descuento de una compra de artículos, que se aplicará de acuerdo al departamento y el tipo de cliente. 
Se debe pedir al usuario que ingrese el valor total de la compra, el departamento y el tipo de cliente. Al final, 
debe mostrar en lempiras de cuánto es el descuento y el valor final a pagar. El programa debe repetirse hasta que el usuario ya no desee continuar.
Departamento	Tipo Cliente	Porcentaje de Descuento
A	1	30 %
	2	15 %
B	1	25 %
	2	12 %
C	1	10 %
	2	5 %
*/

//BEATRIZ con las directivas, funcion main, variables, pedir datos
#include <iostream>

using namespace std;

int main()
{
	double valortotal, departamento, descuento, valorfinal;
	int tipocliente;
	
	cout<<"Ingrese codigo cliente: ";
	cin>>tipocliente;
	cout<<"\nIngrese Departamento: ";
	cin>>departamento;
	cout<<"\nIngrese valor Total: ";
	cin>>valortotal;
	cout<<"El descuento es: ";
	cin>>descuento;
	cout<<"El valor final a pagar es: ";
	cin>>valorfinal;
	
	
}

//CRISTHIAM Ciclo, Validaciones y la impresion de salida
