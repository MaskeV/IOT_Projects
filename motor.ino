

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT); //motor  pin 1
  pinMode(11,OUTPUT); //motor pin 2


}

void loop() {
  // put your main code here, to run repeatedly:

  //Clockwiese Motion
  digitalWrite(10,HIGH); 
  digitalWrite(11,LOW);
  delay(5000);

  //stop
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1000);

 //AnticlockWise Motion
 digitalWrite(10,LOW);
 digitalWrite(11,HIGH);
 delay(1000);

   //stop
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(1000);
}
