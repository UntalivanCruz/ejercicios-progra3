/*
Pedir al usuario el rango de numeros que desean imprimir y debe mostrar los multiplos
de 10,100 y 1000 de los numeros comprendidos en el rango
Ejemplo: Rango: 1-4

N   10*N    100*N   1000*N
1   10      100     1000
2   20      200     2000
3   30      300     3000
4   40      400     4000
*/

// CARLOS Va directivas, main, variables, pedir rango.
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int RangoInicial, RangoFinal = 0;
    cout << "Ingrese el rango inicial: ";
    cin >> RangoInicial;

    cout << "Ingrese el rango final: ";
    cin >> RangoFinal;
    
    if(RangoInicial <= RangoFinal)
    {
        for (int i = RangoInicial; i <= RangoFinal; i++)
        {
            cout << i * 10 << " " << i * 100 << " " << i*1000 << "\n";
        }
    }
    else
    {
        cout << "El rango final no puede ser menor al rango inicial.";
    }
    
    return 0;
}