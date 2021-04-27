/*
1) Desarrolle una aplicación en C++ que determine si alguno de los clientes de una tienda de departamentos se ha excedido del límite de crédito en una cuenta. Para cada cliente se tienen los siguientes datos:
a. El número de cuenta
b. El saldo al inicio del mes
c. El total de todos los artículos cargados por el cliente en el mes
d. El total de todos los créditos aplicados a la cuenta del cliente en el mes
e. El límite de crédito permitido
El programa debe recibir como entrada cada uno de estos datos en forma de números enteros, debe calcular el nuevo saldo (= saldo inicial + cargos - créditos), mostrar el nuevo balance y determinar si este excede el límite de crédito del cliente. Para los clientes cuyo límite de crédito sea excedido, el programa debe mostrar el mensaje "Se excedió el límite de su crédito".
*/

// JULIO  Directivas, funcion main, definicion de variables, pedir dato
#include<iostream>
using namespace std;

int main(){
	float NumCuenta=0, SaldoInicio=0,TotalArticulos=0,TotalCredito=0,LimiteCredito=0, nuevosaldo=0;

	cout<<"ingrese el numero de cuenta: "<<endl;
	cin>>NumCuenta;
	cout<<"Ingrese el saldo al inicio del mes:" <<endl;
	cin>>SaldoInicio;
	cout<<"Ingrese el total de todos los artículos cargados por el cliente en el mes: "<<endl;
	cin>>TotalArticulos;
	cout<<" Ingrese el total de todos los créditos aplicados a la cuenta del cliente en el mes: "<<endl;
	cin>>TotalCredito;
	cout<<"Ingrese el límite de crédito permitido: " <<endl;
	cin>>LimiteCredito;
	
	
	nuevosaldo=SaldoInicio+TotalArticulos-TotalCredito;
	
	
	if(nuevosaldo > LimiteCredito )   
	{
		cout<< "Se excedió el límite de su crédito";
	}
		else
		
	cout<<"\nSu compra no excede el limite de credito "<<endl;	
	
	return 0;
}

//ALLAN Validaciones(IF) y mostrar los resultados