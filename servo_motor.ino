
#include<Servo.h>
Servo myservo;
int pos=0;

void setup() {
  myservo.attach(13);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos=0;pos<=180;pos +=1){
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  }
for(pos=180;pos>=0;pos-=1)
{
   myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
}
}
