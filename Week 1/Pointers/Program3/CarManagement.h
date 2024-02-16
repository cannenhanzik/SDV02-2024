#ifndef CARMANAGEMENT_H
#define	CARMANAGEMENT_H

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

namespace CarManagement {
	enum EnumColorDefinition {
		Red,
		Blue, 
		Green,
		Black,
		Purple,
		White
	};
	
	struct Car {
		char Make[32];
		char Model[32];
		int Year;
		int Mileage;
		EnumColorDefinition Color;
	};

	void InputCarData(Car cars[], int size);
	void DisplayCar(const Car& car);
	void repaintCar(Car* ptrCar, EnumColorDefinition newColor);
	void printCar(Car c);
	void printCarPointer(Car* ptrCar);
	void addMileage(Car* ptrCar, int milesToAdd);
} 

#endif

