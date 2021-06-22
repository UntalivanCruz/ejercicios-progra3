//Creo una variable
var materia = 'Programacion'; //global
let nota = 10 //privado scope local
const codigo = 20 //dato fijo
//codigo=50

nota = 10 + 5

if(nota > 10){
    console.log("Si la nota es mayor")    
}else{
    console.log("No, la nota no es mayor")  
}
/*
function saludar(){
    console.log(`Estamos en la clase de ${materia}`);
}
*/
//CONSULTA A UNA BD
setTimeout( 
    () => console.log(`Estamos en la clase de ${materia}`) ,
    6000
)

//Menu
console.log("Hola")

