#include <commons.hpp>

// might be good to mentin necessary #defines in the pins.h

class ShakerUnit: public IShaker{
  public:
      ShakerUnit();
      void Calibrate();
      bool IsCalibrated();
      bool IsShaking();
  private:
      // your vars here.
};
