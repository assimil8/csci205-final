#include <wiringPi.h>
#define LED1 0 

int main (void)  {
	wiringPiSetup();
	pinMode(LED1, OUTPUT);	
		digitalWrite(LED1, LOW);
	}

	return 0;
}
