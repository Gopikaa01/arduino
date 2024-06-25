const int piezopin=7;
const int ledpin=9;
int buttonstate=0;
void setup() {
pinMode(ledpin,OUTPUT);
pinMode(piezopin,INPUT);
}
void loop()
{
int sensorValue=analogRead(piezoPin);


if(sensorValue>100)
{if(buttonstate==0)
  
{ buttonState=1;



  digitalWrite(ledpin,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
