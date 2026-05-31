const int LATCH_PIN = 11;
const int CLOCK_PIN = 9;
const int DATA_PIN = 12;

const byte LEDs = 0x0;

void setup() {
  Serial.begin(9600);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LATCH_PIN, LOW);
  shiftOut(DATA_PIN, CLOCK_PIN, LSBFIRST, LEDs); //LSB = Least Significant Bit
  digitalWrite(LATCH_PIN, HIGH);
}
