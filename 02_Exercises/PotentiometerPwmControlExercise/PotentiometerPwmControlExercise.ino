const int ledPin = 3;
const int readPin = A0;
int readVal;
int pwmVal;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  readVal = analogRead(readPin);
  pwmVal = map(readVal, 0, 1023, 0, 255);
  analogWrite(ledPin, pwmVal);
//  Serial.print("Read Value: ");
//  Serial.println(readVal);
//  Serial.print("PWM Value: ");
//  Serial.println(pwmVal);
//  delay(500);
}
