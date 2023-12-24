int a = 50;

void setup() {
  pinMode(8,OUTPUT);
  pinMode(3,OUTPUT);

}

void loop() {

  digitalWrite(8,HIGH);
  delay(a);
  digitalWrite(8,LOW);
  digitalWrite(3,HIGH);
  delay(a);
  digitalWrite(3,LOW);
}
