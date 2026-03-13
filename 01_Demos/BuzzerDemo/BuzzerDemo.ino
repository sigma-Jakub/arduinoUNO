const int buzzPin = 9;
int readPin = A0;
int reading;
boolean i;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  reading = analogRead(readPin);
  if(reading > 1000){
    i = true;
    while(i){
      digitalWrite(buzzPin, HIGH);
      delay(100);
      digitalWrite(buzzPin, LOW);
      delay(100);
      i = false;
    }
  }
}
