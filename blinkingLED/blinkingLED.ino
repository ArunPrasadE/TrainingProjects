void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1; i<=5; i++){
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
  }
  for(int i=6; i<=9; i++){
    digitalWrite(12,HIGH);
    delay(500);
    digitalWrite(12,LOW);
    delay(500);
  }
  for(int i=10; i<=12; i++){
    digitalWrite(11,HIGH);
    delay(500);
    digitalWrite(11,LOW);
    delay(500);
    if(i==12){break;}
  }
}
