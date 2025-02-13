
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include  <DHT.h>
#define DHTPIN 11
#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27,16,2);

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);


}

void loop() {
  // put your main code here, to run repeatedly:
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();
  Serial.print("Temp:");
  Serial.print(temperature);
  Serial.println("oC");
  Serial.print(" Humidity");
  Serial.print(humidity);
  Serial.println("%");
  delay(2000);
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.setCursor(0,6);
  lcd.print("Humidity:");
  lcd.print(humidity);


}
