#include <string>
using std::string;

class Materias{
  public:
    Materias(string, int);
    
  protected:
    void getMateria();

  private:
    string nombre;
    int codigo;
};

// HERENCIA
class Secciones : public Materias{
    public:
        Secciones(string, int,int,int,int);
        void getSeccion();
        void setDuracion(int);
        int getHoraFinal();
    private:
        int codSeccion;
        int aula;
        int horario;
        int duracion;
};


/*
main -> secciones(public) ->  materias(public)

secciones -> materias(public, protected)

Private: Solo su misma clase puede acceder a el
Protected: su misma clase y una herencia puede acceder a el
Public: main, clase, su misma clase(TODOS) pueden acceder a el
*/