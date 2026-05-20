#include <Stepper.h>

const int STEPS_PER_REVOLUTION = 2048;
const int MOTOR_SPEED = 10;

Stepper myStepper(STEPS_PER_REVOLUTION, 8, 10, 9, 11);

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(MOTOR_SPEED);
}

void loop() {
  myStepper.step(STEPS_PER_REVOLUTION);
  delay(500);
  myStepper.step(-STEPS_PER_REVOLUTION);
  delay(500);
}
