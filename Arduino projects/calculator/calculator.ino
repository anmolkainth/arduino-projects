#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int t=5000;
float a;
float b;
String c;
float d;

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);

}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Enter 1st number");
  Serial.println("Enter first number");
  while(Serial.available()==0){

  }
  a = Serial.parseFloat();

  lcd.setCursor(0, 0);
  lcd.print("Enter 2nd number");
  Serial.println("Enter 2nd number");
    while(Serial.available()==0){

  }
  b = Serial.parseFloat();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Choose operator");
  lcd.setCursor(0, 1);
  lcd.print("+,-,*,/");
  Serial.println("operator");
    while(Serial.available()==0){

  }
  c = Serial.readString();

  if (c=="+"){
    d=a+b;
  }
  if (c=="-"){
    d=a-b;
  }
  if (c=="*"){
    d=a*b;
  }
  if (c=="/"){
    d=a/b;
  }
  Serial.println(d);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(a);
  lcd.print(c);
  lcd.print(b);
  lcd.print("=");
  lcd.print(d);
  lcd.setCursor(0, 1);
  lcd.print("Thank You");

  delay(t);
}
