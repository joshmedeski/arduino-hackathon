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

    bool m_bState;

    int m_iOn;
    int m_iOff;
    int m_iCnt;
    int m_iDesiredCnt;
};

// add this to main.cpp to use this class!
/*
volatile Blinker* blinker; // assign this in setup();

ISR(TIMER0_COMPA_vect){//timer0 interrupt
  if(blinker != null)
    blinker->DoBlink();
}
*/


#endif
