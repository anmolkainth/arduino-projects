int aPin = A0;
int buzzPin = 10;
int lightVal;
float t;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(aPin,INPUT);
}

void loop() {
  lightVal=analogRead(aPin);
  Serial.println(lightVal);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(lightVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(lightVal);

}
