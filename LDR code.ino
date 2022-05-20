int ldrPin = A0;
int led = 13;
int threshold = 700; /* Indicates that there is no light if light sensor value is below 700*/ 
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop()
{
  int data = analogRead(ldrPin);
  delay(100);
  
  if(data >= threshold)
  {
    digitalWrite(led, HIGH);
    Serial.println("\nLED is ON");
    
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("LED is OFF");
  }
}