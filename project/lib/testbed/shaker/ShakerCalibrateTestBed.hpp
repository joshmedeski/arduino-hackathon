#ifndef SHAKER_CALIBRATE
#define SHAKER_CALIBRATE

#include <testbedCommons.hpp>

class ShakerCalibrateTestBed: public ITestBed
{
    public:
      ShakerCalibrateTestBed();
      void SetBlinker(IBlinker* pBlinker);// init the blinker outside before creating this class!
      void SetSerial(IControlledSerial* pSerial);
      void setup();
      void loop();
    private:
      IBlinker* m_pBlinker;
      IControlledSerial* m_pSerial;
      ShakerUnit m_Shaker;
};

#endif
