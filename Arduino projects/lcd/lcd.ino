#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int t=1000;

void setup() {
  lcd.begin(16,2);

}

// void loop() {
//   lcd.setCursor(0,0);
//   lcd.print("Hello world");
//   delay(t);
//   lcd.clear();
//   lcd.setCursor(0,0);
//   lcd.print("My name is Anmol.");
//   delay(t);
//   lcd.clear();

// }

void loop(){
  for(int j=0;j<=10;j=j+1){
  lcd.setCursor(0, 0);
  lcd.print("Watch me count");
    lcd.setCursor(0, 1);
    lcd.print(j);
    delay(t);
    lcd.clear();

  }


}