#include "account.h"
#include <string>
#include <iostream>
#include <iomanip>

class Savings: public Account{
    public:
        float interestRate;
        Savings(string a, string b, float c, float d) : Account(a,b,c){
            interestRate = d;
        }
    void withdraw(float amount, float minimum);
    void displayDetails(const Savings& sav);
    friend ostream& operator<<(ostream& os, const Savings& sav);
    ~Savings() {};
};

ostream& operator<<(ostream& os, const Savings& sav){
    os << "Account Details for Savings Account (ID:" << sav.accountNumber << ")" << "\nHolder: " << sav.accountHolder << "\nBalance: $" << fixed << setprecision(2) << sav.balance << "\nInterest Rate: " << fixed << setprecision(2) << 100*sav.interestRate <<"%\n\n";
    return os;
}

void Savings::displayDetails(const Savings& sav){
    cout << sav;
}

void Savings::withdraw(float amount, float minimum){
    if ((amount > minimum) && (amount < balance)) balance -= amount;
}
