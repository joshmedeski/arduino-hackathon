#ifndef SHAKER
#define SHAKER

class IShaker {
  public:
    virtual void Calibrate()=0;
    virtual bool IsCalibrated()=0;
    virtual bool IsShaking()=0;
};

#endif
