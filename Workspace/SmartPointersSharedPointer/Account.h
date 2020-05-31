#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
#include "IPrintable.h"

using namespace std;

class Account : public IPrintable
{    
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Account";
    static constexpr const double DEFAULT_BALANCE = 0.0;

protected:
    string name;
    double balance;
    
public:
    Account(string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE);
    
    virtual void print(ostream &os) const override;
    virtual bool withdraw(double amount) = 0;
    virtual bool deposit(double amount) = 0;
    double getBalance() const;
    
    virtual ~Account() = default;
};

#endif // ACCOUNT_H