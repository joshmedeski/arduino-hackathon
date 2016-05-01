#include "ShakerCalibrateTestBed.hpp"

ShakerCalibrateTestBed::ShakerCalibrateTestBed(){};

void ShakerCalibrateTestBed::SetBlinker(IBlinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void ShakerCalibrateTestBed::SetSerial(IControlledSerial *pSerial)
{
  m_pSerial = pSerial;
}

void ShakerCalibrateTestBed::setup()
{
  m_pBlinker->SetBlink(500); // blinker default state.

  m_Shaker = ShakerUnit();
  m_pSerial->PostMessage("Test Init  @"+millis());
}

void ShakerCalibrateTestBed::loop()
{
  m_pSerial->PostMessage("Calibrating  @"+millis());
  m_Shaker.Calibrate();
  m_pSerial->PostMessage("Calibration Complete  @"+millis());

  // need some way to determine if Calibrate worked!
  m_pSerial->PostMessage("Calibration Verified  @"+millis());

  m_pBlinker->SetBlink(650, 350); // assumes Calibrate worked.

  delay(10000);

}
