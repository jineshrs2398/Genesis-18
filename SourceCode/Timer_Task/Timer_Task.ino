unsigned long int t;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  t=millis();
  digitalWrite(13,HIGH);
  while(millis()-t<500){   //wait for 2  seconds
  }
  digitalWrite(13,LOW);
  while(millis()-t<1000){   //wait for another 1 second
  }
}
