#include<SoftwareSerial.h>
SoftwareSerial s1(9,10);

void setup() 
{
  Serial.begin(9600);
  s1.begin(9600);
  s1.println("Enter text");   
}


void loop() 
{  
   
   if(s1.available())
  {
    s1.println("Enter text");
    String o=s1.readString();
    Serial.println(o);
  } 
}
