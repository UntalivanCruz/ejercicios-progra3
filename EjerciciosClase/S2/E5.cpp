/* ESTRUCTURAS SECUENCIALES
...
...
cout
cin
variable= 5+4

ESTRUCTURAS DECISION

IF ELSE
SWITCH CASE

ESTRUCTURAS REPETITIVAS

WHILE
DO WHILE
FOR

FUNCION

POO -> CLASES 
*/
/*
Mostrar un mensaje indicando el dia de la semana o el nombre del mes
segun lo que desee ver el usuario.
por ejmplo: quiero saber el dia 1 de la semana, responder Lunes
quiero saber el mes 6 , responder Junio
*/

#include <iostream>
using namespace std;

int main(){
    bool opcionMenu=0; //0 FALSE // 1 TRUE
    int dias=0,mes=0;
    
    cout<<"Bienvenido, Desea saber el dia de la semana? 1.Si 0.No, el mes deseo saber:";
    cin>>opcionMenu;
    
    //TRUE o FALSE
    if(opcionMenu){
        cout<<"Ingrese el numero del dia de la semana:";
        cin>>dias;
        switch(dias){
                case 1:
                    cout<<"El dia de la semana es Lunes";
                    break;
                 case 2:
                    cout<<"El dia de la semana es Martes";
                    break;
                 case 3:
                    cout<<"El dia de la semana es Miercoles";
                    break;
                 case 4:
                    cout<<"El dia de la semana es Jueves";
                    break;
                 case 5:
                    cout<<"El dia de la semana es Viernes";
                    break;
                 case 6:
                    cout<<"El dia de la semana es Sabado";
                    break;
                 case 7:
                    cout<<"El dia de la semana es Domingo";
                    break;
                default:
                    cout<<"El numero para saber el dia es incorrecto";
                    break;
            }
        }else{
            cout<<"Ingrese el numero del mes calendario:";
            cin>>mes;
                switch(mes){
                    case 1:
                        cout<<"Enero";
                        break;
                    case 2:
                        cout<<"Febrero";
                        break;
                    case 3:
                        cout<<"Marzo";
                        break;
                    case 4:
                        cout<<"Abril";
                        break;
                    case 5:
                        cout<<"Mayo";
                        break;
                    case 6:
                        cout<<"Junio";
                        break;
                    case 7:
                        cout<<"Julio";
                        break;
                    case 8:
                        cout<<"Agosto";
                        break;
                    case 9:
                        cout<<"Septiembre";
                        break;
                    case 10:
                        cout<<"Octubre";
                        break;
                    case 11:
                        cout<<"Noviembre";
                        break;
                    case 12:
                        cout<<"Diciembre";
                        break;
                    default:
                        cout<<"El numero para el mes no existe";
                        break;
                }
                
            }
    return 0;
}