#include<SoftwareSerial.h>
SoftwareSerial bt(8,9);
void frd();
void brd();
void rgt();
void lft();
void stp();

void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.println("Enter you Command");

}

void loop() {
  if(bt.available())
    {
      char ch = bt.read();
      Serial.print(ch);
      if(ch == 'F')
      {
        frd();
      }
      if (ch == 'R')
      {
        rgt();
      }
      if (ch == 'L')
      {
        lft();
      }
      if (ch == 'B')
      {
        brd();
      }
      if(ch == 'S')
      {
        stp();
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
