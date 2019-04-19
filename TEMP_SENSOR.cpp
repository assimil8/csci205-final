#include "TEMP_SENSOR.h"
#include <wiringPi.h>
#include <math.h>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>


TEMP_SENSOR::TEMP_SENSOR() {
}

double TEMP_SENSOR::returnCelsius(){
	
	ifstream outputTxtFile;
	system("more /sys/bus/w1/devices/*/w1_slave > output.txt");
	system("grep -Eo '[0-9]{5}' output.txt > output1.txt");
	outputTxtFile.open("output1.txt");
	for (int counter = 0; counter < 5; counter++) {
		outputTxtFile >> tempDigits[counter];
	}
	outputTxtFile.close();
	string container;
	for (int b = 0; b < 5; b++ ) {
		if (container.length() < 5) { container += to_string(tempDigits[b]); }
	}

	finalRead = atoi(container.c_str());
	numStorage.push_back(finalRead);
	double a = numStorage[0];
	a = a/1000;
	return a;
}

double TEMP_SENSOR::returnFahrenheit() {
	cout << returnCelsius() * 1.8 + 32 << " degrees Fahrenheit!" << endl;
	return a * 1.8 + 32;
}
