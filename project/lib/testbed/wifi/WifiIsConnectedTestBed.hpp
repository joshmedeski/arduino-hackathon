#ifndef WIFI_ISCONNECTED
#define WIFI_ISCONNECTED

#include <testbedCommons.hpp>

class WifiIsConnectedTestBed: public ITestBed
{
  public:
    WifiIsConnectedTestBed();

    void SetBlinker(IBlinker* pBlinker);
    void SetSerial(IControlledSerial* pSerial);
    void setup();
    void loop();

  private:
    IBlinker* m_pBlinker;
    IControlledSerial* m_pSerial;
    WifiCard m_Wifi;
};

#endif
