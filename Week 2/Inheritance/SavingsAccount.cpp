#include "SavingsAccount.h"

void SavingsAccount::Withdraw(float amount) {
	if (withdrawals <= 3) {
		BaseAccount::Withdraw(amount);
	}
	else {
		cout << "Your withdrawal limit has been exceeded." << endl;
	}
}