//TEMP_SENSOR.h
#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#include<wiringPi.h>
#include<string>
#include<fstream>

using namespace std;

class TEMP_SENSOR {
	public:
		TEMP_SENSOR();
		double tempDigits[5];
		double readTemp();
		double returnFahrenheit();
		double returnCelsius();

};

#endif
		
