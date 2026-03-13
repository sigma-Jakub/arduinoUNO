const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const String msg = "what color would you like: ";

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available() == 0);
  String ic = Serial.readString();

  setColor(ic, "blue", 0, 0, 255);
  setColor(ic, "red", 255, 0, 0);
  setColor(ic, "green", 0, 255, 0);
  setColor(ic, "violet", 127, 0, 255);
  setColor(ic, "magenta", 255, 0, 255);
  setColor(ic, "yellow", 255, 100, 0);
  setColor(ic, "exp", 255, 255, 255);
  setColor(ic, "off", 0, 0, 0);
}

void setColor(String inputColor, String color, int redValue, int greenValue, int blueValue){
    if(inputColor == color){
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);  
  }  
}
