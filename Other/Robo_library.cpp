#include "Arduino.h"
#include "Robo_control.h"

void robo::begin()
{
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(13, OUTPUT);
  pinMode(8, OUTPUT);
}

void robo::goforward(float seconds, int speed)
{
  digitalWrite(12, HIGH);
  digitalWrite(9, LOW);
  analogWrite(3, speed);

  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  analogWrite(11, speed);

  delay(seconds*1000);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void robo::goback(float seconds, int speed)
{
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  analogWrite(3, speed);

  digitalWrite(13, LOW);
  digitalWrite(8, LOW);
  analogWrite(11, speed);

  delay(seconds*1000);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void robo::turnright(int time)
{
  digitalWrite(12, LOW);
  digitalWrite(9, LOW);
  analogWrite(3, 650);

  digitalWrite(13, HIGH);
  digitalWrite(8, LOW);
  analogWrite(11, 650);

  delay(time);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void robo::turnleft(int time)
{
  digitalWrite(12, HIGH);
  digitalWrite(8, LOW);
  analogWrite(3, 650);

  digitalWrite(13, LOW);
  digitalWrite(9, LOW);
  analogWrite(11, 650);

  delay(time);

  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

int robo::proximity()
{
  int reading = analogRead(2);
  float volts = reading*0.0048828125;
  float distance = 65*pow(volts, -1.10);
  return distance;
}
