int redled=2;
int tilt=10;
void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(tilt,INPUT);
  Serial.begin(9600);
  }

void loop()
{
 if(digitalRead(tilt))
 {
  digitalWrite(redled,HIGH);
  Serial.println("LOW");
  delay(100);
  
  }
 else
 {
  digitalWrite(redled,LOW);
  Serial.println("HIGH");
  delay(100);
  }
    }
