int count=0;
int count1=0;
void setup() {
//  pinMode(13,OUTPUT);
  pinMode(10,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
  Serial.begin(9600);
}

void loop() {
    if(digitalRead(10)==0)
    {
      while(digitalRead(10)==0);
      count++;
      delay(1);
    }
    Serial.print("INCOMING");
    Serial.println(count);
    delay(200);


    if(digitalRead(8)==0)
    {
      while(digitalRead(8)==0);
      count1++;
      delay(1);
    }
    Serial.print("OUTGOING");
    Serial.println(count1);
    delay(200);
}
