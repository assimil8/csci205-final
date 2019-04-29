#include "LED.h"
#include "LED.cpp"
#include "TEMP_SENSOR.h"
#include "TEMP_SENSOR.cpp"
#include <iostream>
#include <string>

using namespace std;


int main (int argc, char *argv[]){
	int blinkCount;
	//instantiate LED
	LED a(LED1);

	//instantiate TEMP_SENSOR
	TEMP_SENSOR b;

	//var to store selection
	char userInput;

	if(argc > 1) {
		if(string(argv[1])=="s") cout << "The status of the light is: " << a.areYouOnOrOff() << endl;
		else if (string(argv[1]) == "o") a.ignite();
		else if (string(argv[1]) == "f") a.extinguish();
		else if (string(argv[1]) == "b") {cout << "Enter blink count: "; cin >> blinkCount; a.blinkThisManyTimes(blinkCount);}
		else if (string(argv[1]) == "t") b.returnFahrenheit();
		else {cout << "Incorrect selection, exiting!" << endl; return 0;}
			} else {
				do {
					cout << "Please select from the following options: " << endl;
					cout << "(s) - Will check status off the LED" << endl;
					cout << "(o) - Will turn LED on" << endl;
					cout << "(f) - Will turn LED off" << endl;
					cout << "(b) - Will rapidly blink light twice" << endl;
					cout << "(t) - Will take temp reading" << endl;
					cout << "(e) - Exits" << endl;
					cin >> userInput;
					
					switch(userInput) {
						case 's':
							cout << "The status of the light is: " << a.areYouOnOrOff() << endl;
							break;
						case 'o':
							a.ignite();
							break;
						case 'f':
							a.extinguish();
							break;
						case 'b':
							cout << "Enter blink count: ";
							cin >> blinkCount;
							a.blinkThisManyTimes(blinkCount);
							break;
						case 't':
							b.returnFahrenheit();
							break;
						case 'e':
							cout << "Exiting" << endl;
							return 0;
						default:
							cout << userInput << " is not a valid selection!\n";
					} 
				} while (userInput != 'e');
		
		return 0;
	}
}
