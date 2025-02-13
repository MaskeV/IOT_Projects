#define POT A0
#define LED 2
 
void setup() {
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int potvalue = analogRead(POT);    // Mapping range of Anaog Sensor = 0 to 1023 
  int brightness = map(potvalue,0,1023,0,255);
  analogWrite(LED,brightness);
  delay(10);

}