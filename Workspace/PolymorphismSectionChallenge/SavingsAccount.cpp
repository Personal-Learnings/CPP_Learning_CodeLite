#include <iostream>
#include <string>
#include "Account.h"
#include "SavingsAccount.h"

using namespace std;

SavingsAccount::SavingsAccount(string nameVal, double balanceVal, double interestRateVal) : Account{nameVal, balanceVal}, interestRate{interestRateVal} {
    
}

void SavingsAccount::print(ostream &os) const {
    os << "Savings Account[ Name: " << name << ", Balance: $" << balance << ", Interest Rate: " << interestRate << "% ]" << endl;
}

bool SavingsAccount::deposit(double amount) {
    amount += ((interestRate * amount) / 100);
    return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount) {
    return Account::withdraw(amount);
}