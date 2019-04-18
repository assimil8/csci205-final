#include "TEMP_SENSOR.h"
#include <wiringPi.h>
#include <math.h>
#include <cstring>
using namespace std;
TEMP_SENSOR::TEMP_SENSOR(){
	//****************************
	//Constructor                *
	//****************************
	//create a file pointer
	FILE *filePtr;
	//create an array to store pertinent data
	int tempDigits[5];
	//counting var
	int i;
	//issue necessary commands
	system("sudo modprobe w1-gpio");
	system("sudo modprobe w1-therm");
	//output temp read into a text file
	system("more /sys/bus/w1/devices/*/w1_slave > output.txt");
	//search through generated  text file for five consecutive integers
	system("grep -Eo '[0-9]{5}' output.txt > output1.txt");
	// open file and read in parsed integer
	filePtr = fopen("output1.txt", "r");
	//iterate through the parsed ints and vacuum them up into our array
	for (i = 0; i < 5; i++) {
		fscanf(filePtr,"%1d",&tempDigits[i]);
	}
	//close file
	fclose(filePtr);
}

double TEMP_SENSOR::readTemp() {


	char str[5][2];
	int i;
	double tempReading;
	char number[5] = {'\n'};

	for(i=0;i<5;i++) {
		sprintf(str[i],"%f",&tempDigits[i]);
	}
	for(i=0;i<5;i++) {
		strcat(number,str[i]);
	}
	i = atoi(number);

	tempReading = i;
	return tempReading;
}

double TEMP_SENSOR::returnCelsius() {
	return (readTemp()/1000);
}

double TEMP_SENSOR::returnFahrenheit() {
	return returnCelsius() * 1.8 + 32;
}

