const int buttonPin = 7;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(buttonPin));

}
