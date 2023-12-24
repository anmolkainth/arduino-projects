//Turn led on if voltage(using potentiometer) is more than 4 Volts or less than 3 Volts.

int Apin = A1;
int readVal;
float V2;
int t = 250;
int redPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(Apin,INPUT);
  pinMode(redPin,OUTPUT);

}

void loop() {
  readVal=analogRead(Apin);
  V2 = (5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  if (V2>4.0 || V2<3.0){
    digitalWrite(redPin,HIGH);
  }
  else {
    digitalWrite(redPin,LOW);
  }
  delay(t);

}
