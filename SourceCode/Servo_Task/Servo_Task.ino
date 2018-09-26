#include<Servo.h>

Servo myservo;
unsigned int angle;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(8);
  Serial.begin(9600);
  Serial.print("Enter angle:");
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0){
  }
  delay(100);
  angle=Serial.parseInt();
  Serial.println(angle);
//angle=map(angle,0,180,0,151);
  myservo.write(angle);
  Serial.print("Enter angle:");
}
