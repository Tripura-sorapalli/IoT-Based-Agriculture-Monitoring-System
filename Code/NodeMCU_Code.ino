#include <ESP8266WiFi.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
const char* server = "api.thingspeak.com";
String apiKey = "YOUR_THINGSPEAK_API_KEY";

WiFiClient client;

void setup() {
  Serial.begin(9600);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void loop() {

  if (Serial.available()) {

    String data = Serial.readStringUntil('\n');

    int firstComma = data.indexOf(',');
    int secondComma = data.indexOf(',', firstComma + 1);
    int thirdComma = data.indexOf(',', secondComma + 1);

    String temperature = data.substring(0, firstComma);
    String humidity = data.substring(firstComma + 1, secondComma);
    String soilMoisture = data.substring(secondComma + 1, thirdComma);
    String ldrValue = data.substring(thirdComma + 1);

    if (client.connect(server, 80)) {
      String postStr = "api_key=" + apiKey;
      postStr += "&field1=" + temperature;
      postStr += "&field2=" + humidity;
      postStr += "&field3=" + soilMoisture;
      postStr += "&field4=" + ldrValue;
      postStr += "\r\n\r\n";

      client.print("POST /update HTTP/1.1\n");
      client.print("Host: api.thingspeak.com\n");
      client.print("Connection: close\n");
      client.print("Content-Type: application/x-www-form-urlencoded\n");
      client.print("Content-Length: ");
      client.print(postStr.length());
      client.print("\n\n");
      client.print(postStr);
    }

    client.stop();
  }

  delay(15000);
}
