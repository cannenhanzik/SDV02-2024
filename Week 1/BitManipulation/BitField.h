#pragma once
using namespace std;
#ifndef BITFIELD_H
#define BITFIELD_H


class BitField
{
public:
	explicit BitField(unsigned int initValue = 0);
	void TurnOn(int bit);
	void TurnOff(int bit);
	void Toggle(int bit);
	void Negate();
	void LeftShift();
	void RightShift();
	void DisplayBits() const;

private:
	unsigned int bitField;
};

#endif // !BITFIELD_H
