#include<TimerOne.h>
int x=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Timer1.initialize(500000);
  Timer1.attachInterrupt(callback);
}
void callback()
{
  if(x==0)
    x=1;
  else
    x=0;
  digitalWrite(13,x);
}

void loop() {
  // put your main code here, to run repeatedly:
}
