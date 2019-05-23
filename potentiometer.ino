void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   pinMode(4,OUTPUT); 
   pinMode(34,INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(34);
  Serial.println(a);
  if(a>=150)
  {
    Serial.println("high");
    digitalWrite(4,HIGH);
    delay(100);
  }
  else
  {
    Serial.println("low");
    digitalWrite(4,LOW);
    delay(100);
  }
  
  
}
