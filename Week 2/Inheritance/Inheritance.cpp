// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

static void Deposit(BaseAccount* account, float amount) {
    account->Deposit(amount);
    cout << "$" << amount << " deposited to your account. New balance: $" << account->GetBalance() << endl;
}

static void Withdraw(BaseAccount* account, float amount) {
    account->Withdraw(amount);
    cout << "$" << amount << " withdrawn from account. New Balance: $" << account->GetBalance() << endl;
}

int main()
{
    // Memory leak detection
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    _CrtSetBreakAlloc(-1); // block of mem to find leak
    _CrtDumpMemoryLeaks();

    BaseAccount* checking = new CheckingAccount();
    BaseAccount* savings = new SavingsAccount();
    BaseAccount* credit = new CreditAccount();

    int choice;
    float amount;
    bool running = true;

    while (running) {
        cout << "\nBank Account Menu:\n";
        cout << "1. Deposit to Checking Account\n";
        cout << "2. Withdraw from Checking Account\n";
        cout << "3. Deposit to Savings Account\n";
        cout << "4. Withdraw from Savings Account\n";
        cout << "5. Deposit to Credit Account\n";
        cout << "6. Withdraw from Credit Account\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Deposit to Checking
            cout << "Enter amount to deposit: $";
            cin >> amount;
            Deposit(checking, amount);
            break;
        case 2: // Withdraw from Checking
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            Withdraw(checking, amount);
            break;
        case 3: // Deposit to Savings
            cout << "Enter amount to deposit: $";
            cin >> amount;
            Deposit(savings, amount);
            break;
        case 4: // Withdraw from Savings
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            Withdraw(savings, amount);
            break;
        case 5: // Deposit to Credit
            cout << "Enter amount to deposit: $";
            cin >> amount;
            Deposit(credit, amount);
            break;
        case 6: // Withdraw from Credit
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            Withdraw(credit, amount);
            break;
        case 7: // Exit
            running = false;
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }

    // Cleanup
    delete checking;
    delete savings;
    delete credit;

    cout << "Exiting bank." << endl;
    return 0;
}

