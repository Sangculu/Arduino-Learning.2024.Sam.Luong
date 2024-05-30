#define LED_PIN 13

// We use double quote for files instead of <> for library
#include "Led.h"

Led led(LED_PIN);

void setup()
{
  led.init();
}

void loop()
{
  led.on();
  delay(500); // Wait for 1000 millisecond(s)
  led.off();
  delay(500); // Wait for 1000 millisecond(s)
}