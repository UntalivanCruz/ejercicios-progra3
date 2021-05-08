/*
    una funcion que permita simular el consumo de energia
    y calcule la factura del mes
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

double ObtenerConsumokWh(){
    srand (time(NULL));
    return rand() % 100;
}

void ObtenerDatos(){
    int lecturaInicial=0, lecturaFinal=0, consumokWh=0;
    cout<<"Ingrese la lectura del medidor electrico: ";
    cin>>lecturaInicial;
    consumokWh=ObtenerConsumokWh();
    lecturaFinal = lecturaInicial + consumokWh;
    
    cout<<"Su consumo de energia para este mes es de "<< consumokWh<<" kWh"<<endl;
    cout<<lecturaInicial<<" - " <<lecturaFinal<< " kWh"<<endl;
}

int main(){
    ObtenerDatos();    
    return 0;
}