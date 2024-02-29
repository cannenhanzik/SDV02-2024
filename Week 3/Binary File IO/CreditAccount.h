#pragma once
#include "BaseAccount.h"

class CreditAccount : public BaseAccount
{
private:
	int amountSpent;
	const int spendingLimit = 40;

public:
	CreditAccount();
	virtual void Withdraw(float amount) override;
};

