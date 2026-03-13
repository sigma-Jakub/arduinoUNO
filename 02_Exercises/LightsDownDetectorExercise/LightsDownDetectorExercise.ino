const int redPin = 8;
const int greenPin = 9;
const int readPin = A0;
const int buzzerPin = 7;
int readVal;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(readPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  readVal = analogRead(readPin);
  Serial.println(readVal);

  if(readVal > 200){
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);  
  }
  else{
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(redPin, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }

}
