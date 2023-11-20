#include "savings.h"
#include "current.h"
#include <stdlib.h>
using namespace std;


Current operator+(Current& a1, Savings& a2){
    a2.withdraw(300, 0);
    a1.deposit(300);
    return a1;
}

int main(){
    Savings savings("S123", "John Doe", 1000, 0.02);

    Current current("C456","Jane Doe",2000, 500);

   
    savings.displayDetails(savings);
    current.displayDetails(current);

    
    savings.deposit(500);
    current.withdraw(1000);

    cout << "Account Details after deposit and withdrawal: " << endl;
    savings.displayDetails(savings);
    current.displayDetails(current);

    current = current + savings;

    cout << "Account Details after transfer:" << endl;
    savings.displayDetails(savings);
    current.displayDetails(current);
}