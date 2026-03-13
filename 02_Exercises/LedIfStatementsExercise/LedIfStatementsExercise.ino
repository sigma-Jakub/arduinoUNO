const int readPin = A0;
const int safePin = 2;
const int warningPin = 4;
const int dangerPin = 7;
float readVal;
float voltage;

void setup() {
  Serial.begin(9600);
  pinMode(safePin, OUTPUT);
  pinMode(warningPin, OUTPUT);
  pinMode(dangerPin, OUTPUT);
}

void loop() {
  readVal = analogRead(readPin);
  voltage = (5. / 1023.)* readVal;
  Serial.println(voltage);
//  delay(500);

  if(voltage < 3.0){
    lightsOut();
    digitalWrite(safePin, HIGH);  
  } 
  else if(voltage >= 3.0 && voltage <= 4){
    lightsOut();
    digitalWrite(warningPin, HIGH);  
  }
  else {
    lightsOut();
    digitalWrite(dangerPin, HIGH);  
  }
}

void lightsOut(){
  digitalWrite(safePin, LOW);
  digitalWrite(warningPin, LOW);
  digitalWrite(dangerPin, LOW);  
}
