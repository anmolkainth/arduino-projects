#include <LiquidCrystal.h>
int rs=7;
int en=9;
int d4=5;
int d5=6;
int d6=3;
int d7=11;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int trigPin=8;
int echoPin=10;
int t=500;
int PTT;//ping travel time
float PTD;//ping tavel distance
float DTT;//distance to target

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  PTT=pulseIn(echoPin,HIGH);
  PTD=(PTT*765.*5280.*12.*2.54)/(3600.*1000000.);
  DTT=PTD/2;
  Serial.print("Distance to target: ");
  Serial.print(DTT);
  Serial.println("cm");
  lcd.setCursor(0,0);
  lcd.print("Distance: ");
  lcd.setCursor(0,1);
  lcd.print(DTT);
  lcd.print("cm");
  delay(t);
  lcd.clear();
}