#include<Servo.h>
int servoPin = 9;
float servoPos;
Servo myServo;
int xPin = A0;
int xVal;
int t=150;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(xPin,INPUT);

}

void loop() {
  xVal=analogRead(xPin);
  servoPos=(180./1023.)*xVal;
  myServo.write(servoPos);
  delay(t);
}
