const int redPin = 9;
const int readPin = A0;
int readVal;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  readVal = analogRead(readPin);
  while(readVal > 1000){
    digitalWrite(redPin, HIGH);
    readVal = analogRead(readPin);  
  }
  digitalWrite(redPin, LOW);
}
