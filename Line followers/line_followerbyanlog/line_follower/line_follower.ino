int lir=2;
int rir=3;
int lm1=4;//+ve
int lm2=5;//-ve
int rm1=6;//+ve
int rm2=7;//-ve
int lirvalue;
int rirvalue;

void setup() 
{
  pinMode(lir,INPUT);
  pinMode(rir,INPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  Serial.begin(9600);
 
}

void loop() 
{
  lirvalue=analogRead(lir);
  rirvalue=analogRead(rir);
  Serial.println(lirvalue);
  Serial.println(rirvalue);
  
  if(lirvalue==0&& rirvalue==0)
    forward();
  else if(lirvalue==1 && rirvalue==0)
     right();
  else if(lirvalue==0 && rirvalue==1)
      left(); 
  else if(lirvalue==1 && rirvalue==1)
      Stop();
  
}
void forward()
{
  analogWrite(lm1,255);
  analogWrite(lm2,0);
  analogWrite(rm1,255);
  analogWrite(rm2,0);
}
void backward()
{
  analogWrite(lm1,0);
  analogWrite(lm2,255);
  analogWrite(rm1,0);
  analogWrite(rm2,255);
}
void Stop()
{
  analogWrite(lm1,0);
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,0);
}

void right()
{
  analogWrite(lm1,255);
  analogWrite(lm2,0);
  analogWrite(rm1,150);
  analogWrite(rm2,0 );
}
void left()
{
  analogWrite(lm1,150);
  analogWrite(lm2,0);
  analogWrite(rm1,255);
  analogWrite(rm2,0);
}
