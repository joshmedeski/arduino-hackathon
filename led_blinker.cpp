#include "pins.h"
#include "Arduino.h"

class sos_blinker {

private:
  long _firstDuration, _secondDuration;

public:

  sos_blinker(long firstDur, long secondDur) {
    _firstDuration = firstDur;
    _secondDuration = secondDur;
  }

  void Blink() {
    for (int i=0; i<3; i++) {
      digitalWrite(LED, HIGH);
      delay(_firstDuration);
      digitalWrite(LED, LOW);
      delay(_firstDuration);
    }
    for (int i=0; i<3; i++) {
      digitalWrite(LED, HIGH);
      delay(_secondDuration);
      digitalWrite(LED, LOW);
      delay(_secondDuration);
    }
    for (int i=0; i<3; i++) {
      digitalWrite(LED, HIGH);
      delay(_firstDuration);
      digitalWrite(LED, LOW);
      delay(_firstDuration);
    }
    delay(2000);
  }
};
