// use a 10k resistor(6.8k in my case)

int LED = 9;
int buttonPin = 5;
int buttonRead;
int t = 100;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  buttonRead=digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(t);
  if(buttonRead==1){
    digitalWrite(LED,LOW);
  }
  if(buttonRead==0){
    digitalWrite(LED,HIGH);
  }

}
