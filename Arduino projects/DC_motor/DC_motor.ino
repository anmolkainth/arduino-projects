//L293D chip(microcontroller to control dc motor)

int speedPin = 3;//has to be a pin with ~
int dir1 = 5;//can be any digital pin
int dir2 = 6;//can be any digital pin
int mSpeed=30;

void setup() {
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);

}
