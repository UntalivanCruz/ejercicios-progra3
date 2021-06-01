#include <iostream>

using namespace std;

/*
new: Reservar de forma dinamica espacio en memoria
delete: Eliminar ese espacio en memoria
*/

int main(){
    int * numeros = new int[5];
    
    *numeros=10;
    cout<<*numeros<<endl;
    numeros++;
    *numeros=20;
    cout<<*numeros--<<endl;
    cout<<*numeros<<endl;
    
    delete[] numeros;
    return 0;
}