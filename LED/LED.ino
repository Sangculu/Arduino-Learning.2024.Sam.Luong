#define LED_PIN 13



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