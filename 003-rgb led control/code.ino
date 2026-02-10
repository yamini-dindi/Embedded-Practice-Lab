void setup(){
  Serial.begin(9600);
  Serial.print("enter colour");
  pinMode(13,OUTPUT); //13-RED
  pinMode(12,OUTPUT); //12-GREEN
  pinMode(11,OUTPUT); //11-BLUE
}
void loop(){
  if(Serial.available()){
    char val=Serial.read();
  
    //Using conditional statements
    if(val=='r'){
      digitalWrite(13,HIGH);}
    else if(val=='g'){
      digitalWrite(12,HIGH);}
      else if(val=='b'){
      digitalWrite(11,HIGH);}
    else{
      digitalWrite(13,LOW);
  		digitalWrite(12,LOW);
      digitalWrite(11,LOW);}
    
  //Using Switch Case
  /*  switch(val){
      case 'r': digitalWrite(13,HIGH);
      delay(1000);
      break;
      case 'g':digitalWrite(12,HIGH);
      delay(1000);
      break;
      case 'b':digitalWrite(11,HIGH);
      delay(1000);
      break;
      case 'o':digitalWrite(13,LOW);
  		digitalWrite(12,LOW);
        digitalWrite(11,LOW);
      delay(1000);
    }*/
  }
}
