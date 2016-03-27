#include <commons.hpp>

// might be good to mentin necessary #defines in the pins.h

class WifiCard: public IWifi
{
  public:
      WifiCard();
      bool IsConnected();
      void Acknowledge();
      void SendCompleteMessage();
  private:
      // your vars here.
};
