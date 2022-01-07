int input1=2;
int input1State = 0;

void setup()
{
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
    
}

void loop()
  
{
 input1State = digitalRead(input1);
 
  if(input1State == HIGH)
  {
    digitalWrite(13,HIGH);
  }
  else if (input1State == LOW)
   digitalWrite(13,LOW);
}