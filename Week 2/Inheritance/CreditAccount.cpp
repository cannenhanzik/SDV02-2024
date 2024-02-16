#include "CreditAccount.h"

CreditAccount::CreditAccount() : BaseAccount(), amountSpent(0) {}

void CreditAccount::Withdraw(float amount) {
	if ((amountSpent + amount) > spendingLimit) {
		cout << "Spending limit exceed. Charging $5,000 fee." << endl;
		balance -= 5000;
	}
	else {
		amountSpent += static_cast<int>(amount);
		BaseAccount::Withdraw(amount);
	}
}