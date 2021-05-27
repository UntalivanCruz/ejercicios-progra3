//Implementacion
#include <iostream>
#include "materiasE.h"
//#include "../materiasE.h"
//#include "../S3/E3.cpp"
//#include "E1_estructura.h"

using namespace std;

materia::materia(int _codigo, string _nombre){
    codigo=_codigo;
    nombre=_nombre;
    estatus=1;
}

bool materia::setValoracion(int puntuacion){
    valoracion=puntuacion;
    estatus=1;
    return estatus;
}

void materia::getInformacion(){
    cout<<"Nombre: "<<nombre<<endl ;
    cout<<"Codigo:"<<codigo<<endl;
    cout<<"Puntaje:"<<valoracion<<endl;
}

int main(){
    materia programacion(1001,"Progra3");
    programacion.setValoracion(10);
    programacion.getInformacion();
    cout<<endl;
    Billetera Lps(100,"Dorado");
    Lps.getValor();
    return 0;
}