int trigPin=8;
int echoPin=10;
int pingTravelTime;

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
  pingTravelTime=pulseIn(echoPin,HIGH);
  delay(100);
  Serial.println(pingTravelTime);

}
