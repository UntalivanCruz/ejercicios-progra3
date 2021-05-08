#include <iostream>
#include <string>
using namespace std;

//Estructuras -> se instancian muchos objetos
class EquiposFutbol{
  private:
    string competicion;
    //competicion="Champions";
  public:
    int goles;
    void getGoles(){
        competicion="Champions";
        cout<<"Goles anotados en "<<competicion<<":"<<goles<<endl;
    }
  protected:

};

int main(){
    EquiposFutbol realMadrid;
    EquiposFutbol chelsea;
    
    realMadrid.goles=0;
    chelsea.goles=2;
    
    realMadrid.getGoles();
    chelsea.getGoles();
    
    return 0;
}