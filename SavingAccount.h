#pragma once
#include "Account.h"
#include <string>


class SavingsAccount : public Account
{
private:
	double interestRate;

public:

	SavingsAccount(string accountNumber, string accountHolder, double balance, double interestRate);
    ~SavingsAccount();

    //prototypes
	void displayDetails() override;
	void withdraw(double amount) override;

	SavingsAccount& operator+(Account& other);
};