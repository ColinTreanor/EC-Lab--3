#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
    public: 
        string accountNumber;
        string accountHolder;
        double balance;

        Account(string accountNumber,string accountHolder,double balance);
        ~Account();

        //prototypes
        virtual void displayDetails();
        void deposit(double amount);
        virtual void withdraw(double amount);

        Account &operator<<(Account& account);  

        friend ostream& operator<<(ostream &os, Account &account); 
};