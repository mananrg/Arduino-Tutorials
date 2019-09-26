const int trigPin = 3; //Trigger connected to PIN 3   
  const int echoPin = 4; //Echo connected yo PIN 4   
  int timeperiod;
  int cm;
  void setup() {   
  Serial.begin(9600);   
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  }   
  void loop()   
  {   

  digitalWrite(trigPin, LOW);// sending 10 us pulse
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin, LOW);

  timeperiod = pulseIn(echoPin, HIGH);  // integrating pulse 

  cm = (timeperiod/2)/29.1;

  Serial.print("   Distance in centimeters=");
  Serial.println(cm);
  delay(1000);
  }
