#include <Stepper.h>

const int BUTTON_FORWARD_PIN = 12;
const int BUTTON_BACKWARD_PIN = 13;
const int BUZZ_PIN = 7;
const int STEPS_PER_REVOLUTION = 2048;
const int MOTOR_SPEED = 10;

Stepper myStepper(STEPS_PER_REVOLUTION, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_FORWARD_PIN, INPUT_PULLUP);
  pinMode(BUTTON_BACKWARD_PIN, INPUT_PULLUP);
  pinMode(BUZZ_PIN, OUTPUT);
  digitalWrite(BUZZ_PIN, LOW);
  myStepper.setSpeed(MOTOR_SPEED);
}

void loop() {
  if (digitalRead(BUTTON_FORWARD_PIN) == LOW && digitalRead(BUTTON_BACKWARD_PIN) == LOW) {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(BUZZ_PIN, HIGH);
  } else if (digitalRead(BUTTON_FORWARD_PIN) == LOW) {
    digitalWrite(BUZZ_PIN, LOW);
    myStepper.step(1);
  } else if (digitalRead(BUTTON_BACKWARD_PIN) == LOW) {
    digitalWrite(BUZZ_PIN, LOW);
    myStepper.step(-1);
  } else {
    digitalWrite(BUZZ_PIN, LOW);  
  }
}
