int lsrpwm=6; //left side forward
int lslpwm=5;// left side backward
int rsrpwm=10;//right forward
int rslpwm=9;// right backward 


char val;

void setup() 
{  
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);

pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);

pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);


Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'B') // Back
    {
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);//
      analogWrite(rslpwm, 250);
      analogWrite(rsrpwm,0);

    }
    if( val == 'F') // Forward
    {
       digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
             
      analogWrite(lsrpwm, 245);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,240);

    }
    if( val == 'R') // Right
    {
  digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
             
      analogWrite(lsrpwm, 230);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 250);
      analogWrite(rsrpwm,0);

    }
    if( val == 'L') // Left
    {
       digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,250);

    }
    if( val == 'I') // Fwd Right
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 250);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm,0);
      analogWrite(rsrpwm,140);

    }
    if( val == 'G') // Fwd Left
    { 
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 130);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,250);

    }
    if( val == 'H') // Back Left
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 140);
      analogWrite(rslpwm,250);
      analogWrite(rsrpwm,0);

    }
    if( val == 'J') // Back Right
    {
         digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);
      analogWrite(rslpwm, 135);
      analogWrite(rsrpwm,0);

    }
     if( val == 'S') // Stop
    {
        digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm, 0);
    }
    }
