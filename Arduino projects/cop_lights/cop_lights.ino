int a = 40;
int p1 = 11;
int p2 = 10;

void setup() {
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);

}

void loop() {

  digitalWrite(p1,HIGH);
  delay(a);
  digitalWrite(p1,LOW);
  digitalWrite(p2,HIGH);
  delay(a);
  digitalWrite(p2,LOW);
}
