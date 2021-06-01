//Uso de apuntadores con arreglos

#include <iostream>

using namespace std;

int main(){
    int numeros[5]={52,45,63,98,4};
    int *apunt;
    
    apunt=numeros; //== apunt = numeros[0];
    /*
    //dos pasos
    cout<<"Posicion 0: "<<*apunt <<endl;
    apunt++;
    //un solo paso
    cout<<"Posicion 1: "<<*apunt++ <<endl;
    
    cout<<"Posicion 2: "<<*apunt <<endl;
    
    cout<<"Posicion 3: "<<*++apunt <<endl;
*/
    for(int c=0;c<5; c++, apunt++){
        cout<<*apunt <<endl;
    }
    
    return 0;
}

    /* ++  Si lo coloco antes de la variable, primero va incrementar
     ++ Si lo coloco despues primero muestra la variable y despues incrementa
     --
     =+
     +=
     -=
     =-
    */