const int readPin = A0;
float V2 = 0;
const int readDelay = 500;
int readVal;

void setup() {
  Serial.begin(9600);
  pinMode(readPin, INPUT);
}

void loop() {
  readVal = analogRead(readPin);
  V2 = (5. / 1023.) * readVal;
  Serial.println(V2);
  delay(readDelay);
}
