#include "SavingsAccount.h"
#include <iostream>
#include <string>

using namespace std;

ostream &operator<<(ostream &os, const SavingsAccount &savingsAccount) {
    os << "Savings Account[ Name: " << savingsAccount.name << ", Balance: $" << savingsAccount.balance << ", Interest Rate: " << savingsAccount.interestRate << "% ]" << endl;
}

SavingsAccount::SavingsAccount(string nameVal, double balanceVal, double interestRateVal) : Account{nameVal, balanceVal}, interestRate{interestRateVal} {
    
}

bool SavingsAccount::deposit(double amount) {
    amount += ((interestRate * amount) / 100);
    Account::deposit(amount);
}