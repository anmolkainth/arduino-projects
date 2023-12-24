/*under 3Volt -> green led
 3-4Volt -> yellow led
 above 4Volt -> red led
*/

int gPin = 7;
int yPin = 5;
int rPin = 3;
int aPin = A1;
int val;
float volt;

void setup() {
  Serial.begin(9600);
  pinMode(aPin,INPUT);
  pinMode(gPin,OUTPUT);
  pinMode(yPin,OUTPUT);
  pinMode(rPin,OUTPUT);

}

void loop() {
  val=analogRead(aPin);
  volt=(5./1023.)*val;
  Serial.println(volt);
  if(volt<3.0){
    digitalWrite(gPin,HIGH);
    digitalWrite(yPin,LOW);
    digitalWrite(rPin,LOW);
  }
  else if(volt>3.0 && volt<4.0){
    digitalWrite(gPin,LOW);
    digitalWrite(yPin,HIGH);
    digitalWrite(rPin,LOW);
  }
  else if(volt>4.0){
     digitalWrite(gPin,LOW);
    digitalWrite(yPin,LOW);
    digitalWrite(rPin,HIGH);
  }

}
