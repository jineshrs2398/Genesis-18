#include<TimerOne.h>

void setup()
{
  pinMode(9,OUTPUT);
  Timer1.initialize(1000);
  Timer1.pwm(9,255);
}

void loop()
{
  Timer1.setPwmDuty(9,255);
  delay(1000);
  Timer1.setPwmDuty(9,767);
  delay(1000);
}
