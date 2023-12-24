//joystick

int xPin = A0;  //pin called "URX"
int yPin = A1;  //pin called "URY"
int sPin = 9;   //pin called"SW"i.e R3/L3
int xVal;
int yVal;
int sVal;
int t = 200;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  digitalWrite(sPin, HIGH);
}

void loop() {
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  delay(t);
  Serial.print("xVal=");
  Serial.print(xVal);
  Serial.print("  yVal=");
  Serial.print(yVal);
  Serial.print("  sVal=");
  Serial.println(sVal);
}
