int button=4;
int buttonstate=0;
void setup()
{
  pinMode(button,INPUT);
  
  Serial.begin(9600);
  }
void loop()
{
  
  buttonstate=digitalRead(4);
  
  
  if(buttonstate==HIGH)
  {
    Serial.println("HIGH");
   
    delay(500);
    }
else
{
    Serial.println("LOW");
    
    delay(500);
    }
  }
