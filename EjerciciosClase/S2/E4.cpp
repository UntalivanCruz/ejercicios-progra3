/* Desarrollar un programa que calcule el descuento de una compra de artículos, que se aplicará de acuerdo al departamento y el tipo de cliente. 
Se debe pedir al usuario que ingrese el valor total de la compra, el departamento y el tipo de cliente. Al final, 
debe mostrar en lempiras de cuánto es el descuento y el valor final a pagar. El programa debe repetirse hasta que el usuario ya no desee continuar.

Departamento	Tipo Cliente	Porcentaje de Descuento
A					1						30 %
					2						15 %
B					1						25 %
					2						12 %
C					1						10 %
					2						5 %
*/

//BEATRIZ con las directivas, funcion main, variables, pedir datos
#include <iostream>

using namespace std;

int main()
{
	char depto;
	int tipoCliente=0;
	bool salir=0;   //0==FALSE  1==TRUE
	double totalCompra=0, descuento=0, valorFinal=0;
	
	do{
		cout<<"Ingrese codigo cliente(1 o 2): ";
		cin>>tipoCliente;
		cout<<"\nIngrese Departamento(A, B, C): ";
		cin>>depto;
		cout<<"\nIngrese valor Total de la compra: ";
		cin>>totalCompra;
		
		switch(depto){
			case 'A':
				if(tipoCliente==1){
					descuento=totalCompra*0.3;
				}else{
					descuento=totalCompra*0.15;
				}
				break;
			case 'B':
				if(tipoCliente==1){
					descuento=totalCompra*0.25;
				}else{
					descuento=totalCompra*0.12;
				}
				break;
			case 'C':
				if(tipoCliente==1){
					descuento=totalCompra*0.1;
				}else{
					descuento=totalCompra*0.05;
				}
				break;
			default:
				cout<<"El departamento no tiene descuento";
				descuento=0;
				break;
		}
		valorFinal=totalCompra-descuento;
		
		cout<<"Subtotal: Lps. "<<totalCompra<<endl;
		cout<<"Descuento: Lps."<<descuento<<endl;
		cout<<"Total: Lps."<<valorFinal<<endl;
		cout<<"Desea continuar calculando ventas? 0. NO 1.SI"<<endl;
		cin>>salir;
	}while(salir);
	
	return 0;
}

//CRISTHIAM Ciclo, Validaciones y la impresion de salida
