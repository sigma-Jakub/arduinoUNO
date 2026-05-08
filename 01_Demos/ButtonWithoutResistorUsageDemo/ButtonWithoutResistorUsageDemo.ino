const int BUTTON_PIN = 2;
int buttonVal;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  digitalWrite(BUTTON_PIN, HIGH);
}

void loop() {
  buttonVal = digitalRead(BUTTON_PIN);
  Serial.println(buttonVal);
  delay(200);
}
