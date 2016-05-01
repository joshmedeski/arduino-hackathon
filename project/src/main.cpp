#include <commons.hpp>
#include <util/blinker.hpp>
#include <util/controlledSerial.hpp>
#include <shaker/ShakerCalibrateTestBed.hpp>

IControlledSerial* pSerial=0;
/** Copied from Blinker.hpp per requirments of Blink Controller **/
IBlinker* pBlinker=0; // assign this in setup();
ITestBed* pTest=0;

ISR(TIMER0_COMPA_vect){//timer0 interrupt
  if(pBlinker != 0)
    pBlinker->DoBlink();
}

/** End of Copy **/

// the setup function runs once when you press reset or power the board
void setup()
{
	pBlinker = new Blinker();
  pBlinker->SetBlink(NORMAL_BLINK);

  pSerial = new ControlledSerial();
  pSerial->PostMessage((String)"Setup executed: "+millis()/1000+"s.");

  //#ifndef DEBUG // do this last!
    //pSerial->Disable(); // disables serial writing when not in debug. Saves time.
  //#endif
  pTest = new ShakerCalibrateTestBed();
  pTest->setup();
}

// the loop function runs over and over again forever
void loop()
{
  pTest->loop();
  pSerial->PrintMessages();
}
