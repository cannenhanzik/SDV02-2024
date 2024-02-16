#pragma once
#include "BaseAccount.h"

class CheckingAccount : public BaseAccount
{
public: 
	virtual void Withdraw(float amnount) override;
};

