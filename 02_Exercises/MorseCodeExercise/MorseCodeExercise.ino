const int letterDelay = 100;

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  morseDot();
  delay(letterDelay);
  morseDot();
  delay(letterDelay);
  morseDot();
  delay(200);
  morseLine();
  delay(letterDelay);
  morseLine();
  delay(letterDelay);
  morseLine();
  delay(200);
  morseDot();
  delay(letterDelay);
  morseDot();
  delay(letterDelay);
  morseDot();
  delay(3000);
}

void morseDot(){
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
}

void morseLine(){
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
}
