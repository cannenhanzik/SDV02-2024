#include <iostream>
#include "BitField.h"
#include "Console.h"

using System::Console;

int main()
{
unsigned int initialValue;
cout << "Enter an initial value for the BitField: ";
cin >> initialValue;

BitField bitField(initialValue);
bitField.DisplayBits();

int choice;
int bit;

while (true) {
    cout << "\n(TurnOn = 1, TurnOff = 2, Toggle = 3, Negate = 4, LeftShift = 5, RightShift = 6, Exit = 7): ";
    cin >> choice;
    
    if (choice == 7) { break; }

    switch (choice) {
    case 1:
        cout << "Enter bit index (0-31): ";
        cin >> bit;
        bitField.TurnOn(bit);
        break;
    case 2:
        cout << "Enter bit index (0-31): ";
        cin >> bit;
        bitField.TurnOff(bit);
        break;
    case 3:
        cout << "Enter bit index (0-31): ";
        cin >> bit;
        bitField.Toggle(bit);
        break;
    case 4:
        bitField.Negate();
        break;
    case 5:
        bitField.LeftShift();
        break;
    case 6:
        bitField.RightShift();
        break;
    default:
        cout << "Invalid operation, please choose a number between 1 & 7" << endl;
        continue;
    }
    bitField.DisplayBits();
}

return 0;
}
