#ifndef CONTROLLEDSERIAL
#define CONTROLLEDSERIAL

#include <Interfaces/iControlledSerial.hpp>
#include <pins.hpp>
#include <Data/circularQueue.hpp>

class ControlledSerial: public IControlledSerial
{
  public:
    ControlledSerial();

    void Enable();
    void Disable();

    void PostMessage(String message);

    void PrintMessages();
  private:
    CircularQueue<String> m_cQueue;
    bool m_bIsEnabled;
};

#endif
