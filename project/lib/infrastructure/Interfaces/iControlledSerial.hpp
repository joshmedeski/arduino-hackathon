#ifndef ICONTROLLEDSERIAL
#define ICONTROLLEDSERIAL

#include <Arduino.h>

class IControlledSerial {
  public:
    virtual void Enable()=0;
    virtual void Disable()=0;

    virtual void PostMessage(String mesage)=0;

    virtual void PrintMessages()=0;
};

#endif
