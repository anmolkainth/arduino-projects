/*
i have common anode led (i.e i have to connect its long leg to 5 volt)
for common cathode you have to connect it to ground pin
*/

int rPin=11;
int gPin=9;
int bPin=6;
String myColour;
String msg="What colour do you want?";
void setup() {
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  myColour=Serial.readString();
  Serial.println(myColour);
  if(myColour=="red"){
    digitalWrite(rPin,HIGH);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,LOW);
  }
  if(myColour=="blue"){
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,HIGH);
    digitalWrite(gPin,LOW);
  }
  if(myColour=="green"){
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,HIGH);
  }
  if(myColour=="off"){
    digitalWrite(rPin,LOW);
    digitalWrite(bPin,LOW);
    digitalWrite(gPin,LOW);
  }

}
