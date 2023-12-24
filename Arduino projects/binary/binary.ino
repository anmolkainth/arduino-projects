int p4 = 2;
int p3 = 4;
int p2 = 6;
int p1 = 8;
int a = 1000;

void setup() {
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
}

void loop() {
  digitalWrite(p1, HIGH);//1
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, LOW);//2
  digitalWrite(p2, HIGH);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, HIGH);//3
  digitalWrite(p2, HIGH);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, LOW);//4
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, HIGH);//5
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, LOW);//6
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, HIGH);//7
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, LOW);
  delay(a);

  digitalWrite(p1, LOW);//8
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  delay(a);


  digitalWrite(p1, HIGH);//9
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  delay(a);

  digitalWrite(p1, LOW);//10
  digitalWrite(p2, HIGH);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  delay(a);

  digitalWrite(p1, HIGH);//11
  digitalWrite(p2, HIGH);
  digitalWrite(p3, LOW);
  digitalWrite(p4, HIGH);
  delay(a);
  
  digitalWrite(p1, LOW);//12
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  delay(a);

  digitalWrite(p1, HIGH);//13
  digitalWrite(p2, LOW);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  delay(a);

  digitalWrite(p1, LOW);//14
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  delay(a);

  digitalWrite(p1, HIGH);
  digitalWrite(p2, HIGH);
  digitalWrite(p3, HIGH);
  digitalWrite(p4, HIGH);
  delay(a);
  
  digitalWrite(p1, LOW);
  digitalWrite(p2, LOW);
  digitalWrite(p3, LOW);
  digitalWrite(p4, LOW);
  delay(4000);
}

