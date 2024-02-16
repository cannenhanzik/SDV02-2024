#pragma once
#include "BaseAccount.h"

class SavingsAccount : public BaseAccount
{
public:
	virtual void Withdraw(float amount) override;
};

