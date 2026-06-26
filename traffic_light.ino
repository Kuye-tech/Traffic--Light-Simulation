int redLED=8;
int blueLED=7;
int greenLED=6;
int yellowLED=5;
float pi=3.14;
int dit=750;




void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);

delay(dit);

 digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  
delay(dit);

digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  delay(dit);

digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  delay(dit);

 digitalWrite(redLED,LOW);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(dit);
  
   digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(dit);

digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
delay(dit);

digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  delay(dit);

  digitalWrite(redLED,LOW);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,LOW);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,LOW);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,LOW);
  digitalWrite(yellowLED,HIGH);
  delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,LOW);
delay(dit);

  digitalWrite(redLED,HIGH);
  digitalWrite(blueLED,HIGH);
  digitalWrite(greenLED,HIGH);
  digitalWrite(yellowLED,HIGH);
  
}
