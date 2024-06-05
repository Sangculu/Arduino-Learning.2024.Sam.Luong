#include "Led.h"
#include <Arduino.h>

Led::Led(byte pin)
{
  this->pin = pin;
}
void Led::init()
{
  pinMode(pin, OUTPUT);
}
void Led::init(byte defaultState)
{
  init();
  if (defaultState == HIGH) {
    on();
  }
  else {
    off();
  }
}  
void Led::on()
{
  state = HIGH;
  digitalWrite(pin, HIGH);
}
void Led::off()
{ 
  state = LOW;
  digitalWrite(pin, LOW);
}

bool Led::isPoweredOn() {
  return (state == HIGH);
}

void Led::toggle()
{
  if (isPoweredOn()) {
    off();
  }
  else {
    on();
  }
}
