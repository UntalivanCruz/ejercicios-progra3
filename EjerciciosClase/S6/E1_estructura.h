#include <iostream>
using namespace std;

class Billetera{
    public:
        Billetera(int valor,string nombre){
            monto=valor;
            moneda=nombre;
        }
        
        void getValor(){
            cout<<"El valor: "<<monto<<endl;
        }
    
    private:
        int monto;
        string moneda;
};