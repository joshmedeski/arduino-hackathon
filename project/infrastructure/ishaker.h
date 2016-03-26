#include "common.h"

abstract class IShaker {
  public:
    void Calibrate();
    bool IsShaking();
}
