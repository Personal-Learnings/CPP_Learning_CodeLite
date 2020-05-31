#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

class SavingsAccount : public Account
{
private:
    static constexpr const char* DEFAULT_NAME = "Unnamed Account";
    static constexpr const double DEFAULT_BALANCE {0.0};
    static constexpr const double DEFAULT_INTEREST_RATE {10.0};

    double interestRate;
    
public:
    SavingsAccount(string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, double interestRate = DEFAULT_INTEREST_RATE);
    
    virtual void print(ostream &os) const override;
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    
    virtual ~SavingsAccount() = default;
};

#endif // SAVINGSACCOUNT_H
