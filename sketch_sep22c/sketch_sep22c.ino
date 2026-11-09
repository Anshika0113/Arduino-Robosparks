void setup() {
  pinMode(10,INPUT);
  Serial.begin(9600);
  Serial.println("Banasthali");

}

void loop() {
  if(Serial.available())
  {
    int sensor = Serial.read(1);
    Serial.println(" Sensor");
  }
}
