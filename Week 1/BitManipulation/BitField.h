#pragma once
using namespace std;

class BitField
{
public:
	BitField(unsigned int initValue);
	void DisplayBinary() const;
	void TurnOn(int bit);
	void TurnOff(int bit);
	void Toggle(int bit);
	void Negate();
	void LeftShift();
	void RightShift();
	unsigned int GetValue() const;

private:
	unsigned int bitField;
};

