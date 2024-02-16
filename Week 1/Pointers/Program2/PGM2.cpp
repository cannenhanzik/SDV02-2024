#include "PGM2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

namespace PGM2 {
	 void printIntAndPointers(int value, int* ptr) { cout << "Value: " << setw(3) << value << ", Pointer Address: " << ptr << endl; }

	 void generateAndProcessArray() {
		srand(static_cast<unsigned int>(time(nullptr)));
		int arr[15]{};

		for (int& num : arr) {
			num = rand() % 100;
		}

		for (int& num : arr) { printIntAndPointers(num, &num); }
	}
}