int readpin = A1;
float voltage = 0;//from a resistor
int readVal;
int t = 500;//delay
void setup() {
 pinMode(readpin,INPUT);
 Serial.begin(9600);

}

void loop() {
  readVal = analogRead(readpin);
  voltage=(5./1023.)*readVal;// "." to avoid answer in integer
  Serial.println(voltage);//ln -> new line
  delay(t);
}
