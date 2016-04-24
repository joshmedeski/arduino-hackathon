#include "controlledSerial.hpp"

ControlledSerial::ControlledSerial()
{
  m_cQueue = CircularQueue<String>(20);
  m_bIsEnabled = true;
};

void ControlledSerial::Enable()
{
  m_bIsEnabled = true;
};

void ControlledSerial::Disable()
{
  m_bIsEnabled = false;
};

void ControlledSerial::PostMessage(String message)
{
  if(!m_bIsEnabled)
    return;

    m_cQueue.Enque(message);

};

void ControlledSerial::PrintMessages()
{
  if(!m_bIsEnabled)
    return;

    while(m_cQueue.HasItems())
    {
      Serial.println(m_cQueue.Deque());
    }
};
