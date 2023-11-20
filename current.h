#include "account.h"
#include <iostream>
#include <string>
#include <iomanip>

class Current: public Account{
    public:
        float overdraftLimit;
        Current(string a, string b, float c, float d) : Account(a,b,c){
            overdraftLimit = d;
        }
    void displayDetails(const Current& cur);
    friend ostream& operator<<(ostream& os, const Current& cur);  
    ~Current(){};
};


ostream& operator<<(ostream& os, const Current& cur){
    os << "Account Details for Current Account (ID:" << cur.accountNumber << ")" << "\nHolder: " << cur.accountHolder << "\nBalance: $" << fixed << setprecision(2) << cur.balance << "\nOverdraft Limit: $" << fixed << setprecision(2) <<  cur.overdraftLimit <<"\n\n";
    return os;
}

void Current::displayDetails(const Current& cur){
    cout << cur;
}