int potPin = A0;
int ledPin = 9;
int potVal;//readVal
float ledVal;

void setup() {
  pinMode(potPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  potVal=analogRead(potPin);
  ledVal=(255./1023.)*potVal;
  analogWrite(ledPin,ledVal);
  Serial.println(ledVal);

}
