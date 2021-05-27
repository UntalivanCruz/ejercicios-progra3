void setup()
{
  pinMode(2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(2));
}