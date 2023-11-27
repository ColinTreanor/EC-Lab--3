#pragma once
#include "Account.h"
#include <string>


class CurrentAccount : public Account
{
private:
	double overdraftLim;

public:
	CurrentAccount(string accountNumber, string accountHolder, double balance, double overdraftLim);
    ~CurrentAccount();
    
    //prototypes
	void displayDetails() override;
	void withdraw(double amount) override;
	CurrentAccount& operator+(Account& other);
};
