#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "Smart_Methods1";
const char* password = "123456789";

const String url = "http://192.168.100.20/SaveCommand.php";

// Define LED pins
const int forwardsPin = 2;
const int backwardsPin = 0;
const int leftPin = 4;
const int rightPin = 16;
const int stopPin = 17;

unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 2000;        // interval at which to check (milliseconds)

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  pinMode(forwardsPin, OUTPUT);
  pinMode(backwardsPin, OUTPUT);
  pinMode(leftPin, OUTPUT);
  pinMode(rightPin, OUTPUT);
  pinMode(stopPin, OUTPUT);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("OK! IP=" + WiFi.localIP().toString());
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    // Ensure the Wi-Fi connection is still active
    if (WiFi.status() == WL_CONNECTED) {
      HTTPClient http;
      http.begin(url);
      int httpResponseCode = http.GET();
      if (httpResponseCode > 0) {
        String payload = http.getString();
        Serial.println("HTTP " + String(httpResponseCode) + ": " + payload);
        controlLEDs(payload);
      } else {
        Serial.println("Error code: " + String(httpResponseCode));
      }
      http.end();
    } else {
      Serial.println("WiFi Disconnected. Attempting reconnection...");
      WiFi.reconnect();
    }
  }
}

void controlLEDs(String command) {
  digitalWrite(forwardsPin, command == "forwards");
  digitalWrite(backwardsPin, command == "backwards");
  digitalWrite(leftPin, command == "left");
  digitalWrite(rightPin, command == "right");
  digitalWrite(stopPin, command == "stop");
}