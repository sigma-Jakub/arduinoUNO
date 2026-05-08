#include <Servo.h>

const int PHOTO_READ_PIN = A0;
const int SERVO_PIN = 9;
Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(PHOTO_READ_PIN, INPUT_PULLUP);
  myServo.attach(SERVO_PIN);

}

void loop() {
  int lightValue = map(analogRead(PHOTO_READ_PIN), 0, 1023, 0, 180);

  myServo.write(lightValue);  
}
