#include "blinker.hpp"

Blinker::Blinker()
{
  pinMode(LED,OUTPUT);
  digitalWrite(LED,LOW);
  m_bState=false; // or off;

  setupInterruptCode();

  m_iOn = -1;
  m_iOff = -1;
  m_iCnt = 0;
  m_iDesiredCnt = 0;
}

void Blinker::setupInterruptCode()
{
  cli();

  TCCR0A = 0;// set entire TCCR0A register to 0
  TCCR0B = 0;// same for TCCR0B
  TCNT0  = 0;//initialize counter value to 0

  // set compare match register for 1khz increments
   OCR0A = 249;// = (16*10^6) / (1000*64) - 1 (must be <256)
                //  Clock Freq (16MHz) / (Increment Freq*Prescaler)
   // turn on CTC mode
  TCCR0A |= (1 << WGM01);
  // Set CS01 and CS00 bits for 64 prescaler
  TCCR0B |= (1 << CS01) | (1 << CS00);
  // enable timer compare interrupt
  TIMSK0 |= (1 << OCIE0A);
  sei();
}

void Blinker::DoBlink()
{
  if(m_iOn == -1)
  {
    if(m_bState)
    {
      digitalWrite(LED,LOW);
      m_iCnt=0;
      m_bState = false;
    }
    return;
  }

  if(m_iCnt != m_iDesiredCnt)
  {
    m_iCnt++;
    return;
  }

  if(m_bState)
  {
    digitalWrite(LED,LOW);
    m_iCnt = 0;
    m_iDesiredCnt = m_iOff;
    m_bState = false;
  }
  else
  {
    digitalWrite(LED,HIGH);
    m_iCnt = 0;
    m_iDesiredCnt = m_iOn;
    m_bState = true;
  }
}


void Blinker::SetBlink(int duration)
{
  m_iOn = duration;
  m_iOff = duration;
}

void Blinker::SetBlink(int on, int off)
{
  m_iOn = on;
  m_iOff = off;
}
