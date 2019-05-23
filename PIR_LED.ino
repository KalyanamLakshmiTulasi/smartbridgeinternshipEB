void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(4,INPUT);
pinMode(5,OUTPUT);
}

void loop() {
  
int a=digitalRead(4);
 Serial.println(a);
if (a==HIGH)
{
  Serial.println("person detected");
   digitalWrite(5,HIGH);   
}
else
{
   Serial.println("person not detected");
   digitalWrite(5,LOW);   
}
}
