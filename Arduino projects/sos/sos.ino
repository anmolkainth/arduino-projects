int pin = 11;
int dit = 40;
int dah = 250;
int restart = 500;

void setup() {
  pinMode(pin,OUTPUT);

}

void loop() {
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);
  digitalWrite(pin,HIGH);
  delay(dit);
 digitalWrite(pin,LOW);
  delay(dah);

  
  digitalWrite(pin,HIGH);
  delay(dah);
  digitalWrite(pin,LOW);
  delay(dah);
  digitalWrite(pin,HIGH);
  delay(dah);
  digitalWrite(pin,LOW);
  delay(dah);
  digitalWrite(pin,HIGH);
  delay(dah);
  digitalWrite(pin,LOW);
  delay(dah);


  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);
  digitalWrite(pin,HIGH);
  delay(dit);
  digitalWrite(pin,LOW);
  delay(dit);
  delay(restart);
}
