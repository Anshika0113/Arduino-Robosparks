void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  if(digitalRead(A0)==1)
  {
    stp();
    delay(500);
    brd();
    delay(1000);
    rgt();
    delay(600);
  }
  else
  {
    frd();
    delay(5000);
  }
}
void frd()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
}
void brd()
{
  digitalWrite(2,0);
  digitalWrite(3,1);
  digitalWrite(4,1);
  digitalWrite(5,0);
}
void rgt()
{
  digitalWrite(2,1);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
}
void lft()
{
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,1);
}
void stp()
{
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
}
