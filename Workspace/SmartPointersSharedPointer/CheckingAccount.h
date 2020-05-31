#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

class CheckingAccount : public Account
{
private:
    static constexpr const char* DEFAULT_NAME = "Unnamed Account";
    static constexpr const double DEFAULT_BALANCE {0.0};
    static constexpr const double DEFAULT_CHEQUE_FEE {10.0};
    
    double chequeFee;
    
public:
    CheckingAccount(string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE, double checkFee = DEFAULT_CHEQUE_FEE);
    
    virtual void print(ostream &os) const override;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    
    virtual ~CheckingAccount() = default;
};

#endif // CHECKINGACCOUNT_H
