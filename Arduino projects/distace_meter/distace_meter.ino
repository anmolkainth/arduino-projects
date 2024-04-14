int trigPin=8;
int echoPin=10;
int t=100;
int PTT;//ping travel time
float PTD;//ping tavel distance
float DTT;//distance to target

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  PTT=pulseIn(echoPin,HIGH);
  PTD=(PTT*765.*5280.*12.*2.54)/(3600.*1000000.);
  DTT=PTD/2;
  delay(t);
  Serial.print("Distance to target: ");
  Serial.print(DTT);
  Serial.println("cm");
}