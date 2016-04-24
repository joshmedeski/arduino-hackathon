#include "WifiCompleteTestBed.hpp"

WifiCompleteTestBed::WifiCompleteTestBed()
{
  m_pBlinker = 0;
  m_bState=false;
}

void WifiCompleteTestBed::SetBlinker(Blinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void WifiCompleteTestBed::setup()
{
  m_Wifi = WifiCard();
  m_pBlinker->SetBlink(1000);
}

void WifiCompleteTestBed::loop()
{
  if(m_Wifi.IsConnected() && !m_bState)
  {
      m_Wifi.SendCompleteMessage();
      m_pBlinker->SetBlink(650,350);
      m_bState = true;
  }

  delay(10000);

}
