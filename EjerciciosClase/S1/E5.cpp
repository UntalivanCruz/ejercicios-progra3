/* Crear una aplicacion que permita brindar una retroalimentacion a la nota final de un estudiante. El programa va a pedir al docente ingresar tres notas (Primer Examen, Segundo Examen y acumulativo)
 y el total de esas notas debe indicar si el alumno es reprobado, bueno, muy bueno o sobresaliente.
 IF
*/

// INICIO DEL PROGRAMA, DEFINICION DE VARIABLES, PEDIR AL USUARIO LOS DATOS  ----BEATRIZ----

#include <string>
#include <iostream>
using namespace std;

int main()
{
int notaExamen1=0;
int notaExamen2=0;
int notaAcumulativo=0;
int notaFinal=0;
string obsNota="";

cout<<"Escriba la nota del Examen 1:";
cin>>notaExamen1;

cout<<"Escriba la nota del Examen 2:";
cin>>notaExamen2;

cout<<"Escriba la nota de Acumulativo:";
cin>>notaAcumulativo;





// CALCULO DE LAS NOTAS (Debe validar que cada nota no debe superar el 100(30 max primer examen, 30 max segundo examen, 40 max Acum))   ----- JOAQUIN -----
if(notaExamen1>30){
 notaExamen1=30;
}
if(notaExamen2>30){
 notaExamen2=30;
}
if(notaAcumulativo>40){
 notaAcumulativo=40;
}
notaFinal=notaExamen1+notaExamen2+notaAcumulativo;





//DETERMINAR LA RETROALIMENTACION( validacion y guarde en una variable el estatus(reprobado, bueno....)) ----- RODOLFO -----

if(notaFinal<60)
{

obsNota="reprobado";

 
}

else if(notaFinal>=70 && notaFinal<80)
{

obsNota="bueno";

 
}
else if(notaFinal>=80 && notaFinal<90)
{
 obsNota="muy bueno";

}
else
{
obsNota="sobresaliente";
 
}



// IMPRIMIR LA SALIDA (Detalle de las notas, nota final y la retroalimentacion, finalizar el programa) -----  ALLAN  -------
cout<<"\nSu nota de primer examen es: "<<notaExamen1<<endl;
cout<<"Su nota de segundo examen es: "<<notaExamen2<<endl;
cout<<"Sus acumulados son: "<<notaAcumulativo<<endl;
cout<<"Su nota final es: "<<notaFinal<<endl;
cout<<"Su observacion es: "<<obsNota<<endl;

return 0;
}