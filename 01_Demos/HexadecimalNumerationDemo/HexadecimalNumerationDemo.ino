byte byteCounter = 0x0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(byteCounter, HEX);
  byteCounter += 1;
  delay(500);
}
