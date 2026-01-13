int  d = 5; //setting universal delay to 5 ms
void setup() 
{
pinMode(3, OUTPUT); //pin 3 is pulse width modulation capable
}

void loop() 
{

for ( int a = 0 ; a < 256 ; a++ )
{
  analogWrite(3, a);
  delay(d);
}

for ( int a = 255 ; a >= 0 ; a-- )
{
  analogWrite(3, a);
  delay(d);
}
delay(200);
}
