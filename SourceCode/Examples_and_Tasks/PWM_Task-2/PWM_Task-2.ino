#include <TimerOne.h>

float f,t;
void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  Timer1.initialize(1000000);
  Timer1.pwm(9,511);
  Serial.begin(9600);
  Serial.print("Enter frequency:");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    delay(100);
    f=Serial.parseFloat();
    Serial.println(f);
    t=1/f;
    Timer1.setPeriod(t*1000000);
    Timer1.setPwmDuty(9,511);
    Serial.print("Enter frequency:");
  }
}
