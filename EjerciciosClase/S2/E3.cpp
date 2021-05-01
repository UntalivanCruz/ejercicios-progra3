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

    float totalVentas, comisiones, pagoTotalVendedor, ventasNeto=0,promedioPagos=0;
    int vendedor, cantVendedores;
    
    vendedor=1;
    
    cout<<" a cuantos vendedores desea calacular: "; 
    cin>>cantVendedores;
    while(vendedor<=cantVendedores){
        cout<<"¿Cuántas fueron las ventas del vendedor "<<vendedor<<"?\n";
        cin>>totalVentas;
        
        comisiones=totalVentas*0.09;
        pagoTotalVendedor=comisiones+200;
        cout<<"El pago total del vendedor es: "<<pagoTotalVendedor<<endl;
        ventasNeto += pagoTotalVendedor; 
        // =
        // +=   ventasNeto = ventasNeto + pagoTotalVendedor;
        vendedor++;
    }
    cout<<"\nEl total de ventas es de "<<ventasNeto<<endl; 
    promedioPagos=ventasNeto/cantVendedores;
    cout<<"El promedio de la comision de los vende es de "<<promedioPagos<<endl;
    return 0;
}


