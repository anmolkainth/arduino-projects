//toggle switch to turn led on or off(pull up resistor)

int LED = 9;
int buttonPin = 5;
int t = 100;
int buttonNew;
int buttonOld;
int ledState = 1;

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  buttonNew=digitalRead(buttonPin);
  if(buttonOld==0 && buttonNew==1){
    if(ledState==0){
      digitalWrite(LED,HIGH);
      ledState=1;
    }
    else{
      digitalWrite(LED,LOW);
      ledState=0;
    }
  }
  buttonOld=buttonNew;
  delay(t);
}
