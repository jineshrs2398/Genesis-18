int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<=255;i++){
    analogWrite(5,i);
    delay(10);
  }
}
