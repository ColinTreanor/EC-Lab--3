#include "CurrentAccount.h"
#include <iostream>

CurrentAccount::CurrentAccount(std::string accNum, std::string accHolder, double bal, double limit)
	: Account(accNum, accHolder, bal), overdraftLim(limit) {}

CurrentAccount::~CurrentAccount() {}

//print account details 
void CurrentAccount::displayDetails() {
	Account::displayDetails();
	std::cout << "  Overdraft Limit: $" << this->overdraftLim << std::endl;
}

//overloaded withdraw
void CurrentAccount::withdraw(double amount) {
	if (amount <= balance + overdraftLim) {
		balance -= amount;
	}
	else {
		cout << "Exceeds overdraft limit \n";
	}
}
//overload +
CurrentAccount& CurrentAccount::operator+(Account& other) {
	this->deposit(other.balance);
	other.withdraw(other.balance);
	return *this;
}