const int pwmPin = 9;

void setup() {
  pinMode(pwmPin, OUTPUT);

}

void loop() {
  for(int i = 0; i < 255; i++){
    analogWrite(pwmPin, i);
    delay(10);  
  }
  for(int i = 255; i > 0; i--){
    analogWrite(pwmPin, i);
    delay(10);  
  }


}
