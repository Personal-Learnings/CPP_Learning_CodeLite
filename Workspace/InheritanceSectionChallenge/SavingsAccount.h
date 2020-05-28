#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

class SavingsAccount : public Account
{
    friend ostream &operator<<(ostream &os, const SavingsAccount &savingsAccount);
    
private:
    static constexpr const char* DEFAULT_NAME = "Unnamed Account";
    static constexpr const double DEFAULT_BALANCE {0.0};
    static constexpr const double DEFAULT_INTEREST_RATE {0.0};

    double interestRate;
    
public:
    SavingsAccount(string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, double interestRate = DEFAULT_INTEREST_RATE);
    bool deposit(double amount);
};

#endif // SAVINGSACCOUNT_H
