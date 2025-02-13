#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define TRIG_PIN 3
#define ECHO_PIN 2


void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG_PIN,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,LOW);

  long duration = pulseIn(ECHO_PIN,HIGH);
  float distance = duration * 0.034 /2 ;


  lcd.setCursor(0,0);
  lcd.print("dis");
  lcd.setCursor(0,4);
  lcd.print(distance);
  


  delay(200);
  lcd.clear();

}