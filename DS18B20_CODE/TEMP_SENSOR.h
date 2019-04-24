//TEMP_SENSOR.h
#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H
#include <vector>

class TEMP_SENSOR {
	private: 
		//holds our parsed integers after grep
		int tempDigits[5];
		int counter;
		//holds converted integer that was previously a string
		int finalRead;
		double a;
		//easy storage
		vector<int> numStorage;

	public:
		TEMP_SENSOR();
		double returnCelsius();
		double returnFahrenheit();
};
#endif
		
