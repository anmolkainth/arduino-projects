// put the button pins facing each other in the same column(i.e rows that are connected). For bigger buttons use male to female jumper wires.

int button = 2;
int buttonVal;
int t=100;

void setup() {
  Serial.begin(9600);
  pinMode(button,INPUT);
  digitalWrite(button,HIGH);

}

void loop() {
  buttonVal=digitalRead(button);
  Serial.print("Your button is: ");
  Serial.println(buttonVal);
  delay(t);
}
