//take input from user and turn on the led (red,blue or green)
int rPin=12;
int bPin=11;
int gPin=10;
String input;
String msg="Which led you want to turn on(red,blue,green or all): ";

void setup() {
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(gPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  input=Serial.readString();
  Serial.println(input);
  if(input=="red"){
    digitalWrite(rPin,HIGH);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,LOW);
  }
  else if(input=="blue"){
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,HIGH);
    digitalWrite(gPin,LOW);
  }
  else if(input=="green"){
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,HIGH);
  }

}
