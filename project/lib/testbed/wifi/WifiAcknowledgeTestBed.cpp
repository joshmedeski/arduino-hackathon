#include "WifiAcknowledgeTestBed.hpp"

WifiAcknowledgeTestBed::WifiAcknowledgeTestBed()
{
  m_pBlinker = 0;
  m_bState=false;
}

void WifiAcknowledgeTestBed::SetBlinker(IBlinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void WifiAcknowledgeTestBed::SetSerial(IControlledSerial* pSerial)
{
  m_pSerial = pSerial;
}

void WifiAcknowledgeTestBed::setup()
{
  m_Wifi = WifiCard();
  m_pBlinker->SetBlink(1000);
}

void WifiAcknowledgeTestBed::loop()
{
  if(m_Wifi.IsConnected() && !m_bState)
  {
      m_Wifi.Acknowledge();
      m_pBlinker->SetBlink(650,350);
      m_bState = true;
  }

  delay(10000);

}
