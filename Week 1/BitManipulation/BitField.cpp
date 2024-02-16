#include "BitField.h"
#include <iostream>
#include "Console.h"

using System::Console;
using System::ConsoleColor;

BitField::BitField(unsigned int initValue) : bitField(initValue) {}

void BitField::TurnOn(int bit) { bitField |= 1U << bit; }
void BitField::TurnOff(int bit) { bitField &= ~(1U << bit); }
void BitField::Toggle(int bit) { bitField ^= 1U << bit; }
void BitField::Negate() { bitField = ~bitField; }
void BitField::LeftShift() { bitField <<= 1; }
void BitField::RightShift() { bitField >>= 1; }
void BitField::DisplayBits() const {
	cout << "bitField: " << bitField << endl << "Bits: ";
	Console::ForegroundColor(ConsoleColor::Green);
	for (int i = 31; i >= 0; i--) {
		if (i % 4 == 3) cout << " ";
		cout << ((bitField >> i) & 1);
	}
	Console::ResetColor();
	cout << endl;
}