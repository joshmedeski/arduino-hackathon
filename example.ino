#include "led_blinker.cpp"

sos_blinker* blinker;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
  blinker = new sos_blinker(500, 1000);
}

// the loop function runs over and over again forever
void loop() {
  blinker->Blink();
}
