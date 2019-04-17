#include "LED.h"
#include "LED.cpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, char *argv[]){
	const int LED1=0;
	//instantiate LED
	LED a(LED1);
	


	//var to store selection
	string userInput;

	if(argc > 1) {
		if(string(argv[1])=="s") cout << "The status of the light is: " << a.areYouOnOrOff() << endl;
		else if (string(argv[1]) == "o") a.ignite();
		else if (string(argv[1]) == "f") a.extinguish();
		else if (string(argv[1]) == "b") a.blinkThisManyTimes(2);
		else {cout << "Incorrect selection, exiting!" << endl; return 0;}
			} else {
				while (userInput != "e") {
					cout << "Please select from the following options: " << endl;
					cout << "(s) - Will check status off the LED" << endl;
					cout << "(o) - Will turn LED on" << endl;
					cout << "(f) - Will turn LED off" << endl;
					cout << "(b) - Will rapidly blink light twice" << endl;
					cout << "(e) - Exits" << endl;
					cin >> userInput;
					if (userInput == "s") cout << "The status of the light is: " << a.areYouOnOrOff() << endl;
					else if (userInput == "o") a.ignite();
					else if (userInput == "f") a.extinguish();
					else if (userInput == "b") a.blinkThisManyTimes(2);
					else if (userInput == "e") {cout << "exiting" << endl; return 0;}
					else {cout << "Incorrect selection, exiting " << endl; return 0;}
					}
					 return 0;
				}
		return 0;
	}

