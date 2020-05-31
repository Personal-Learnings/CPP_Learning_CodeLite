#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
    
    cout << "Using Pointers: " << endl;
    Account *savingsAccountPtr = new SavingsAccount("Madan");
    savingsAccountPtr->deposit(1000);
    savingsAccountPtr->withdraw(100);
    cout << *savingsAccountPtr;
    
    Account *checkingAccountPtr = new CheckingAccount("Jayashree");
    checkingAccountPtr->deposit(1000);
    checkingAccountPtr->withdraw(100);
    cout << *checkingAccountPtr;

    delete savingsAccountPtr;
    delete checkingAccountPtr;
    
    cout << endl << "Using Base Class Reference: " << endl;
    SavingsAccount savingsAccount;
    Account &savingsAccountRef = savingsAccount;
    savingsAccountRef.deposit(1000);
    savingsAccountRef.withdraw(100);
    cout << savingsAccountRef;
    
    CheckingAccount checkingAccount;
    Account &checkingAccountRef = checkingAccount;
    checkingAccountRef.deposit(1000);
    checkingAccountRef.withdraw(100);
    cout << checkingAccountRef << endl;
    
    return 0;
}