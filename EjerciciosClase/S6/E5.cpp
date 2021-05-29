#include <iostream>

using namespace std;

class Nota{
    public:
        string anotacion;
};

void total(int *valor){
    *valor= 100 * (*valor);
}

int main(){
    int resultado=5;
    cout<<"Valor inicial: "<<resultado<<endl;
   
    total(&resultado);
    
    cout<<"valor calculado: "<<resultado<<endl;
    
    Nota *objetoDinamico = new Nota();
    
    objetoDinamico->anotacion = "Hola";
    cout<< objetoDinamico->anotacion;
    return 0;
}