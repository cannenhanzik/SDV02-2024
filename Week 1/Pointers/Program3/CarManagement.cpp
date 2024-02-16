#include "CarManagement.h"
#include <iomanip>

namespace CarManagement {
	static void clearCinBuffer() {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	string colorToString(EnumColorDefinition color) {
		switch (color) {
		case Red: return "Red";
		case Blue: return "Blue";
		case Green: return "Green";
		case Black: return "Black";
		case Purple: return "Purple";
		case White: return "White";
		default: return "Unkown Color";
		}
	}

	void InputCarData(Car cars[], int size) {
		for (int i = 0; i < size; i++) {
			cout << "Car " << i + 1 << endl;
			cout << "Enter Make: ";
			cin.getline(cars[i].Make, 32);
			cout << "Enter Model: ";
			cin.getline(cars[i].Model, 32);
			cout << "Enter Year: ";
			cin >> cars[i].Year;
			clearCinBuffer();
			cout << "Enter Mileage: ";
			cin >> cars[i].Mileage;
			clearCinBuffer();
			cout << "Enter Color (0 for Red, 1 for Blue, 2 for Green, 3 for Black, 4 for Purple, 5 for White): ";
			int colorInput;
			cin >> colorInput;
			clearCinBuffer();
			cars[i].Color = static_cast<EnumColorDefinition>(colorInput);
		}
	}

	//void DisplayCar(const Car& car) {
	//	cout << left << setw(10) << "Make: " << setw(20) << car.Make << endl
	//		<< setw(10) << "Model: " << setw(20) << car.Model << endl
	//		<< setw(10) << "Year: " << setw(6) << car.Year << endl
	//		<< setw(10) << "Mileage: " << setw(6) << car.Mileage << endl
	//		<< setw(10) << "Color: " << setw(10) << colorToString(car.Color) << endl;
	//}

	void repaintCar(Car* ptrCar, EnumColorDefinition newColor) {
		if (ptrCar) {
			ptrCar->Color = newColor;
		}
	}

	void printCar(Car c) {
		cout << left << setw(10) << "Make: " << left << setw(20) << c.Make << endl;
		cout << left << setw(10) << "Model: " << left << setw(20) << c.Model << endl;
		cout << left << setw(10) << "Year: " << left << setw(6) << c.Year << endl;
		cout << left << setw(10) << "Mileage: " << left << setw(20) << c.Mileage << endl;
		cout << left << setw(10) << "Color: " << left << setw(10) << colorToString(c.Color) << endl;
	}

	void printCarPointer(Car* ptrCar) {
		if (ptrCar) {
			printCar(*ptrCar); // Defer to printCar by dereferencing ptrCar
		}
	}

	void addMileage(Car* ptrCar, int milesToAdd) {
		if (ptrCar) {
			ptrCar->Mileage += milesToAdd;
		}
	}
}

