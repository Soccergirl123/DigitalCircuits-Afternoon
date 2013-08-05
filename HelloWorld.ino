void setup ()
{
 pinMode(13,OUTPUT);//This allows 13 to move alot of electricity (a lot of amps)
}

void loop() 
{
   digitalWrite(13,HIGH); //This makes pin 13 high voltage 
  delay(10); //This keeps your arduino from bricking
}
