#define SENSOR_PIN 2
#define LED1 10

void setup()
{

  pinMode(SENSOR_PIN, INPUT_PULLUP);


  pinMode(LED1, OUTPUT);
}

void loop()
{

  if (digitalRead(SENSOR_PIN) == LOW)
  {
  
    digitalWrite(LED1, HIGH);
  }
  else
  {
  
    digitalWrite(LED1, LOW);
  }
}
