#include<TimerOne.h>
int i=0;
unsigned long int period = 1000000;
void setup() {
  pinMode(13,OUTPUT);
  Timer1.initialize(period); //Initialize with 1 second Period
  Timer1.attachInterrupt(callback);
  Serial.begin(9600);
}
void callback()
{ 
  Serial.println(i);
  i=i+1;
  period = period/1.1;
  Timer1.setPeriod(period);
}
void loop() {
  // put your main code here, to run repeatedly:
}
