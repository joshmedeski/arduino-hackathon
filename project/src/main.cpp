#include <commons.hpp>
#include <util/blinker.hpp>
#include <util/controlledSerial.hpp>
#include <shaker/ShakerCalibrateTestBed.hpp>

#define A_VERY_LONG_WAIT 15000

IControlledSerial* pSerial=0;
/** Copied from Blinker.hpp per requirments of Blink Controller **/
IBlinker* pBlinker=0; // assign this in setup();

IWifi* pWifi=0;
IShaker* pShaker=0;

int state=0;

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

  pWifi = new WifiCard();
  pShaker = new ShakerUnit();

  #ifndef DEBUG // do this last!
    pSerial->Disable(); // disables serial writing when not in debug. Saves time.
  #endif

  pShaker->Calibrate();
  if(!pShaker->IsCalibrated())
  {
    pWifi->NegativeAcknowledge();
    pBlinker->SetBlink(650, 350);
    state = -1;
  }
  else
  {
    pWifi->Acknowledge();
    pBlinker->SetBlink(150);
    state = 0;
  }

}

// the loop function runs over and over again forever
void loop()
{
  switch(state)
  {
    case -1:
    {
      delay(A_VERY_LONG_WAIT);
      break;
    }
    case 0:
    {
      pBlinker->SetBlink(1000);
      while(pShaker->IsShaking())
      {
        delay(A_VERY_LONG_WAIT/2);
      }
      pWifi->SendCompleteMessage();
      pBlinker->SetBlink(350,650);
      state = 1;
    }
    case 1:
    {
      delay(A_VERY_LONG_WAIT);
    }
    default:
    {
      delay(A_VERY_LONG_WAIT);
    }
  }
}
