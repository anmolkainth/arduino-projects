// to blin yellow led 3 times and red led 5 times

int yPin = 6;
int rPin = 9;
int yt = 550;
int rt = 550;
void setup() {
  pinMode(yPin, OUTPUT);
  pinMode(rPin, OUTPUT);
}

void loop() {

  for (int i = 1; i <= 3; i++) {
    digitalWrite(yPin, HIGH);
    delay(yt);
    digitalWrite(yPin, LOW);
    delay(yt);
  }


  for (int j = 1; j <= 5; j++) {
    digitalWrite(rPin, HIGH);
    delay(rt);
    digitalWrite(rPin, LOW);
    delay(rt);
  }
}
