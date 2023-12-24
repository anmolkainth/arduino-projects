int vpin =A1;
int readval;
float v2;
int t=250;

void setup() {
  Serial.begin(9600);

}

void loop() {
  readval = analogRead(vpin);
  v2 =(5./1023.)*readval;
  Serial.println(v2);
  delay(t);

}
