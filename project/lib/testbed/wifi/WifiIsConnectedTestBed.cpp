#include "WifiIsConnectedTestBed.hpp"

WifiIsConnectedTestBed::WifiIsConnectedTestBed(){}

void WifiIsConnectedTestBed::SetBlinker(Blinker *pBlinker)
{
  m_pBlinker = pBlinker;
}

void WifiIsConnectedTestBed::setup()
{
  m_Wifi = WifiCard();
}

void WifiIsConnectedTestBed::loop()
{
  if(m_Wifi.IsConnected())
    m_pBlinker->SetBlink(250);
  else
    m_pBlinker->SetBlink(1000);

    delay(5000);

}
