#include <Adafruit_Sensor.h>
#include <DHT.h>

#define Type DHT11
const int SENSE_PIN = 2;
DHT HT(SENSE_PIN, Type);

float humidity;
float tempC;
float tempF;


void setup() {
  Serial.begin(9600);
  HT.begin();
}

void loop() {
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);

  Serial.print("Current Humidity: ");
  Serial.print(humidity);
  Serial.println();
  Serial.print("Current Temperature C: ");
  Serial.print(tempC);
  Serial.println();
  Serial.print("Current Temperature F: ");
  Serial.print(tempF);
  Serial.println();
  Serial.println("----------------------------");
  delay(5000);
}
