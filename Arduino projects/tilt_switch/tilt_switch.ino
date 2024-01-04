//if tilt swich is in ideal state(i.e it isn't tilted) then the green light remains on. Otherwise red light turns on.
// tilt switch - it has a ball inside which completes the circuit if the tilt switch isn't tilted and breaks the  circuit if its tilted  

int tiltPin = 2;
int tiltVal;
int gPin = 9;
int rPin = 12;
int t=50;

void setup() {
  pinMode(tiltPin, INPUT);
  pinMode(gPin, OUTPUT);
  pinMode(rPin, OUTPUT);
  digitalWrite(tiltPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  tiltVal = digitalRead(tiltPin);
  Serial.println(tiltVal);
  if (tiltVal == 0) {
    digitalWrite(gPin, HIGH);
    digitalWrite(rPin, LOW);
  } 
  if(tiltVal==1) {
    digitalWrite(gPin, LOW);
    digitalWrite(rPin, HIGH);
  }
  delay(t);

}
