int pot = A0;
void setup() {
  //Declaring LED pin as output
  pinMode(pot, INPUT);
  Serial.begin(9600);
}
void loop() {
  //Fading the LED
analogRead(pot);
Serial.println(pot);
delay(500);
}
