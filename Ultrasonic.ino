#define TRIG_PIN 3
#define ECHO_PIN 2
#define LED 10

void setup() {
  // put your setup code here, to run once:
  pinMode(TRIG_PIN,OUTPUT);
  pinMode(ECHO_PIN,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

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

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.print("cm");

  if(distance>10){
    digitalWrite(LED,HIGH);
    delay(1000);
  }

  delay(200);


}
