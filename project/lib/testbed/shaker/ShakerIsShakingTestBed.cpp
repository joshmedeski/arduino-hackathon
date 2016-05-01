#include "ShakerIsShakingTestBed.hpp"

ShakerIsShakingTestBed::ShakerIsShakingTestBed(){};

void ShakerIsShakingTestBed::SetBlinker(IBlinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void ShakerIsShakingTestBed::SetSerial(IControlledSerial *pSerial)
{
  m_pSerial = pSerial;
}

void ShakerIsShakingTestBed::setup()
{
  m_pBlinker->SetBlink(500); // blinker default state
  m_Shaker = ShakerUnit();

  m_Shaker.Calibrate();
  m_pSerial->PostMessage("Test Init @ "+millis());
}

void ShakerIsShakingTestBed::loop()
{
  if(m_Shaker.IsShaking())
  {
    m_pBlinker->SetBlink(250);
    m_pSerial->PostMessage("Status: Shaking @ "+millis());
  }
  else
  {
    m_pBlinker->SetBlink(1000);
    m_pSerial->PostMessage("Status: Not Shaking @ "+millis());
  }

    delay(5000);
}
