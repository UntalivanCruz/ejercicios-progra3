#include <iostream>
using namespace std;

int main(){
    int contador=5;
    int limite=5;
    /*
    while(contador<limite){
        cout<<"hola"<<endl;
        contador++;
    }
    */
    do{
        cout<<"hola"<<endl;
        contador++;
    }while(contador<limite);
    return 0;
}