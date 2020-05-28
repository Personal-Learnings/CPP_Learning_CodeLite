#include <iostream>
#include <string>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    
    Account account {"Madan"};
    account.deposit(1000);
    account.withdraw(100);
    cout << account;
    
    SavingsAccount savingsAccount {"Jayashree", 0, 10};
    savingsAccount.deposit(1000);
    savingsAccount.withdraw(100);
    cout << savingsAccount;
    
    return 0;
}