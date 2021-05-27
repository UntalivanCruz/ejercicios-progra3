#include <iostream>
#include "E1_estructura.h"

using namespace std;

int main(){
    Billetera lempira(1,"HND");
    Billetera cienLempiras(100,"HND");
    
    lempira.getValor();
    cienLempiras.getValor();
    return 0;
}

//Separamos el codigo
/*
Separar las estructuras, Modelos, encabezados

con la implementacion ,Interfaz, las funciones de un modulo
*/