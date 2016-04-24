#ifndef WIFI_ISCONNECTED
#define WIFI_ISCONNECTED

#include "testbed.hpp"
#include "../wifi/wifi_implimentation.hpp"

class WifiIsConnectedTestBed: public ITestBed
{
  public:
    WifiIsConnectedTestBed();

    void SetBlinker(Blinker* pBlinker);
    void setup();
    void loop();
    
  private:
    Blinker* m_pBlinker;
    WifiCard m_Wifi;
};

#endif
