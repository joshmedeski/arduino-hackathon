#ifndef SHAKERTEST_ISSHAKING
#define SHAKERTEST_ISSHAKING

#include <testbedCommons.hpp>

class ShakerIsShakingTestBed: public ITestBed
{
  public:
    ShakerIsShakingTestBed();
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
