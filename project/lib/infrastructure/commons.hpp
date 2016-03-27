#ifndef COMMON
#define COMMON

//#include <arduino.h>

#ifdef USEPERSONAL
  #include "pins.personal.hpp"
#else
  #include "pins.hpp"
#endif

#include "iwifi.hpp"
#include "ishaker.hpp"

#endif
