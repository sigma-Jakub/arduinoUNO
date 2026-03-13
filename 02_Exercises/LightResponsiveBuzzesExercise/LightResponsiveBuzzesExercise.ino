const int buzzPin = 5;
const int readPin = A0;
int readVal;
int v;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(readPin, INPUT);
}

void loop() {
  readVal = analogRead(readPin);
  v = map(readVal, 170, 920, 0, 255);
  Serial.println(max(v, 0));
  analogWrite(buzzPin, max(v, 0));
  delay(100);
  analogWrite(buzzPin, 0);
  delay(100);
}
