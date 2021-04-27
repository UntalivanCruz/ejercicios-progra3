/*
Una empresa grande paga a sus vendedores mediante comisiones. 
Los vendedores reciben $200 por semana, más el 9 % de sus ventas brutas durante 
esa semana. Por ejemplo, un vendedor que vende $5000 de mercancía en una semana,
recibe $200 más el 9 % de 5000, o un total de $650. Ingresará por cada vendedor 
el valor de ventas brutas, luego calculará y mostrará el pago total. 
El usuario tendrá la opción de repetir o terminar el programa. Al finalizar, 
se debe mostrar el promedio de los pagos totales que fueron calculados para los 
vendedores.
*/

#include <iostream>

using namespace std;

int main(){
    bool status=false;
    double totalVentas, comisiones, pagoTotalVendedor, promediopagos=0;
    string deseacont;
    int contador, vendedores;
    
    contador=1;
    
    cout<<" a cuantos vendedores desea calacular: "; 
    cin>>vendedores;
    while(contador<=vendedores){
        cout<<"¿Cuántas fueron las ventas del vendedor?\n";
        cin>>totalVentas;
        
        comisiones=totalVentas*0.09;
        pagoTotalVendedor=comisiones+200;
        cout<<"El pago total del vendedor es: "<<pagoTotalVendedor<<endl;
    }
    cout<<" Desea calacular a otro vendedor? "; 
    cin>>status;

    return 0;
}


