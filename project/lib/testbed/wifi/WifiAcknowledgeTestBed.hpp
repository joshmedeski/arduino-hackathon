#ifndef WIFI_ACKNOWLEDGE
#define WIFI_ACKNOWLEDGE

#include "testbed.hpp"
#include "../wifi/wifi_implimentation.hpp"

class WifiAcknowledgeTestBed: public ITestBed
{
  public:
    WifiAcknowledgeTestBed();

    void SetBlinker(Blinker* pBlinker);
    void setup();
    void loop();

  private:
    Blinker* m_pBlinker;
    WifiCard m_Wifi;
    bool m_bState;
};

#endif
