#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int array_to_num(int arrayArg[], int arraySize) {
	char str[5][2];
	int i;
	char number[5] = {'\n'};

	for(i=0;i<arraySize;i++) {
		sprintf(str[i],"%d",arrayArg[i]);
	}
	for(i=0;i<arraySize;i++) {
		strcat(number,str[i]);
	}
	i = atoi(number);
	return i;
}


int main(){
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
	//assign our return concatenated integer to i
	i = array_to_num(tempDigits,5);
	return i;
}
