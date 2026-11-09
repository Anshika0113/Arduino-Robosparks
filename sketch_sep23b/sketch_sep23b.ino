void setup() {
 pinMode(13,OUTPUT);
 pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(A0)==1)
{
  digitalWrite(13,1);
}
else
{
  digitalWrite(13,0);
  }
}
