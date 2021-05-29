#include <iostream>

using namespace std;

int main(){
    int total=100;
    float compras=0;
    int descuento=0;
    int valor=0;
    
    int *ap=&total;
    int *desc1;
    float *apt2=&compras;
    
    *ap=120; //total=120
    cout<<"Primer cambio TOTAL: "<<total<<endl;
    desc1=ap;
    
    *desc1=*ap*2; //120*2
    cout<<"Segundo cambio TOTAL: "<<total<<endl;
    compras=20;
    
    desc1=ap;
    valor=20;
    *apt2=100;
    *desc1=20; //20
    cout<<"Tecer cambio TOTAL: "<<total<<endl;
    
    desc1=&valor;
    *apt2=20; //Compras:20
    *desc1=40;
    
    cout<<"\ntotal:"<<total<<endl;
    cout<<"compras: "<<compras<<endl;
    cout<<"descuento:"<<descuento<<endl;
    cout<<"Valor: "<<valor<<endl;
    return 0;
}