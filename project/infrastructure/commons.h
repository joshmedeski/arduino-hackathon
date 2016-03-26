#ifndef COMMON
#define COMMON

#include "arduino.h"

#ifdef USEPERSONAL
  #include "pins.personal.h"
#elif
  #include "pins.h"
#endif

#include "infrastructure/iwifi.h"
#include "infrastructure/ishaker.h"

#endif
