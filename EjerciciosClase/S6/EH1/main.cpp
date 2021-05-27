#include <iostream>
#include "herencia.h"

using namespace std;

Materias::Materias(string _nombre, int _codigo){
    nombre=_nombre;
    codigo=_codigo;
    cout<<"Se dispara el constructor de Materias"<<endl;
}

//Constructor de Secciones
Secciones::Secciones(string _nombre,int _codigo, 
int _codSeccion, int _aula, int _horario)
:Materias(_nombre,_codigo){
    codSeccion=_codSeccion;
    aula=_aula;
    horario=_horario;
    cout<<"Se dispara el constructor de Secciones"<<endl;

}


void Materias::getMateria(){
    cout<<nombre<<endl;
    cout<<codigo<<endl;
}

void Secciones::getSeccion(){
    getMateria();
    cout<<"Codigo Seccion: "<<codSeccion<<"\tAula: "<<aula<<endl;
    cout<<"Horario: "<<horario<<" - "<<getHoraFinal()<<"\tDuracion:"<<duracion<<endl;
}

int Secciones::getHoraFinal(){
    return  (horario>=0 && duracion>=0) ? horario+duracion : horario;
}

void Secciones::setDuracion(int tiempo){
    duracion=tiempo;
}

int main(){
    Secciones seccion1("Ingles",1002,145,10,16);
    seccion1.getSeccion();
    
    return 0;
}