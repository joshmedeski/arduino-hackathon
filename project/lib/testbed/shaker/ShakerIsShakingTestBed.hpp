#ifndef SHAKERTEST_ISSHAKING
#define SHAKERTEST_ISSHAKING

#include "testbed.hpp"
#include  "../shaker/shaker_implimentation.hpp"

class ShakerIsShakingTestBed: public ITestBed
{
  public:
    ShakerIsShakingTestBed();
    void SetBlinker(Blinker* pBlinker);// init the blinker outside before creating this class!
    void setup();
    void loop();
  private:
    Blinker* m_pBlinker;
    ShakerUnit m_Shaker;
};


#endif
