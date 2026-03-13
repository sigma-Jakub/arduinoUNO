const int redPin = 10;
const int greenPin = 9;
const int bluePin = 11;
const String myColor;
const String message = "What color do you want?";


void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  Serial.println(message);
  while(Serial.available() == 0);
  myColor = Serial.readString();

  if(myColor == "red"){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  if(myColor == "blue"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }

  if(myColor == "green"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  if(myColor == "off"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }

  if(myColor == "violet"){
    analogWrite(redPin, 148);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 211);
  }
}
