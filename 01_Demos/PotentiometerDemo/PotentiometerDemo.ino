const int readPin = A0;
int readVal;
float V;
const int readDel = 500;

void setup() {
  Serial.begin(9600);
//  pinMode(readPin, INPUT);
}

void loop() {
  readVal = analogRead(readPin);
  V = (5. / 1023.) * readVal;
  Serial.println(V);
  delay(readDel);
}
