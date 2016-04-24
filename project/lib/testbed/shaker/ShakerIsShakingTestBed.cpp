#include "ShakerIsShakingTestBed.hpp"

ShakerIsShakingTestBed::ShakerIsShakingTestBed(){};

void ShakerIsShakingTestBed::SetBlinker(Blinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void ShakerIsShakingTestBed::setup()
{
  m_pBlinker->SetBlink(500); // blinker default state
  m_Shaker = ShakerUnit();

  m_Shaker.Calibrate();
}

void ShakerIsShakingTestBed::loop()
{
  if(m_Shaker.IsShaking())
    m_pBlinker->SetBlink(250);
  else
    m_pBlinker->SetBlink(1000);

    delay(5000);
}
