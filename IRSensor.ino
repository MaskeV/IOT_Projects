#define IRSENSOR 2
#define LED 12


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(IRSENSOR, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorvalue = digitalRead(IRSENSOR);
  if (sensorvalue == LOW) {
    digitalWrite(LED, HIGH);
    Serial.println(" Detected");

  } else {
    digitalWrite(LED, LOW);
    Serial.println(" Not Detected");

  }
  delay(100);
}
