#include "../lib/secrets.h"
#include "../lib/watering_unit.h"

float vol, moisture;
int		number = 0;
float	moistureHistory[320];
int		currentIndex = 0;

void	setup(void)
{
	initializeSystem();
}

void	loop(void)
{
	M5.update();
	measureAndDisplayMoisture(vol, moisture);
	controlPump(moisture, number);
}
