void setup() {
  pinMode(13, OUTPUT);
  pinMode(10,INPUT);
}

void loop() {

  for(int i=5;i>=1;i--){
  digitalWrite(13, 1);
  delay(500);
  digitalWrite(13, 0);
  delay(500);
  } 
  digitalWrite(13, 1);
  delay(3000);
  digitalWrite(13, 0);
  delay(2000);

  
  while(1)
{
  if(digitalRead(10)==1)
  {
    digitalWrite(13,1);
  }
  else
  {
    digitalWrite(13,0);
  }
 }




}
 
 
