//LED.h
#ifndef LED_H
#define LED_H

using namespace std;

const int LED1 = 0;

class LED {
	//left out private, as all c++ class members are private by default
	public:
		LED(int);
		void blinkThisManyTimes(int);
		void ignite();
		void extinguish();
		bool areYouOnOrOff();
};

#endif
		
		
