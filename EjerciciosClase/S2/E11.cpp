//Quiero sacar el numero aleatorio entre dos rangos

//EJEMPLO: 15-20 y 40-50  = 17, 42,20, 49

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    //FUNCIONES NECESARIAS PARA UN NUMERO ALEATORIO
  int rDet=0,numRandom=0;
  srand (time(NULL));

rDet= rand() % 2;
if(rDet==0){
  numRandom = rand() % 6;
  numRandom +=15;   
}
 else{
 numRandom = rand() % 11;
  numRandom +=40; 
 }
    cout<<"Numero aleatorio entre 15-20 o 40-50: "<< numRandom;
    return 0;
}