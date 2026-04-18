const int LED_PIN = 6;
const int READ_PIN = 7;

const int DELAY_TIME = 100;

int lightState = 0;
int lastButtonState = 1;
int currentButtonState;

void setup(){
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(READ_PIN, INPUT_PULLUP);
}

void loop(){
  currentButtonState = digitalRead(READ_PIN);

  if(lastButtonState == 1 && currentButtonState == 0) {
    if(lightState == 0) {
      digitalWrite(LED_PIN, HIGH);
      lightState = !lightState;
    } else {
      digitalWrite(LED_PIN, LOW);
      lightState = !lightState;  
    }
  }

  lastButtonState = currentButtonState;
  delay(DELAY_TIME);
}
