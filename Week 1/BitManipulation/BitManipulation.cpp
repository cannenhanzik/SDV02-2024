#include <iostream>
#include "BitField.h"


int main()
{
unsigned int initialValue;
cout << "Enter an initial value for the BitField: ";
cin >> initialValue;

BitField bitField(initialValue);

while (true) {
    cout << "Current Value: " << bitField.GetValue() << endl;
    cout << "Binary Representation: ";
    bitField.DisplayBinary();

    int choice;
    cout << "Menu:" << endl;
    cout << "1. Turn On a Bit" << endl;
    cout << "2. Turn Off a Bit" << endl;
    cout << "3. Toggle a Bit" << endl;
    cout << "4. Negate All Bits" << endl;
    cout << "5. Left Shift" << endl;
    cout << "6. Right Shift" << endl;
    cout << "7. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    int bit;
    cout << "Choose bit value: ";
    cin >> bit;

    switch (choice) {
    case 1:
        bitField.TurnOn(bit);
        break;
    case 2:
        bitField.TurnOff(bit);
        break;
    case 3:
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
    case 7:
        return 0; // Exit the program
    default:
        cout << "Invalid choice. Please try again." << endl;
    }
}

return 0;
}
