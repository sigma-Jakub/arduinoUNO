const int redLed = 9;
const int yellowLed = 6;
const int flashDelay = 500;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

}

void loop() {
  for(int i = 0; i < 3; i++){
    digitalWrite(yellowLed, HIGH);
    delay(flashDelay);
    digitalWrite(yellowLed, LOW);
    delay(flashDelay);
  }
  for(int i = 0; i < 5; i++){
    digitalWrite(redLed, HIGH);
    delay(flashDelay);
    digitalWrite(redLed, LOW);
    delay(flashDelay);
  }
}
