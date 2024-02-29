#include "BaseAccount.h"

BaseAccount::BaseAccount() : balance(0), withdrawals(0) {}

BaseAccount::~BaseAccount() {}

void BaseAccount::Withdraw(float amount) {
	balance -= amount;
	withdrawals++; // Add one to withdrawals
}

void BaseAccount::Deposit(float amount) { balance += amount; }

float BaseAccount::GetBalance() const { return balance; }