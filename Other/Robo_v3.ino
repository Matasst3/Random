#include <Servo.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
#include <robo.h>
#define led7 7
#define trigPin 6
#define echoPin 5
robo mrobo;
int turnnum = 0;
int turnvalue = 0;
Servo right;
Servo left;
int pos = 0;
void setup ()
{
    Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("----Loading----");
  delay(1);
  lcd.setCursor(0,1);
  lcd.print("=");
  delay(300);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("--->>Start!<<---");
  lcd.setCursor(0,1);
  delay(700);
  lcd.print("---$Arduino$---");
  Serial.begin (5600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led7, OUTPUT);
  mrobo.begin();
  randomSeed(analogRead(3));
  right.attach(2);
  left.attach(3);

}

void loop ()
{
    {
    if (Serial.available()) {
      delay(100);
      while (Serial.available() > 0){
      }
      }
    }
  mrobo.goforward(0.1, 390);
  if (mrobo.proximity() < 25)
  {
    turnnum = random(2);
    turnvalue = random(400, 550);
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
   long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);

 /** ------Distance------ **/

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

    // --------------------------------RIGHT--------------------------------

   right.write(105);
   delay(10000);
   right.write(50);

     // --------------------------------LEFT--------------------------------

   left.write(180);
   delay(10000);
   left.write(130);
;

  }
