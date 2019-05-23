void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(4,INPUT);
}

void loop() {
  
int a=digitalRead(4);
 Serial.println(a);
if (a==HIGH)
{
  Serial.println("person detected");
   
}
else
{
   Serial.println("person not detected");
  
}
}
