#ifndef WIFI_ACKNOWLEDGE
#define WIFI_ACKNOWLEDGE

#include <testbedCommons.hpp>

class WifiAcknowledgeTestBed: public ITestBed
{
  public:
    WifiAcknowledgeTestBed();

    void SetBlinker(IBlinker* pBlinker);
    void SetSerial(IControlledSerial* pSerial);
    void setup();
    void loop();

  private:
    IBlinker* m_pBlinker;
    IControlledSerial* m_pSerial;
    WifiCard m_Wifi;
    bool m_bState;
};

#endif
