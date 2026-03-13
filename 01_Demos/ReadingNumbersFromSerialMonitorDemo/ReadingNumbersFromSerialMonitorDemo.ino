const int redPin = 9;
const String msg = "I want my *red led* to blink this number of times: ";
int userInput;

void setup() {
  Serial.begin(9600);
  pinMode(9, OUTPUT);

}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0);
  userInput = Serial.parseInt();
  delay(1000);
  for(int i = 0; i < userInput; i++){
    digitalWrite(redPin, HIGH);
    delay(500);
    digitalWrite(redPin, LOW);
    delay(500);  
  }
}
