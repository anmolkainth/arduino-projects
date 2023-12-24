int p1 = 2;
int p2 = 4;
int p3 = 6;
int p4 = 8;
int a = 30;

void setup() {
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);


}

void loop() {
  digitalWrite(p1,HIGH);
  delay(a);
  digitalWrite(p1,LOW);
  delay(a);

  digitalWrite(p2,HIGH);
  delay(a);
  digitalWrite(p2,LOW);
  delay(a);

  digitalWrite(p3,HIGH);
  delay(a);
  digitalWrite(p3,LOW);
  delay(a);

  digitalWrite(p4,HIGH);
  delay(a);
  digitalWrite(p4,LOW);
  delay(a);


//more seamless

  // digitalWrite(p4,HIGH); //commented to prevent repetition
  // delay(a);
  // digitalWrite(p4,LOW);
  // delay(a);
  
  digitalWrite(p3,HIGH);
  delay(a);
  digitalWrite(p3,LOW);
  delay(a);
  
  digitalWrite(p2,HIGH);
  delay(a);
  digitalWrite(p2,LOW);
  delay(a);
  
  // digitalWrite(p1,HIGH); //commented to prevent repetition
  // delay(a);
  // digitalWrite(p1,LOW);
  // delay(a);



}
