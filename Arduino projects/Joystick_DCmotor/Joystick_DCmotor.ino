int xPin=A1;
int xVal;
int dir1Speed;
int dir2Speed;
int dir1=5;
int dir2=6;
int speedPin=3;
int t=200;

void setup() {
  Serial.begin(9600);
  pinMode(xPin,INPUT);
  pinMode(speedPin,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);

}

void loop() {
  xVal=analogRead(xPin);
  Serial.println(xVal);
  if(xVal>=500){
    digitalWrite(dir1,HIGH);
    digitalWrite(dir2,LOW);
    dir1Speed=(255./523.)*xVal-500.;
    analogWrite(speedPin,dir1Speed);
  }
  if(xVal<500 && xVal>0){
    digitalWrite(dir1,LOW);
    digitalWrite(dir2,HIGH);
    dir2Speed=-(255./500.)*xVal+255.;
    analogWrite(speedPin,dir2Speed);
  }
  delay(t);
  
}
