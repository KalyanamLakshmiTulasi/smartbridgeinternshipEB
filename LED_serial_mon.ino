void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("low");
   digitalWrite(2,LOW);
   delay(1000);
   Serial.println("high");
   digitalWrite(2,HIGH);
   delay(1000);
}
