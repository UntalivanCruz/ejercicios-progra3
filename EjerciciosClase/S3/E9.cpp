class Led{
public:
  Led(int _pin){
    pin=_pin;
    pinMode(pin,OUTPUT);
  }
  
  void luzIntermitente(int tiempo){
  	digitalWrite(pin,HIGH);
  	delay(tiempo);
  	digitalWrite(pin,LOW);
  	delay(tiempo);
  }
  
private:
int pin;
};

Led bombilloRojo(12);
Led bombillo(13);
void setup()
{

}

void loop()
{
	bombilloRojo.luzIntermitente(1000);
  bombillo.luzIntermitente(500);
}
