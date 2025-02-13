

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const char* ssid = "Your_WiFi_Name";
const char* password = "Your_WiFi_Password";
const char* api_key = "KJ5C9VBEWHSMNIG8";  
const char* stock_symbol = "TSLA";  // Change to your preferred stock
const char* api_url = "https://www.alphavantage.co/query?function=GLOBAL_QUOTE&symbol=TSLA&apikey=Your_AlphaVantage_API_Key";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED init failed!");
    while (1);
  }
  
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.println("Connecting to WiFi...");
  display.display();

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  display.clearDisplay();
  display.setCursor(0, 10);
  display.println("Connected!");
  display.display();
  delay(1000);
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    WiFiClient client;
    http.begin(client, api_url);

    int httpCode = http.GET();
    
    if (httpCode > 0) {
      String payload = http.getString();
      Serial.println(payload);

      DynamicJsonDocument doc(1024);
      deserializeJson(doc, payload);

      String stock_price = doc["Global Quote"]["05. price"].as<String>();
      
      display.clearDisplay();
      display.setTextSize(1);
      display.setCursor(0, 10);
      display.println("Stock: TSLA");
      display.setCursor(0, 30);
      display.setTextSize(2);
      display.print("$");
      display.println(stock_price);
      display.display();
    }
    
    http.end();
  }
  
  delay(30000); // Update every 30 seconds
}
