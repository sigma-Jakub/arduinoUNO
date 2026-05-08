#include <Servo.h>

Servo myServo;

const int ON_BUTTON_PIN = 7;
const int OFF_BUTTON_PIN = 6;
const int LED_PIN = 8;
const int SERVO_PIN = 5;

int lightState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  pinMode(ON_BUTTON_PIN, INPUT_PULLUP);
  pinMode(OFF_BUTTON_PIN, INPUT_PULLUP);
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void loop() {
  int onButtonState = digitalRead(ON_BUTTON_PIN);
  int offButtonState = digitalRead(OFF_BUTTON_PIN);

  if(lightState == 0 && onButtonState == 0) {
    digitalWrite(LED_PIN, HIGH);
    delay(2000);
    lightState = !lightState;  
  }

  if(lightState == 1 && offButtonState == 0) {
    digitalWrite(LED_PIN, LOW);
    lightState = !lightState;  
  }

  if (lightState == 1) {
    myServo.write(90);
    delay(100);
    myServo.write(0);
  }

  delay(50);
}
