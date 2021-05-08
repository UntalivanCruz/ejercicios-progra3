/*
Estructura de clases para la materias de la universidad
Objetos (programacion, teoria de base de datos, ingles)
Funcion para Registrar notas
Funcion para mostra la nota y su observacion
*/

#include <iostream>

using namespace std;

class Materia{
  public:
    //CONSTRUCTOR
    Materia(int _codigo,string _nombre){
        codigo=_codigo;
        nombre=_nombre;
        nota=0;
    }
    
    void getInformacion(){
        cout<<"La materia es: "<<nombre<<endl;
        cout<<"Codigo: "<<codigo<<endl;
        cout<<"Nota: "<<nota<<" puntos"<<endl;
        cout<< (nota>59 ? "APROBADO" : "REPROBADO")<<endl;
    }
    
    void insertarDatos(int _valor){
        setNota(_valor);
    }
    
  private:
    int codigo;
    string nombre;
    int nota;
    
    int setNota(int _nota){
        nota = _nota;
        return nota;
    }
};

int main(){
    Materia Progra868(1208,"Programacion III");
    Materia Progra867(1024,"Programacion I");
    
    Progra867.insertarDatos(95);
    Progra868.insertarDatos(40);
    
    Progra867.getInformacion();
    Progra868.getInformacion();
    return 0;
}

/*
class ESTRUCTURA{
    public:
        ...variables, funciones y el constructor
    private:
        ..variables y funciones
}

int main(){
    ESTRUCTURA miObjeto1;
    ESTRUCTURA miObjeto2;
    ESTRUCTURA miObjeto3;
}
*/