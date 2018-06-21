#include <SoftwareSerial.h>

// BlueTooth Pin Define (RX, TX)
SoftwareSerial BlueTooth(0, 1);
char val = '\0';

// Motor A Pin
int E1 = 10;
int M1 = 12;
// Motor B Pin
int E2 = 11;
int M2 = 13;

void goAhead()
{
  // Right Wheel Goes Forward
  digitalWrite(M1, LOW);
  digitalWrite(E1, HIGH);
  
  // Left Wheel Goes Forward
  digitalWrite(M2, HIGH);
  digitalWrite(E2, HIGH);
}

void goBack()
{
  // Right Wheel Goes Backward
  digitalWrite(M1, HIGH);
  digitalWrite(E1, HIGH);

  // Left Wheel Goes Backward
  digitalWrite(M2, LOW);
  digitalWrite(E2, HIGH);
}

void goLeft()
{
   // Right Wheel Goes Forward
  digitalWrite(M1, LOW);
  digitalWrite(E1, HIGH);

  // Left Wheel Goes Backward
  digitalWrite(M2, LOW);
  digitalWrite(E2, HIGH);
}

void goRight()
{
  // Right Wheel Goes Backward
  digitalWrite(M1, HIGH);
  digitalWrite(E1, HIGH);
  
  // Left Wheel Goes Forward
  digitalWrite(M2, HIGH);
  digitalWrite(E2, HIGH);
}

void Stop()
{
  // Right Wheel Stops
  digitalWrite(M1, LOW);
  digitalWrite(E1, LOW);
  
  // Left Wheel Stops
  digitalWrite(M2, LOW);
  digitalWrite(E2, LOW);
}

void setup() 
{
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  Stop();
  // Set&Start BlueTooth Module
  BlueTooth.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (BlueTooth.available()) 
  {
    val = BlueTooth.read();
  }

  switch(val)
  {
    case 'w':
      goAhead();
      break;
    case 'x':
      goBack();
      break;
    case 's':
      Stop();
      break;
    case 'a':
      goLeft();
      break;
    case 'd':
      goRight();
      break;
    default:
      break;
  }
  delay(100);
}
