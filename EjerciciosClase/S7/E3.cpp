#include <iostream>

using namespace std;
//this es un apuntador que guarda el entorno actual de ejecucion
class Ticket{
    public:
        Ticket(int codigo){
            this->codigo=codigo;
            //(*this).codigo=codigo;
        }
        
        Ticket(){
            cout<<"Boleto creado"<<endl;
        }
        
        float precio;
        string *Estadio;
    private:
        int codigo;
};


int main(){
    string Estadio="Azteca";
    Ticket *partidoCruzAzul = new Ticket(1001);
    
    partidoCruzAzul->precio = 10;
    //(*partidoCruzAzul).precio =20;
    
    cout<<partidoCruzAzul->precio<<endl;
   // cout<<(*partidoCruzAzul).precio<<endl;
    
    partidoCruzAzul->Estadio = &Estadio;
    
    cout<< *partidoCruzAzul->Estadio<<endl;
    delete partidoCruzAzul;
    
    //Sala Cine
    int capacidad;
    cout<<"Cual es la capacidad del cine:";
    cin>>capacidad;
    Ticket *Cine = new Ticket[capacidad];
    
    /*
    Ticket ticket1;
    Ticket ticket2;
    ...
    */
    
    cout<<Cine<<endl;
    
    delete[] Cine; 
    return 0;
}