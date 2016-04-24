#ifndef SHAKER_CALIBRATE
#define SHAKER_CALIBRATE

#include "testbed.hpp"
#include  "../shaker/shaker_implimentation.hpp"

class ShakerCalibrateTestBed: public ITestBed
{
    public:
      ShakerCalibrateTestBed();
      void SetBlinker(Blinker* pBlinker);// init the blinker outside before creating this class!
      void setup();
      void loop();
    private:
      Blinker* m_pBlinker;
      ShakerUnit m_Shaker;
};

#endif
