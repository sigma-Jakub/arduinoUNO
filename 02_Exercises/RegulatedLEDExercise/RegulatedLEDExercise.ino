const int READ_LEFT = 11;
const int READ_RIGHT = 10;
const int LED_PIN = 5;

const int DELAY_TIME = 100;
const int ADJUSTMENT_VALUE = 50;
int brightness = 0;

int lastStateLeft = 1;
int currentStateLeft;
int lastStateRight = 1;
int currentStateRight;

void setup() {
  Serial.begin(9600);
  pinMode(READ_LEFT, INPUT_PULLUP);
  pinMode(READ_RIGHT, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  currentStateLeft = digitalRead(READ_LEFT);
  currentStateRight = digitalRead(READ_RIGHT);

  brightness = constrain(brightness, 0, 250);

  analogWrite(LED_PIN, brightness);

  if(lastStateLeft == 1 && currentStateLeft == 0) {
    brightness -= ADJUSTMENT_VALUE;
  }

  if(lastStateRight == 1 && currentStateRight == 0) {
    brightness += ADJUSTMENT_VALUE;  
  }

  lastStateLeft = currentStateLeft;
  lastStateRight = currentStateRight;
  delay(DELAY_TIME);
}
