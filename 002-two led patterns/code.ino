// blink 2 leds simultaneously
// blink 2 leds sequentially
// blink 2 leds alternatively

int led1=13;
int led2=12;
void setup(){
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);}
void loop(){

//Task-1

  digitalWrite(led1,HIGH);
   digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
  delay(1000);

//Task-2

  digitalWrite(led1,HIGH);
  delay(1000);
   digitalWrite(led1,LOW);
  delay(1000);
  digitalWrite(led2,HIGH);
  delay(1000);
   digitalWrite(led2,LOW);
  delay(1000);

//Task-3

  digitalWrite(led1,HIGH);
   digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led1,LOW);
   digitalWrite(led2,HIGH);
  delay(1000);
}
