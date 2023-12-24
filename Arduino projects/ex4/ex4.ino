// turns green led on if room lightis on(i.e more than 200 i guess) and turns red light on if room light is off(imp. use a 5k resistor or anything near it.)

int rPin = 7;
int gPin = 8;
int lightPin = A0; 
int lightVal;
int t = 50;

void setup() {
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(lightPin,INPUT);

}

void loop() {
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  if(lightVal>300){
    digitalWrite(rPin,LOW);
    digitalWrite(gPin,HIGH);
  }
  else{
    digitalWrite(rPin,HIGH);
    digitalWrite(gPin,LOW);
  }
  delay(t);
}
