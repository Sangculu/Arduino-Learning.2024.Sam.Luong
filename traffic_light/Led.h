// if, define and endif are binded all together to create a header
#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led
{
  private:
  	byte pin;
    byte state;
  public:
  Led() {} //do not use
  Led(byte pin); // This is a constructor and the one above as well

  // init the pin for the Led
  // call this in setup()
  void init();
  void init(byte defaultState);

  void on();
  void off();

  // power on/off depends on the previous state
  void toggle();

  bool isPoweredOn();
};

#endif