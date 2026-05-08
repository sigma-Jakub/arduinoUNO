const int X_PIN = A0;
const int Y_PIN = A1;
const int S_PIN = 2;
int xVal;
int yVal;
int sVal;

void setup() {
  Serial.begin(9600);
  pinMode(X_PIN, INPUT_PULLUP);
  pinMode(Y_PIN, INPUT_PULLUP);
  pinMode(S_PIN, INPUT_PULLUP);
  digitalWrite(S_PIN, HIGH);
}

void loop() {
  xVal = analogRead(X_PIN);
  yVal = analogRead(Y_PIN);
  sVal = digitalRead(S_PIN);
  delay(500);

  Serial.print("X: ");
  Serial.print(xVal);
  Serial.print(" | ");
  Serial.print("Y: ");
  Serial.print(yVal);
  Serial.print(" | ");
  Serial.print("S: ");
  Serial.println(sVal);
}
