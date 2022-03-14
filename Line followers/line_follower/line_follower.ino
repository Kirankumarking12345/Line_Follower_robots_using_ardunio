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
 
}

void loop() 
{
  lirvalue=digitalRead(lir);
  rirvalue=digitalRead(rir);
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
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}
void backward()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,1);
  digitalWrite(rm1,0);
  digitalWrite(rm2,1);
}
void Stop()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0);
}
void left()
{
  digitalWrite(lm1,0);
  digitalWrite(lm2,0);
  digitalWrite(rm1,1);
  digitalWrite(rm2,0);
}
void right()
{
  digitalWrite(lm1,1);
  digitalWrite(lm2,0);
  digitalWrite(rm1,0);
  digitalWrite(rm2,0 );
}
