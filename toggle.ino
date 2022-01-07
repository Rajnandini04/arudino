int input3=2;
int inputState= 0;
int lastState= 0;
int prev = 0;
  
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
 inputState= digitalRead(input3);
  prev = digitalRead (3);
  
  if(lastState == HIGH && inputState == 0)
  {
    if (prev == 0)
    {
      digitalWrite(3, HIGH);
   prev = 1;
  }
  else if ( prev == 1)
    {
      digitalWrite(3, LOW);
    prev = 0;
     
    }
  }
 lastState = inputState;
 delay(100); 
}