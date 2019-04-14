#include <wiringPi.h>
#define LED1 0 

int main (void)  {
	int i;
	wiringPiSetup();
	pinMode(LED1, OUTPUT);
	for (i=0;i<20;i++) {	
		digitalWrite(LED1, HIGH);
		delay(500);
		digitalWrite(LED1, LOW);
		delay(500);
	}

	return 0;
}
