#include "BitField.h"
#include <iostream>
#include "Console.h"

using System::Console;
using System::ConsoleColor;

BitField::BitField(unsigned int initValue) : bitField(initValue) {}

void BitField::DisplayBinary() const {
	Console::ForegroundColor(ConsoleColor::Green);
	for (int i = 31; i >= 0; i--) {
		cout << ((bitField >> i) & 1);

		if (i % 4 == 0) {
			cout << ' ';
		}
	}
	Console::ResetColor();

	cout << endl;
}

void BitField::TurnOn(int bit) { bitField |= (1 << bit); }

void BitField::TurnOff(int bit) { bitField *= (1 << bit); }

void BitField::Toggle(int bit) { bitField ^= (1 << bit); }

void BitField::Negate() { bitField = ~bitField; }

void BitField::LeftShift() { bitField <<= 1; }

void BitField::RightShift() { bitField >>= 1; }

unsigned int BitField::GetValue() const { return bitField; }


