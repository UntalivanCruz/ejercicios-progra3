{"filter":false,"title":"funciones.h","tooltip":"/EjerciciosClase/S8/funciones.h","undoManager":{"mark":23,"position":23,"stack":[[{"start":{"row":0,"column":0},"end":{"row":10,"column":1},"action":"insert","lines":["void setDatos(){","    cout<<\"Cuantos valores desea registrar?: \";","    cin>>numEelementos;","    ","    arregloNumeros = new int[numEelementos];","    ","    for(int contador=0; contador<numEelementos; contador++){","        cout<<\"Ingrese el elemento numerico \"<<contador+1<<\":\";","        cin>>*(arregloNumeros+contador);","    }","}"],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":2}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":4}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"remove","lines":["",""],"id":5}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["#"],"id":6},{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["i"]},{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":["f"]}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":3},"action":"remove","lines":["#if"],"id":7},{"start":{"row":0,"column":0},"end":{"row":1,"column":19},"action":"insert","lines":["#ifndef Estructuras","#define Estructuras"]}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":19},"action":"remove","lines":["Estructuras"],"id":8},{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":["f"]},{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"insert","lines":["u"]},{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"insert","lines":["n"]},{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"insert","lines":["c"]},{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"insert","lines":["i"]},{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"insert","lines":["o"]},{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"insert","lines":["n"]},{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"insert","lines":["e"]},{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":["s"]}],[{"start":{"row":1,"column":8},"end":{"row":1,"column":19},"action":"remove","lines":["Estructuras"],"id":9},{"start":{"row":1,"column":8},"end":{"row":1,"column":9},"action":"insert","lines":["f"]},{"start":{"row":1,"column":9},"end":{"row":1,"column":10},"action":"insert","lines":["u"]},{"start":{"row":1,"column":10},"end":{"row":1,"column":11},"action":"insert","lines":["n"]},{"start":{"row":1,"column":11},"end":{"row":1,"column":12},"action":"insert","lines":["c"]}],[{"start":{"row":1,"column":8},"end":{"row":1,"column":12},"action":"remove","lines":["func"],"id":10},{"start":{"row":1,"column":8},"end":{"row":1,"column":17},"action":"insert","lines":["funciones"]}],[{"start":{"row":13,"column":1},"end":{"row":14,"column":0},"action":"insert","lines":["",""],"id":11},{"start":{"row":14,"column":0},"end":{"row":15,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":6},"action":"insert","lines":["#endif"],"id":12}],[{"start":{"row":3,"column":14},"end":{"row":3,"column":37},"action":"insert","lines":["int *datos,int cantidad"],"id":13}],[{"start":{"row":1,"column":17},"end":{"row":2,"column":0},"action":"insert","lines":["",""],"id":14},{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":3,"column":0},"end":{"row":3,"column":19},"action":"insert","lines":["#include <iostream>"],"id":15}],[{"start":{"row":3,"column":19},"end":{"row":4,"column":0},"action":"insert","lines":["",""],"id":16}],[{"start":{"row":4,"column":0},"end":{"row":4,"column":20},"action":"insert","lines":["using namespace std;"],"id":17}],[{"start":{"row":8,"column":9},"end":{"row":8,"column":22},"action":"remove","lines":["numEelementos"],"id":18},{"start":{"row":8,"column":9},"end":{"row":8,"column":17},"action":"insert","lines":["cantidad"]}],[{"start":{"row":10,"column":4},"end":{"row":10,"column":18},"action":"remove","lines":["arregloNumeros"],"id":19},{"start":{"row":10,"column":4},"end":{"row":10,"column":9},"action":"insert","lines":["datos"]}],[{"start":{"row":10,"column":20},"end":{"row":10,"column":33},"action":"remove","lines":["numEelementos"],"id":20},{"start":{"row":10,"column":20},"end":{"row":10,"column":28},"action":"insert","lines":["cantidad"]}],[{"start":{"row":12,"column":33},"end":{"row":12,"column":46},"action":"remove","lines":["numEelementos"],"id":21},{"start":{"row":12,"column":33},"end":{"row":12,"column":41},"action":"insert","lines":["cantidad"]}],[{"start":{"row":14,"column":15},"end":{"row":14,"column":29},"action":"remove","lines":["arregloNumeros"],"id":22},{"start":{"row":14,"column":15},"end":{"row":14,"column":20},"action":"insert","lines":["datos"]}],[{"start":{"row":16,"column":1},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":23},{"start":{"row":17,"column":0},"end":{"row":18,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":18,"column":0},"end":{"row":22,"column":1},"action":"insert","lines":["void mostrarDatos(int *datos,int cantidad){","    for(int contador=0; contador<cantidad; contador++){","        cout<<*(datos+contador)<<endl;","    }","}"],"id":24}]]},"ace":{"folds":[],"scrolltop":240,"scrollleft":0,"selection":{"start":{"row":18,"column":33},"end":{"row":18,"column":33},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":9,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1623287540477,"hash":"75298aa573e13a9b4ad00f71287c74c00b6748a1"}