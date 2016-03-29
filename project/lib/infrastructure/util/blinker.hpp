#ifndef BLINKER
#define BLINKER

#include <avr/io.h>
#include <avr/interrupt.h>
#include "pins.hpp"

class Blinker
{
  // relies on an LED pin, defined in pins.hpp
  // duration unless notes are in milliseconds
public:
    Blinker(); // assumed to be called by setup.

    void SetBlink(int duration); // assumed even on and off duration
    void SetBlink(int on, int off); // time on, time off

    void DoBlink();

  private:
    void setupInterruptCode();

    volatile bool m_bState;

    int m_iOn;
    int m_iOff;
    volatile int m_iCnt;
    volatile int m_iDesiredCnt;
};

// add this to main.cpp to use this class!
/*
Blinker* pBlinker=0; // assign this in setup();

ISR(TIMER0_COMPA_vect){//timer0 interrupt
  if(pBlinker != 0)
    pBlinker->DoBlink();
}
*/


#endif
