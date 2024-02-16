#include "CarManagement.h"
using namespace CarManagement;

void displayColors() {
    cout << "Color Choices:\n";
    cout << "0: Red\n1: Blue\n2: Green\n3: Black\n4: Purple\n5:White\n";
}
int main()
{
    const int size = 3;
    Car cars[size]{};

    InputCarData(cars, size);

    /*cout << "\nCar Information:\n";
    for (int i = 0; i < size; i++) {
        DisplayCar(cars[i]);
    }*/

    cout << "\nPrinting Cars...\n";
    for (int i = 0; i < size; i++) { printCar(cars[i]); }

    cout << "\nPrint Car Pointers...\n";
    for (int i = 0; i < size; i++) { printCarPointer(&cars[i]); }

    int carIndex, colorChoice, milesToAdd;
    cout << "\nEnter the index of the car you wish to repaint (0 to " << (size - 1) << "): ";
    cin >> carIndex;
    if (carIndex < 0 || carIndex > size) {
        cout << "Invalid car index.\n";
        return -1;
    }

    displayColors();
    cout << "Enter the new color choice: ";
    cin >> colorChoice;
    if (colorChoice < 0 || colorChoice > 5) {
        cout << "Invalid color choice.\n";
        return 1; // Exit if invalid color choice
    }

    repaintCar(&cars[carIndex], static_cast<EnumColorDefinition>(colorChoice));

    cout << "Enter the amount of mileage to add: ";
    cin >> milesToAdd;
    addMileage(&cars[carIndex], milesToAdd);

    cout << "\nPrint cars after repainting...\n";
    for (int i = 0; i < size; i++) { printCar(cars[i]); }

    return 0;
}

