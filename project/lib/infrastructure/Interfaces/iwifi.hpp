#ifndef WIFI
#define WIFI

class IWifi {
  public:
    virtual bool IsConnected()=0;
    virtual void Acknowledge()=0;
    virtual void SendCompleteMessage()=0;
};

#endif
