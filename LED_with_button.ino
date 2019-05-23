void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   pinMode(4,OUTPUT); 
   pinMode(5,INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=digitalRead(5);
  Serial.println(a);
  if(a==LOW)
    {
      
      Serial.println("HIGH");
   digitalWrite(4,HIGH);
   delay(100);
    }
   else
   {
    Serial.println("LOW");
   digitalWrite(4,LOW);
   delay(100);
   }
  
}
