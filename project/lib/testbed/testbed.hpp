#ifndef TESTBED
#define TESTBED

#include "../infrastructure/util/blinker.hpp"

class ITestBed
{
  public:
    virtual void SetBlinker(Blinker* pBlinker)=0;
    virtual void setup()=0;
    virtual void loop()=0;
};

#endif
