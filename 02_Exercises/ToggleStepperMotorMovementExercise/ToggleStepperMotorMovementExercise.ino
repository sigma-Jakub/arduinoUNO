#include <Stepper.h>

const int BUTTON_PIN = 7;
const int STEPS_PER_REVOLUTION = 2048;
const int MOTOR_SPEED = 10;

int buttonState = HIGH;
int lastButtonState = HIGH;
int motorDirection = 1;

Stepper myStepper(STEPS_PER_REVOLUTION, 8, 10, 9, 11);

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  myStepper.setSpeed(MOTOR_SPEED);
}

void loop() {  
  int readVal = digitalRead(BUTTON_PIN);

  if (readVal != lastButtonState) {
    if (readVal == LOW) {
      motorDirection *= -1; 
    }
    delay(50);
  }
  
  myStepper.step(motorDirection);
  lastButtonState = readVal;
}
