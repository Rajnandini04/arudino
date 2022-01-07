int input2 = 3;
int input2State = 0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
         
}

void loop()
{
  input2State = digitalRead(input2);
  
  if(input2State == HIGH)
  {
  digitalWrite(2,HIGH);
  delay(500); 
  digitalWrite(2,LOW);
  delay(500); 
  }
}