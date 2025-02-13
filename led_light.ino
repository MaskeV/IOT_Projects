int led_pin = 12;    //pin declaration

void setup() //pins are setup here
{
  pinMode(led_pin,OUTPUT);  //pin set as output
}
void loop()
{
  digitalWrite(led_pin,HIGH);  // HIGH means binaary 1,5v
  delay(1000) ;// Time to perform above operation
  digitalWrite(led_pin,LOW);  // Low means binary 0,0v
  delay(1000);


}
