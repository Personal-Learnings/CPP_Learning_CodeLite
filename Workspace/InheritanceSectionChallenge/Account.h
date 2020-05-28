#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);
    
private:
    static constexpr const char *DEFAULT_NAME = "Unnamed Account";
    static constexpr const double DEFAULT_BALANCE = 0.0;

protected:
    string name;
    double balance;
    
public:
    Account(string name = DEFAULT_NAME, double balance = DEFAULT_BALANCE);
    
    bool withdraw(double amount);
    bool deposit(double amount);
    double getBalance() const;
};

#endif // ACCOUNT_H
