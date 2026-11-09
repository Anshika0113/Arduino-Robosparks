int count = 0;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A2,INPUT);

} 

void loop() {
  
  
  if(digitalRead(A0)==1 && digitalRead(A2)==1)
  {
    frd(); 
  }
  else if(digitalRead(A0)==1 && digitalRead(A2)==0)
  {
    rgt(); 
  }
  else if(digitalRead(A0)==0 && digitalRead(A2)==1)
  {
    lft(); 
  }
  else if(digitalRead(A0)==0 && digitalRead(A2)==0)
    {
      count++;
      frd();
      if(count==2)
      {
        stp();
      }
      else
      {
        frd();
      }
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
