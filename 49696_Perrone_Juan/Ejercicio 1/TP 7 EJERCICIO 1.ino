#define led1 9
#define led2 10
#define pulsador1 11
#define pulsador2 12
#define pulsador3 13
int led=led1;
 bool b=true; 
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(pulsador1, INPUT);
  pinMode(pulsador2, INPUT);
  pinMode(pulsador3, INPUT);
}

void loop()
{
  if(digitalRead(pulsador1)==HIGH){
  int i=0;
  delay(20);
  digitalWrite(led,LOW);
    for(i=0;i<256;i++){
    analogWrite(led,i);
      delay(5);
    }
  } 
  if(digitalRead(pulsador2)==HIGH){
  int i=256;
  digitalWrite(led,HIGH); 
  delay(20);
    for(i=256;i>=0;i--){
    analogWrite(led,i);
      delay(5);
    }
  }
  if(digitalRead(pulsador3)==HIGH){
    if(b){
    led=led2;
    b=false;
    delay(5);  
    }
    else{
    led=led1;
    b=true;
    delay(5);  
    }
  }
}