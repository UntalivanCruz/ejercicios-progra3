/*
FUNCION MAIN aqui es cuando arranca la placa arduino
*/

void setup()
{
  Serial.begin(9600);
  Serial.println("Hola este es un primer ejercicio en Arduino");

  int primerNumero=0;
  int segundoNumero=0;
  int total=0;
  
  primerNumero=10;
  segundoNumero=5;
  
  total=primerNumero+segundoNumero;
  Serial.println("El total es:" + String(total));
  
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop(){
  Serial.println("Hola");
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(500);
}