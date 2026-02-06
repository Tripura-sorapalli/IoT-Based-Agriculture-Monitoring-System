#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define SOIL_PIN A0
#define LDR_PIN A1
#define RELAY_PIN 7

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);
  dht.begin();
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  int soilValue = analogRead(SOIL_PIN);
  int ldrValue = analogRead(LDR_PIN);

  int soilMoisture = map(soilValue, 1023, 0, 0, 100);

  if (soilMoisture < 30) {
    digitalWrite(RELAY_PIN, LOW);
  } else {
    digitalWrite(RELAY_PIN, HIGH);
  }

  Serial.print(temperature);
  Serial.print(",");
  Serial.print(humidity);
  Serial.print(",");
  Serial.print(soilMoisture);
  Serial.print(",");
  Serial.println(ldrValue);

  delay(2000);
}

