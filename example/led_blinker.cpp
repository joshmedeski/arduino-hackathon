#include "pins.h"
#include "Arduino.h"

class blink_binary {

private:
  String _binaryMessage;
  long _duration;
  int _binaryMessageLength;

public:

  blink_binary(String binaryMessage, long duration) {
    _binaryMessage = binaryMessage;
    _duration = duration;
    _binaryMessageLength = binaryMessage.length();
  }

  void Blink() {
    for (int i=0; i<_binaryMessageLength; i++) {
      if (_binaryMessage.charAt(i) == '1') {
        digitalWrite(LED, HIGH);
        delay(_duration);
      } else {
        digitalWrite(LED, LOW);
        delay(_duration);
      }
    }
  }
};
