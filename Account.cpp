#include "Account.h"
#include <iostream>

Account::Account(std::string accNum, std::string accHolder, double bal)
	: accountNumber(accNum), accountHolder(accHolder), balance(bal) {}

Account::~Account() {}

//print account details
void Account::displayDetails() {
	cout<< "Account Number: " << accountNumber <<endl;
    cout<< "Account Holder: " << accountHolder <<endl;
    cout<< "Account Balance: $" << balance << endl;
}

//deposit money
void Account::deposit(double amount){
    balance += amount;
}

//withdraw money
void Account::withdraw(double amount){
    balance -= amount;
} 
 
ostream &operator<<(ostream &os, Account &account) {
	account.displayDetails();
	return os;
}    