#include <Servo.h>
int servoPin = 9;
int servoPos = 5;
int changeVal = 5;
int t = 250;
Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  Serial.println(servoPos);
  if (servoPos == 180 || servoPos == 0) {
    changeVal = -changeVal;
  }
  myServo.write(servoPos);
  servoPos = servoPos + changeVal;
  delay(t);
}
