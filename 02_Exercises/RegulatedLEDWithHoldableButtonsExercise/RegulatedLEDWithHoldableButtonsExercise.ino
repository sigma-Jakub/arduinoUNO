const int READ_LEFT = 11;
const int READ_RIGHT = 10;
const int LED_PIN = 5;

const int DELAY_TIME = 200;
const int ADJUSTMENT_VALUE = 25;
int brightness = 0;

int stateLeft;
int stateRight;

void setup() {
  Serial.begin(9600);
  pinMode(READ_LEFT, INPUT_PULLUP);
  pinMode(READ_RIGHT, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, brightness);
  
  stateLeft = digitalRead(READ_LEFT);
  stateRight = digitalRead(READ_RIGHT);
  delay(DELAY_TIME);

  brightness = constrain(brightness, 0, 250);

  if(stateLeft == 0) {
    brightness -= ADJUSTMENT_VALUE;

    if(brightness < 0) {
      brightness = 0;  
    }
  }

  if(stateRight == 0)  {
    brightness += ADJUSTMENT_VALUE;

    if(brightness > 250) {
      brightness = 250;  
    }
  }
}
