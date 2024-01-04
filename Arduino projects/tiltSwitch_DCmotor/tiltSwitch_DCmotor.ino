//L293D chip(microcontroller to control dc motor)

int speedPin = 3;//has to be a pin with ~
int dir1 = 5;//can be any digital pin
int dir2 = 6;//can be any digital pin
int mSpeed=100;
int tiltPin=8;
int tiltVal;
int t=10;

void setup() {
  pinMode(tiltPin,INPUT);
  digitalWrite(tiltPin,HIGH);
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  tiltVal=digitalRead(tiltPin);
  Serial.println(tiltVal);
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  if(tiltVal==0){
    
  analogWrite(speedPin,mSpeed);
  }
  if(tiltVal==1){
    analogWrite(speedPin,0);
  }
  delay(t);
}