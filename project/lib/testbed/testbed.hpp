#ifndef TESTBED
#define TESTBED

#include "../infrastructure/Interfaces/iBlinker.hpp"
#include "../infrastructure/Interfaces/iControlledSerial.hpp"

class ITestBed
{
  public:
    virtual void SetBlinker(IBlinker* pBlinker)=0;
    virtual void SetSerial(IControlledSerial* pSerial)=0;
    virtual void setup()=0;
    virtual void loop()=0;
};

#endif
