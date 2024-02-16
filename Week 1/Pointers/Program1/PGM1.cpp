#include "PGM1.h";
#include <cstdlib>;
#include <ctime>
#include <iostream>

namespace PGM1 {
	void generateAndPrint() {
		srand(static_cast<unsigned int>(time(nullptr)));
		int arr[15];

		for (int i = 0; i < 15; i++) {
			arr[i] = rand() % 100;
			cout << "Value: " << arr[i] << ", Address: " << &arr[i] << endl;
		}
	}
}; // namespace PGM1