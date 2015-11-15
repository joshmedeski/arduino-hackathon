#include "pins.h"
#include "Arduino.h"

class led_blinker {

  private:
    long _duration;

  public:

    led_blinker(long duration) {
      _duration = duration;
    }

    void Blink() {
      digitalWrite(LED, HIGH);
      delay(_duration);
      digitalWrite(LED, LOW);
      delay(_duration);
    }

};
