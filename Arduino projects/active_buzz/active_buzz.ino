// buzz if number is more than 10

int myNum;
int buzzPin = 8;
String msg = "Input your number: ";
int t = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  myNum=Serial.parseInt();
  if(myNum>10){
    digitalWrite(buzzPin,HIGH);
    delay(t);
    digitalWrite(buzzPin,LOW);
  }
}
