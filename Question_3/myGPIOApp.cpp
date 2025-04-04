#include <iostream>
#include <string>
#include <sstream>
#include <unistd.h>
#include <fstream>
#include "myGPIO.h"
#define GPIOPATH "/sys/class/gpio/gpio"


int main()
{
	MYGPIO button(46);
	MYGPIO LED(60);
	
	button.setDirection("in");
	LED.setDirection("out");
	while(1)
	{
		int value = button.getValue();
		if(value == 0)
		{
			LED.setValue(1);
		}
		else
		{
			LED.setValue(0);
		}
	}

	

	
}
