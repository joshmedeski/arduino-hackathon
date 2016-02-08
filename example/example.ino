#include "led_blinker.cpp"

blink_binary* blinker;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
  blinker = new blink_binary("1010110011100011110000", 500);
}

// the loop function runs over and over again forever
void loop() {
  blinker->Blink();
}
