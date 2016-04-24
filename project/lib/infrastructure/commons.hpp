#ifndef COMMON
#define COMMON

//#include <arduino.h>
#define NORMAL_BLINK 1000

#ifdef USEPERSONAL
  #include "pins.personal.hpp"
#else
  #include "pins.hpp"
#endif

#include "Interfaces/iBlinker.hpp"
#include "Interfaces/iControlledSerial.hpp"
#include "Interfaces/iwifi.hpp"
#include "Interfaces/ishaker.hpp"

#endif
