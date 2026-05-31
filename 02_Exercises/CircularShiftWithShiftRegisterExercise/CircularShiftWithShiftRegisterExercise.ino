const int LATCH_PIN = 11;
const int CLOCK_PIN = 9;
const int DATA_PIN = 12;
const byte ORIGINAL_VALUE = 0B00001111; 

byte LEDs = ORIGINAL_VALUE;

void setup() {
  Serial.begin(9600);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LATCH_PIN, LOW);
  shiftOut(DATA_PIN, CLOCK_PIN, LSBFIRST, LEDs); //Least Significant Bit
  digitalWrite(LATCH_PIN, HIGH);
  Serial.println(LEDs);
  LEDs = LEDs * 128 + LEDs / 2;
  delay(500);
}
