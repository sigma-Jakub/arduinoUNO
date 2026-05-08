#include <Servo.h>

const int SERVO_PIN = 9;
const int SERVO_POSITION = 0;

Servo testServo;

void setup() {
  Serial.begin(9600);
  testServo.attach(SERVO_PIN);
}

void loop() {
  testServo.write(SERVO_POSITION); 
}
