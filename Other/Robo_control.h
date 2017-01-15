#ifndef robo_h
#define robo_h
#include "Arduino.h"

class robo
{
  public:
    void begin();
    void goforward(float seconds, int speed);
    void goback(float seconds, int speed);
    void turnright(int time);
    void turnleft(int time);
    int proximity();
};

#endif
