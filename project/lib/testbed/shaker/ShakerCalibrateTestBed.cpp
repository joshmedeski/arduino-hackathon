#include "ShakerCalibrateTestBed.hpp"

ShakerCalibrateTestBed::ShakerCalibrateTestBed(){};

void ShakerCalibrateTestBed::SetBlinker(Blinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void ShakerCalibrateTestBed::setup()
{
  m_pBlinker->SetBlink(500); // blinker default state.

  m_Shaker = ShakerUnit();
}

void ShakerCalibrateTestBed::loop()
{
  m_Shaker.Calibrate();

  // need some way to determine if Calibrate worked!

  m_pBlinker->SetBlink(650, 350); // assumes Calibrate worked.

}
