// SOS source code
// . . .  - - - . . .
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);  

}

void S()
{
  
  for(int i=0 ; i<3;i++){
  digitalWrite(13,HIGH);
  delay(200);
  digitalWrite(13,LOW);
  delay(200);
  }

}

void O()
{
  for(int i=0 ; i<3;i++){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }

}
void loop() {
  // put your main code here, to run repeatedly:
  S();
  delay(400);
  O();
  delay(400);
  S();
  delay(2000);
}
