#include <Servo.h>

const int SERVO_PIN = 3;
const int BUZZ_PIN = 7;
const int LED_PIN = 6;
const int X_PIN = A0;
const int Y_PIN = A1;
const int S_PIN = 2;
Servo myServo;
int xVal;
int yVal;
int sVal;
int servoVal;
int ledVal;

void setup() {
  myServo.attach(SERVO_PIN);
  pinMode(X_PIN, INPUT_PULLUP);
  pinMode(Y_PIN, INPUT_PULLUP);
  pinMode(S_PIN, INPUT_PULLUP);
  pinMode(BUZZ_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  digitalWrite(S_PIN, HIGH);
}

void loop() {
  xVal = analogRead(X_PIN);
  yVal = analogRead(Y_PIN);
  sVal = digitalRead(S_PIN);

  servoVal = map(xVal, 20, 1023, 0, 180);
  myServo.write(servoVal);

  ledVal = map(yVal, 20, 1023, 0, 255);
  analogWrite(LED_PIN, ledVal);

  if(sVal == 0) {
    digitalWrite(BUZZ_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZ_PIN, LOW);
    delay(200);
  }
  
  digitalWrite(BUZZ_PIN, LOW);
}
