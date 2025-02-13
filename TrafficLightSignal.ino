int red_led = 10; 
int yel_led=11;
int gre_led=12; 
int buzzer=8;  //pin declaration

void setup() //pins are setup here
{
  pinMode(red_led,OUTPUT); 
  pinMode(yel_led,OUTPUT); //pin set as output
  pinMode(gre_led,OUTPUT);
  pinMode(buzzer,OUTPUT)
}
void loop()
{
  digitalWrite(red_led,HIGH);  // HIGH means binaary 1,5v
  delay(10000) ;// Time to perform above operation
  digitalWrite(red_led,LOW);  // Low means binary 0,0v
  delay(10000);
  digitalWrite(yel_led,HIGH);  // HIGH means binaary 1,5v
  delay(10000) ;// Time to perform above operation
  digitalWrite(yel_led,LOW);  // Low means binary 0,
  delay(10000);
  digitalWrite(gre_led,HIGH); // HIGH means binaary 1,5v
  digitalWrite(buzzer,HIGH)
  delay(10000) ;// Time to perform above operation
  digitalWrite(gre_led,LOW);  // Low means binary 0,0v
  delay(10000);


}
