#include <iostream>

int main()
{
    //DECLARACION DE VARIABLES
    double n1, n2, suma, resta, multi, divi;
    //INGRESO DE DATOS
    std::cout << "Escriba el primer numero \n";
    std::cin >> n1;
    
    std::cout<<"Escriba el segundo numero \n";
    std::cin >> n2;
    
    //CALCULOS
    suma=n1+n2;
    resta=n1-n2;
    multi=n1*n2;
    divi=n1/n2;
    
    //SALIDA
    std::cout<< "La suma es "<< suma<< std::endl;
    std::cout<< "La resta es "<< resta<< std::endl;
    std::cout<< "La multiplicacion es "<< multi<< std::endl;
    std::cout<< "La division es "<< divi<< std::endl;
    
}