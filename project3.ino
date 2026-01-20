// Project 3 - demonstrating PWM
int d = 5 ;
void setup() 
{
   pinMode(2, OUTPUT); // LED control pin is 3, a PWM-capable pin
}
void loop() 
{
  for ( int a = 0 ; a < 256 ; a++)
{
    analogWrite(2 , a);
    delay(d);
}
for ( int a = 255 ; a > 0 ; a--)
{
  analogWrite(2, a);
  delay(d);
}
delay(200);
}