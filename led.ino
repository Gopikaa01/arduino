const int ledpin=13;
const int buttonpin=2;
const int buttonstate=0;
void setup() {
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,OUTPUT);
}
buttonstate=digitalRead(buttonpin);


if(buttonstate==HIGH)
{digitalWrite(ledpin,HIGH);
}
else
{
  digitalWrite(ledpin,LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
