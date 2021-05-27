//Estrucuta, definicion, modelado
#include <string>
using std::string;

class materia{
  public:
    materia(int,string);
    bool setValoracion(int);
    void getInformacion();
  private:
    string nombre;
    int codigo ;
    bool estatus ;
    int valoracion ;
};