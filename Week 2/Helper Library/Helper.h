// Guard to prevent multiple inclusion of header
#ifndef HELPER_H
#define HELPER_H

#include <iostream> // For input and output operations
#include <limits>   // For numeric_limits
#include <string>   // For string usage
#include <cstdlib>  // For rand(), srand()
#include <ctime>    // For time()
#include <bitset>   // For binary representation

using namespace std;

namespace Helper {
	// Function to get validated integer from user
	int GetValidatedInt(const char* strMessage, int nMinimumRange = 0, int nMaxiumRange = 0) {
		int input; // stores user input
		bool isValid = false;

		while(!isValid){ // Loop until valid input 
			cout << strMessage;
			cin >> input;

			// Check for input failure
			if (cin.fail() || (nMinimumRange != 0 || nMaxiumRange != 0) && (input < nMinimumRange || input > nMaxiumRange)) {
				ClearCinBuffer();
				cout << "Invalid input. Please try again.\n";
			}
			else {
				isValid = true;
			}
		}
		return input;
	}

	// Function to return a random number
	int GetRandomNumber(int min, int max) {
		static bool isSeeded = false; // Ensures srand is only called once
		if (!isSeeded) {
			srand(static_cast<unsigned int>(time(nullptr)));
			isSeeded = true;
		}
		return rand() % (max - min + 1) + min; // returns random number within range
	}

	// Function to print a menu from an array of strings
	int PrintMenu(const string MenuItems[], int itemCount) {
		for (int i = 0; i < itemCount; i++) { cout << (i + 1) << ". " << MenuItems[i] << endl; }
		// Prompt for user choice
		return GetValidatedInt("Choose an option: ", 1, itemCount);
	}

	// Utiliity function to clear cin buffer
	void ClearCinBuffer() {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	// Function to print an integer in binary, hex, or octal
	void PrintNumberInBase(int number, const string& base) {
		if (base == "binary") { // If user wants binary
			cout << "Binary: " << bitset<32>(number) << endl;
		}
		else if (base == "hex") { // If user wants hexadecimal
			cout << "Hexadecimal: " << hex << number << endl;
		}
		else if (base == "oct") { // If user wants octal
			cout << "Octal: " << oct << number << endl;
		}
		else {
			cout << "Unknown base.\n"; // Handle unknown base request
		}
		cout << dec; // Reset cout to print numbers in decimal by default
	}

	// function to copy a string
	string CopyString(const string& originalString){// return a copy of the original string
		return string(originalString);
	}

} // End of namespace Helper
#endif // end of guard HELPER_H