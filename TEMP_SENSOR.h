//TEMP_SENSOR.h
#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H
#include <cstring>
#include <fstream>
#include <iostream>
#include <vector>
class TEMP_SENSOR {
	private: 
		int tempDigits[5];
		int counter;
		int finalRead;
		double a;
		vector<int> numStorage;

	public:
		TEMP_SENSOR();
		double returnCelsius();
		double returnFahrenheit();
};
#endif
		
