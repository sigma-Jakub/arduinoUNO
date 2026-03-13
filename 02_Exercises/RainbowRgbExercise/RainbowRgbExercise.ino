const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int delayTime = 10;

  for (int i = 0; i <= 255; i++){
    analogWrite(redPin, 255 - i);
    analogWrite(greenPin, i);
    analogWrite(bluePin, 0);
    delay(delayTime);
  }

  for (int i = 0; i <= 255; i++) {
      analogWrite(redPin, 0);
      analogWrite(greenPin, 255 - i);
      analogWrite(bluePin, i);
      delay(delayTime);
    }
    
  for (int i = 0; i <= 255; i++) {
    analogWrite(redPin, i);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255 - i);
    delay(delayTime);
  }
}
