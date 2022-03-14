int lm1=3;//+ve
int lm2=5;//-ve
int rm1=6;//+ve
int rm2=9;//-ve


void setup() 
{
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  Serial.begin(9600);
 
}

void loop() 
{
  String cmd;
  while(Serial.available()>0)
  {
    delay(3);
    char c =Serial.read();
    cmd +=c;
  }
  if(cmd.length()>0)
  {
    Serial.println(cmd);
    if(cmd=="forward")
    {
      forward();
    }
    else if(cmd=="backward")
    {
      backward();
    }
    else if(cmd=="left")
    {
      left();
    }
    else if(cmd=="right")
    {
      right();
    }
    else if(cmd=="rotate left")
    {
      rotate_left();
    }
    else if(cmd=="rotate right")
    {
      rotate_right();
    }
    else if(cmd=="circle")
    {
      circle();
    }
    else if(cmd=="rectangle")
    {
      rectangle();
    }
    else if(cmd=="love")
    {
      love();
    }
    else
    {
      Stop();
    }
  }
  
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
void rotate_left()
{
  analogWrite(lm1,0);
  analogWrite(lm2,255);
  analogWrite(rm1,255);
  analogWrite(rm2,0);
}
void rotate_right()
{
  analogWrite(lm1,255);
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,255);
}
void rectangle()
{
  forward();
  forward();
  right();
  forward();
  right();
  forward();
  forward();
  right();
  forward();
  right();
  Stop();
  
}
void circle()
{
  right();
  right();
  right();
  right();
  Stop();
}
void love()
{
  forward();
  right();
  right();
  rotate_right();
  right();
  right();
  forward();
  Stop();
}
