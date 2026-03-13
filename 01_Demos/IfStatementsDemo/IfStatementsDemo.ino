const int readPin = A0;

void setup() {
  Serial.begin(9600);
 
}

void loop() {
  float readVal = analogRead(readPin);
  float V = (5. / 1023.) * readVal;
  if(V > 2 && V < 4){
    Serial.println("voltage is higher than 2!");
  } else if(V <= 5 && V >= 4){
    Serial.println("voltage is higher than 4!");  
  } else {
    Serial.println("voltage is 2 or lower!");  
  }
  Serial.println(V);
  delay(1000);
}
