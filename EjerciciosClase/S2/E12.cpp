/*
Un usuario elije cara o cruz y el programa va a mostrar en cuantos
intentos sale el lado de la moneda que elijio
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    bool eleccionMoneda=0, gano=0;
    int ladoGanador=0, intentos=1;
    int numRandom=0;
    srand (time(NULL));
    
    cout<<"Seleccione un lado de la moneda (0. CARA, 1. CRUZ): ";
    cin>>eleccionMoneda;
    do{
        numRandom = rand() % 2;
        //OPERADOR TERCIARIO
        ladoGanador = numRandom == 1 ? 1 : 0;
        // CONDICIONANTE TRUE|FALSE ? TRUE : FALSE ;
        
        if(ladoGanador==eleccionMoneda){
            gano=1;
        }else{
            gano=0;
            intentos++;
        }
    }while(!gano);
    cout<<"\nGano en el intento numero "<<intentos<<endl;
    return 0;
}
