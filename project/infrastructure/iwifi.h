#include "common.h"

abstract class IWifi {
  public:
    bool IsConnected();
    void Acknowledge();
    void SendCompleteMessage();
}
