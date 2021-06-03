
#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int finger1 = 5;
int finger2 = 6;
int finger3 = 9;
int finger4 = 10;
int finger5 = 3;

void setup()
{
servo1.attach(finger1); 
servo2.attach(finger2);
servo3.attach(finger3); 
servo4.attach(finger4); 
servo5.attach(finger5);  

Serial.begin(9600);

pinMode(finger1, OUTPUT);
pinMode(finger2, OUTPUT);
pinMode(finger3, OUTPUT);
pinMode(finger4, OUTPUT);
pinMode(finger5, OUTPUT);

}

void loop()
{
   for(int i=0;i<=180;i++){  
    servo1.write(i);
    servo2.write(i);
    servo3.write(i);
    servo4.write(i);
    servo5.write(i);

    //Serial.print(servo1.write(i),'\n');
    //Serial.print(servo2.write(i),'\n');
    //Serial.print(servo3.write(i),'\n');
    //Serial.print(servo4.write(i),'\n');
    //Serial.print(servo5.write(i),'\n');
   }
   delay(5000);
   for(int i=180;i>0;i--){  
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      servo4.write(i);
      servo5.write(i); 


      //Serial.print(servo1.write(i),'\n');
      //Serial.print(servo2.write(i),'\n');
      //Serial.print(servo3.write(i),'\n');
      //Serial.print(servo4.write(i),'\n');
      //Serial.print(servo5.write(i),'\n');
   }      
   delay(5000);
}
