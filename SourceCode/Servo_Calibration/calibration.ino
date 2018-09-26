#include<Servo.h>
Servo left_servo ,right_servo,back_servo;
double angle_left;
double angle_right;
void setup()
{
  left_servo.attach(10);
  right_servo.attach(9);
  back_servo.attach(6);
  
}
void loop()
{angle_left=90;
angle_left=map(angle_left, 0, 180, 7, 151);
  left_servo.write(angle_left); // 8 horizontal 175 is anti-horizontal
  angle_right=90;
angle_right=map(angle_right, 0, 180, 7, 164);//18 is horizontal 178 is anti_horizontal
  right_servo.write(angle_right);
}
