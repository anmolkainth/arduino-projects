//use 10k resistor
int lightPin = A0;
int lightVal;
int t = 250;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin,INPUT);
}

void loop() {
  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  delay(t);
}
