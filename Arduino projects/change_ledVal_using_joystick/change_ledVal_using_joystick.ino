int led1Pin = 3;
int led2Pin = 5;
int xPin = A1;//joystick
int yPin = A0;//joystick
int xVal;
int yVal;
float led1Val;
float led2Val;
int t = 250;

void setup() {
  Serial.begin(9600);
  pinMode(led1Pin,OUTPUT);
  pinMode(led2Pin,OUTPUT);
  pinMode(xPin,INPUT);
  pinMode(yPin,INPUT);

}

void loop() {
  xVal=analogRead(xPin);
  yVal=analogRead(yPin);
  led1Val=(255./1023.)*xVal;
  led2Val=(255./1023.)*yVal;
  analogWrite(led1Pin,led1Val);
  analogWrite(led2Pin,led2Val);
  // delay(t);
  Serial.print("Value of LED1 = ");
  Serial.print(led1Val);
  Serial.print("      Value of LED2 = ");
  Serial.println(led2Val);

}
