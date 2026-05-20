const int TILT_PIN = 7;
const int ON_PIN = 5;
const int OFF_PIN = 6;
int tiltVal;

void setup() {
  Serial.begin(9600);
  pinMode(TILT_PIN, INPUT_PULLUP);
  pinMode(ON_PIN, OUTPUT);
  pinMode(OFF_PIN, OUTPUT);
}

void loop() {
  tiltVal = digitalRead(TILT_PIN);

  if(tiltVal == 0) {
    digitalWrite(ON_PIN, HIGH);
    digitalWrite(OFF_PIN, LOW);  
  }

  if(tiltVal == 1) {
    digitalWrite(OFF_PIN, HIGH);
    digitalWrite(ON_PIN, LOW);  
  }
}
