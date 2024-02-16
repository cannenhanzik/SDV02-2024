#include "CheckingAccount.h"

void CheckingAccount::Withdraw(float amount) {
	if (withdrawals > 10) {
		amount += 5; // $5 fee
	}
	BaseAccount::Withdraw(amount);
}