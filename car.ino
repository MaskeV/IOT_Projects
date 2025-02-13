//MAKE A car WITh TWO MOTORS GOING f,B,R,l,S

int M1PIN1=5;
int M1PIN2=6;
int M2PIN1=7;
int M2PIN2=8;


void setup() {
  // put your setup code here, to run once:
  pinMode(M1PIN1,OUTPUT);//left wheel
  pinMode(M1PIN2,OUTPUT);//left wheel
  pinMode(M2PIN1,OUTPUT);//right wheel
  pinMode(M2PIN2,OUTPUT);//right wheel
  

}

void loop() {
  // put your main code here, to run repeatedly:
    // Moving Car Forward
    digitalWrite(M1PIN1, HIGH);
    digitalWrite(M1PIN2, LOW);
    digitalWrite(M2PIN1, HIGH);
    digitalWrite(M2PIN2, LOW);
    delay(2000);
    
    //Moving Car Backward
    digitalWrite(M1PIN1, LOW);
    digitalWrite(M1PIN2, HIGH);
    digitalWrite(M2PIN1, LOW);
    digitalWrite(M2PIN2, HIGH);
    delay(2000);
    
    //Moving car LeftSide
    digitalWrite(M1PIN1, HIGH);
    digitalWrite(M1PIN2, LOW);
    digitalWrite(M2PIN1, LOW);
    digitalWrite(M2PIN2, LOW;
    delay(4000);

    //Moving Car RightSide
    digitalWrite(M1PIN1, LOW);
    digitalWrite(M1PIN2, HIGH);
    digitalWrite(M2PIN1, LOW);
    digitalWrite(M2PIN2, LOW);
    delay(4000);

    //Stopping Car 
    digitalWrite(M1PIN1, LOW);
    digitalWrite(M1PIN2, LOW);
    digitalWrite(M2PIN1, LOW);
    digitalWrite(M2PIN2, LOW);
    delay(2000);

  
    

}