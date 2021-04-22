/* APLICAR UN DESCUENTO DEL TOTAL DE COMPRAS DE UN USUARIO DETERMINADO POR LOS SIGUIENTES VALORES:
TOTAL DE VENTAS ES ENTRE 0 A 1000 LPS -> 10% DESCUENTO
TOTAL DE VENTAS ES ENTRE 1001 A 5000 LPS -> 20% DESCUENTO
TOTAL DE VENTAS ES MAYOR A 5000 LPS -> 30% DE DESCUENTO
*/

//ESTRUCTURAS DE DECISION IF

#include <iostream>

using namespace std;

int main(){
    //DECLARACION DE VARIABLES
    
    float totalVentas=0;
    float descuento=0;
    float totalNeto=0;
    
    cout<<"Ingrese total de ventas:";
    cin>>totalVentas;
    
    //COMPARACIONES >,<,>=,<=, ==
    //OPERADOR LOGICO AND && y OR ||
    
    if(totalVentas>=0 && totalVentas<=1000){
        descuento= totalVentas * 0.1;
    }
    else if(totalVentas>=1001 && totalVentas<=5000)
        {
            descuento= totalVentas * 0.2;
        }
         else if(totalVentas>5000)
            {
                descuento= totalVentas * 0.3;
            }
            else{
                descuento=0;
            }
    
    totalNeto=totalVentas-descuento;
    
    cout<<"Tu subtotal es: "<< totalVentas<< "\nDescuento: "<< descuento<<"\nTotal Neto: "<<totalNeto<<endl;
    return 0;
}