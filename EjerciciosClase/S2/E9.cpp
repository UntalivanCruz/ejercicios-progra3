#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    //FUNCIONES NECESARIAS PARA UN NUMERO ALEATORIO
  int numRandom=0;
  srand (time(NULL));
  numRandom = rand() % 11;
  numRandom +=50;
  
  //  50-60  =(60-50)=10
  
    cout<<"Numero aleatorio entre 0 a 100: "<< numRandom;
    return 0;
}