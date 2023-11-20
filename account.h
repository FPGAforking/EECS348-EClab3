#pragma once
#include <iostream>
#include <string>

using namespace std;

//#ifndef ACCOUNT_H
//#define ACCOUNT_H

class Account{
    public:
        string accountNumber;
        string accountHolder;
        float balance;
        Account(string a, string b, float c){
            accountNumber = a;
            accountHolder = b;
            balance = c;
        }
        ~Account(){};
    virtual void displayDetails();
    virtual void deposit(float amount);
    virtual void withdraw(float amount);
    
};

void Account::displayDetails(){
    cout << "pure virtual" << endl;
}

void Account::deposit(float amount){
    balance += amount;
}

void Account::withdraw(float amount){
    if(balance > amount) balance -= amount;
}

//#endif