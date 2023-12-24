int aPin = A0;
int rPin = 11;
int gPin = 9;
int bPin = 6;
int potVal;
float rVal = 0;
float bVal = 0;
float gVal = 0;
String myColour;
String msg = "What colour do you want?";
int prevPotVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(aPin, INPUT);
}

void loop() {
  potVal = analogRead(aPin);

  if (potVal != prevPotVal) {
    // Potentiometer value has changed, update the color gradually
    if (myColour == "r") {
      rVal = (255. / 1023.) * potVal;
    } else if (myColour == "g") {
      gVal = (255. / 1023.) * potVal;
    } else if (myColour == "b") {
      bVal = (255. / 1023.) * potVal;
    }
    analogWrite(rPin, rVal);
    analogWrite(gPin, gVal);
    analogWrite(bPin, bVal);
  }

  prevPotVal = potVal;

  if (Serial.available() > 0) {
    myColour = Serial.readString();
    Serial.println(myColour);
  }
}



//failed project


// int aPin = A0;
// int rPin = 11;
// int gPin = 9;
// int bPin = 6;
// int potVal;
// float rVal;
// float bVal;
// float gVal;
// String myColour;
// String msg = "What colour do you want?";

// void setup() {
//   Serial.begin(9600);
//   pinMode(rPin, OUTPUT);
//   pinMode(gPin, OUTPUT);
//   pinMode(bPin, OUTPUT);
//   pinMode(aPin, INPUT);
// }

// void loop() {
//   potVal = analogRead(aPin);

//   Serial.println(msg);
//   while (Serial.available() == 0) {
//   }
//   myColour = Serial.readString();
//   Serial.println(myColour);  
//   if (myColour == "r") {
//     potVal = analogRead(aPin);
//     rVal = (255. / 1023.) * potVal;
//     analogWrite(rPin, rVal);
//     Serial.println(rVal);
//   }

//   if (myColour == "b") {
//     potVal = analogRead(aPin);
//     bVal = (255. / 1023.) * potVal;
//     analogWrite(bPin, bVal);
//     Serial.println(bVal);
//   }

//   if (myColour == "g") {
//     potVal = analogRead(aPin);
//     gVal = (255. / 1023.) * potVal;
//     analogWrite(gPin, gVal);
//     Serial.println(gVal);
//   }

//   if (myColour == "reset") {
//     analogWrite(rPin, 0);
//     analogWrite(bPin, 0);
//     analogWrite(gPin, 0);
//   }
//   // analogWrite(rPin,rVal); //don't know why it is there
//   // analogWrite(bPin,bVal);
//   // analogWrite(gPin,gVal);
// }