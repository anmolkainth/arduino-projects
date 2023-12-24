int a = 1250;

void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  digitalWrite(13,HIGH);
  delay(a);
  digitalWrite(13,LOW);
  delay(a);
}
