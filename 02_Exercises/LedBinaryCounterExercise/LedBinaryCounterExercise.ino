const int ledOne = 2;
const int ledTwo = 4;
const int ledThree = 7;
const int ledFour = 8;

void setup() {
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
}

void loop() {
  getNumber(false, false, false, false);
  lightsOut();
  getNumber(false, false, false, true);
  lightsOut();
  getNumber(false, false, true, false);
  lightsOut();
  getNumber(false, false, true, true);
  lightsOut();
  getNumber(false, true, false, false);
  lightsOut();
  getNumber(false, true, false, true);
  lightsOut();
  getNumber(false, true, true, false);
  lightsOut();
  getNumber(false, true, true, true);
  lightsOut();
  getNumber(true, false, false, false);
  lightsOut();
  getNumber(true, false, false, true);
  lightsOut();
  getNumber(true, false, true, false);
  lightsOut();
  getNumber(true, false, true, true);
  lightsOut();
  getNumber(true, true, false, false);
  lightsOut();
  getNumber(true, true, false, true);
  lightsOut();
  getNumber(true, true, true, false);
  lightsOut();
  getNumber(true, true, true, true);
  lightsOut();
}

void lightsOut(){
  delay(1000);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
}

void getNumber(boolean four, boolean three, boolean two, boolean one){
  if(one){
    digitalWrite(ledOne, HIGH); 
  }
  if(two){
    digitalWrite(ledTwo, HIGH);
  }
  if(three){
    digitalWrite(ledThree, HIGH);  
  }
  if(four){
    digitalWrite(ledFour, HIGH);  
  }
}
