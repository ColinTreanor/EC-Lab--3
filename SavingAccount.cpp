#include "SavingAccount.h"
#include <iostream>

SavingsAccount::SavingsAccount(std::string accNum, std::string accHolder, double bal, double rate)
	: Account(accNum, accHolder, bal), interestRate(rate) {}

SavingsAccount::~SavingsAccount() {}

//print account details
void SavingsAccount::displayDetails() {
	Account::displayDetails();
	std::cout << "  Interest Rate: " << this->interestRate*100 << "%" << std::endl;
}

//overloaded withdraw
void SavingsAccount::withdraw(double amount) {
	if (amount <= balance) {
		balance -= amount;
	}
	else {
		cout << "Insufficient balance.\n";
	}
}

SavingsAccount& SavingsAccount::operator+(Account& other) {
	this->deposit(other.balance);
	other.withdraw(other.balance);
	return *this;
}