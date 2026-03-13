const int lightPin = A0;
int lightVal;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(200);
}
