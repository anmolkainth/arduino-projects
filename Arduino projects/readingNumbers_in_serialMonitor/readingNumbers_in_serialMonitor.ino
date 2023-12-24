int rPin = 8;
int t = 500;
int numBlink;
String msg = "How may blinks do you want: " ;
void setup() {
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  numBlink=Serial.parseInt();
  while(Serial.available()==0){

  }
  numBlink=Serial.parseInt();
  for(int i=1;i<=numBlink;i=i+1){
    digitalWrite(rPin,HIGH);
    delay(t);
    digitalWrite(rPin,LOW);
    delay(t);
  }
}
