// C++ code
//
const int sensorPin=A0;
const int ledPin=4;
const int threshold=300;
void setup()
{
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  int sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if (sensorValue < threshold)
{ digitalWrite(ledPin,HIGH);
} else
{ digitalWrite(ledPin,LOW);
}
  delay(1000);
}
