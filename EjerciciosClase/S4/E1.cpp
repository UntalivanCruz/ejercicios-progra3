class ledSemaforo{
  public:
  	ledSemaforo(int _pin){
  		pin=_pin;
    	pinMode(pin,OUTPUT);
  	}
  
  	void luzIntermitente(){
  		encenderApagar(1,600);
      	encenderApagar(0,500);
  	}
  
  	void luzEstatica(int tiempo){
    	encenderApagar(1,tiempo);
      	encenderApagar(0,0);
  	}
    
  private:
  	int pin;
  	void encenderApagar(bool tipo,int tiempo){
      if(tipo){
      	digitalWrite(pin, HIGH);
      }else{
      	digitalWrite(pin, LOW);
      }
      delay(tiempo);
  	}
};

ledSemaforo luzRoja(7);
ledSemaforo luzAmarilla(3);
ledSemaforo luzVerde(2);

void semaforo(){
  luzRoja.luzEstatica(5000);
  	luzVerde.luzEstatica(6000);
  	for(int x=0;x<=5;x++){
  		luzVerde.luzIntermitente();
  	}
  	luzAmarilla.luzEstatica(3000);
    for(int x=0;x<=3;x++){
  		luzAmarilla.luzIntermitente();
  	}
  	luzRoja.luzEstatica(5000);
}

void setup()
{
	
}

void loop()
{
semaforo();
}