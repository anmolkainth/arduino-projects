int buzzPin = 11;
int aPin = A0;
int potVal;
float buzzVal;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(aPin,INPUT);

}

void loop() {
  potVal=analogRead(aPin);
  buzzVal=(9980./1023.0)*potVal+20;
  Serial.println(buzzVal);
  digitalWrite(buzzPin,HIGH);
  delayMicroseconds(buzzVal);
  digitalWrite(buzzPin,LOW);
  delayMicroseconds(buzzVal);

}
