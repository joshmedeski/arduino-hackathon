#include <commons.hpp>
#include <wifi_implimentation.hpp>
#include <shaker_implimentation.hpp>

IWifi* wifi;
IShaker* shaker;

bool CanContinue;

// the setup function runs once when you press reset or power the board
void setup()
{
	wifi = new WifiCard();
	//shaker = new ShakerUnit();

	//shaker->Calibrate();
}

// the loop function runs over and over again forever
void loop()
{

}
