#include "TEMP_SENSOR.h"
#include <wiringPi.h>
#include <cstring>
#include <fstream>
#include <iostream>

TEMP_SENSOR::TEMP_SENSOR() {
}

double TEMP_SENSOR::returnCelsius(){
	
	ifstream outputTxtFile;
	
	//stores temp read in output.txt
	system("more /sys/bus/w1/devices/*/w1_slave > output.txt");
	//searches output.txt for 5 consecutive integers and saves them in output1.txt
	system("grep -Eo '[0-9]{5}' output.txt > output1.txt");
	
	//open the text file containing our five consecutive integers
	outputTxtFile.open("output1.txt");
	//for each int in our file, store it in our array
	for (int counter = 0; counter < 5; counter++) {
		outputTxtFile >> tempDigits[counter];
	}
	outputTxtFile.close();
	
	//convert each member of our array in our string variable, 
	//converting and appending them one at a time
	string container;
	for (int b = 0; b < 5; b++ ) {
		if (container.length() < 5) { container += to_string(tempDigits[b]); }
	}
	
	//convert our freshly made string into an integer
	finalRead = atoi(container.c_str());
	//store that integer in our vector
	numStorage.push_back(finalRead);
	//assign our double to be equal to the first element in our vector
	double a = numStorage[0];
	//math for celsius
	a = a/1000;
	return a;
}

double TEMP_SENSOR::returnFahrenheit() {
	cout << returnCelsius() * 1.8 + 32 << " degrees Fahrenheit!" << endl;
	return a * 1.8 + 32;
}
