// C++ code
//
int led=10;
int brightness=0;
void setup()
{
  pinMode(led,OUTPUT);
}

void loop()
{
 for(brightness=0;brightness<=255;
     brightness++)
 {analogWrite(led,brightness);
  delay(10);}
  for(brightness=255;brightness>=0;brightness--)
  {analogWrite(led,brightness);
   delay(10);}
}