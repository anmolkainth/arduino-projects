// turns red led on if potentiometer value is more than 1000

int potVal;
int t = 100;
int rPin = 7;
int aPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(rPin,OUTPUT);
  pinMode(aPin,INPUT);
}

void loop() {
  potVal=analogRead(aPin);
  Serial.println(potVal);
  delay(t);
  while(potVal>1000){
    digitalWrite(rPin,HIGH);
    potVal=analogRead(aPin);
    Serial.println(potVal);
    delay(t);
  }
  digitalWrite(rPin,LOW);
}
