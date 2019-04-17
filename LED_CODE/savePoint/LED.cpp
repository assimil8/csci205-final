#include "LED.h"
#include <wiringPi.h>

LED::LED(int ledDefinition) {
	wiringPiSetup();
	pinMode(ledDefinition, OUTPUT);
}

void LED::ignite() {
	digitalWrite(LED1,HIGH);
}

void LED::extinguish() {
	digitalWrite(LED1,LOW);
}

bool LED::areYouOnOrOff() {
	return digitalRead(LED1);
}

void LED::blinkThisManyTimes(int blinkCount) {
	int x;
	if(areYouOnOrOff()==true) {
		extinguish();
	}
	for(x=0;x<blinkCount;x++) {
		digitalWrite(LED1, HIGH);
		delay(250);
		digitalWrite(LED1, LOW);
		delay(250);
	}
}
