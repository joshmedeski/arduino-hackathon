#ifndef IBLINKER
#define IBLINKER

class IBlinker {
  public:
    virtual void SetBlink(int duration)=0; // assumed even on and off duration
    virtual void SetBlink(int on, int off)=0; // time on, time off

    virtual void DoBlink()=0;
};

#endif
