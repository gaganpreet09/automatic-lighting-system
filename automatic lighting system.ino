int a=8;
int b=12;
int c=4;
int count=0;
void setup() {
pinMode(a,INPUT);
pinMode(b,INPUT);
pinMode(c,OUTPUT);
Serial.begin(9600);
}

void loop() {
  
  if(digitalRead(a)==LOW)
  {
    count=count+1;
    if(count>0)
    {
    Serial.print("No. of people in room = ");
    Serial.println(count);
    delay(1000);
    }
    else{
         Serial.println("No. of people in room = 0 ");
          delay(1000);
    }
  
  }
  
  if(digitalRead(b)==LOW)
  {
    count=count-1;
    if(count>0)
    {
    Serial.print("No. of people in room = ");
    Serial.println(count);
    delay(1000);
    }
    else{
         Serial.println("No. of people in room = 0 ");
         delay(1000);

    }
  }
 
  if(count>0)
  {
    digitalWrite(c,HIGH);
  }
  else
  {
  digitalWrite(c,LOW);
  }
  }
  
