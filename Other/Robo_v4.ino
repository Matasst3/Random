#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
#include <robo.h>
#define led7 7
#define trigPin 6
#define echoPin 5
#define trigPin2 11
#define echoPin2 10
int turnnum = 0;
int turnvalue = 0;
Servo right;
Servo left;
int pos = 0;
robo mrobo;
void setup ()
{
    Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("----Loading-----");
  delay(1);
  lcd.setCursor(0,1);
  lcd.print("=");
  delay(300);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("---->Start!<----");
  lcd.setCursor(0,1);
  delay(700);
  lcd.print("----Arduino$----");
  Serial.begin (5600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(led7, OUTPUT);
  mrobo.begin();
  randomSeed(analogRead(3));
  right.attach(2);
  left.attach(4);
}

void loop ()
{
  /** ------Explore------ **/
    {
    if (Serial.available()) {
      delay(100);
      while (Serial.available() > 0){
      }
      }
    }
  mrobo.goforward(0.1, 400);
  if (mrobo.proximity() < 28)
  {
    turnnum = random(2);
    turnvalue = random(150, 450);
    if (turnnum == 0)
    {
      mrobo.turnright(turnvalue);
    }
    if (turnnum == 1)
    {
      mrobo.turnleft(turnvalue);
    }
  }
    {

  /** ------Distance------ **/

   long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);
    if (distance > 20) {
    mrobo.goback(1, 650);
    digitalWrite(led7,HIGH);
    delay(300);
    mrobo.turnright(350);
}
  else {
    digitalWrite(led7,LOW);
  }
}
{

  /** ------Grabber------ **/

   long duration2, distance2;
  digitalWrite(trigPin2, LOW);
  delay(1);
  digitalWrite(trigPin2, HIGH);
  delay(1);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration2/2) / 29.1;
  Serial.print(distance2);
   if (distance2 < 2) {
   right.write(50);
   left.write(180);
   }
  else {
   right.write(105);
   left.write(130);
  }
}
}
