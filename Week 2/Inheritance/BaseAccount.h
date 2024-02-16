#pragma once
#include <iostream>

using namespace std;

class BaseAccount
{
protected:
	float balance;
	int withdrawals;

public:
	BaseAccount();
	virtual ~BaseAccount();

	virtual void Withdraw(float amount);
	virtual void Deposit(float amount);
	float GetBalance() const;
};

