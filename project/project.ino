#include "infrastructure/commons.h"
#include "wifi/wifi_implementation.h"
#include "shaker/shaker_implementation.h"

IWifi* wifi;
IShaker* shaker;

bool CanContinue;

// the setup function runs once when you press reset or power the board
void setup()
{
	wifi = new WifiCard();
	shaker = new ShakerUnit();

	shaker->Calibrate();


}

// the loop function runs over and over again forever
void loop()
{

}
