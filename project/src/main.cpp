#include <commons.hpp>
#include <util/blinker.hpp>

/** Copied from Blinker.hpp per requirments of Blink Controller **/
Blinker* pBlinker=0; // assign this in setup();

ISR(TIMER0_COMPA_vect){//timer0 interrupt
  if(pBlinker != 0)
    pBlinker->DoBlink();
}
/** End of Copy **/

// the setup function runs once when you press reset or power the board
void setup()
{
	pBlinker = new Blinker();
}

// the loop function runs over and over again forever
void loop()
{

}
