#include <Servo.h>
Servo myservo; 
int pos;
int Signal = 8;
void setup() 
{
  pinMode(Signal, INPUT);
  myservo.attach(9);  
}
void loop() {
  int buttonState = digitalRead(Signal);
  delay(1); 
if (buttonState == 0)
    {
  for ( ;pos >= 60; pos -= 1) 
   { 
    myservo.write(pos);             
    delay(15);                        
   }
    }
else
    {
  for ( ;pos <= 120; pos += 1) 
  { 
    myservo.write(pos);             
    delay(5);                        
   }
    }
}
