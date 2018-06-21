int E1 = 10;
int M1 = 12;
int E2 =11;
int M2 = 13;

void setup()
{
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  int value;

  digitalWrite(M2, LOW);
  digitalWrite(E2, HIGH);
  
  /*
  for(value = 0 ; value <= 255; value+=5)
  {
    digitalWrite(M1,HIGH);
    digitalWrite(M2, HIGH);
    analogWrite(E1, value);
    analogWrite(E2, value);
    delay(30);
  }
  delay(1000);
  
  for(value = 0 ; value <= 255; value+=5)
  {
    digitalWrite(M1,LOW);
    digitalWrite(M2, LOW);
    analogWrite(E1, value);
    analogWrite(E2, value);
    delay(30);
  }
  delay(1000);
  */
} 
