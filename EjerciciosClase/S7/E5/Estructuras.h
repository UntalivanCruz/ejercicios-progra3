#ifndef Estructuras
#define Estructuras

#include <string>
using std::string;

class Productos{
    public:
        void setDatos();
        void getDatos();
        int getCodigo();
    
    private:
        int codigo;
        string nombre;
        string categoria;
};

class Inventario{
    public:
        void setDatos(Productos *, int);
        void getDatos();
        bool movimiento(bool, int);
    private:
        Productos * producto;
        int cantidad;
};

#endif