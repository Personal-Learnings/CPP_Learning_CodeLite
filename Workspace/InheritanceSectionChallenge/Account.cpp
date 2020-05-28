#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

ostream &operator<<(ostream &os, const Account &account) {
    os << "Account[ Name: " << account.name << ", Balance: $" << account.balance << " ]" << endl;
}
    
Account::Account(string nameVal, double balanceVal) : name {nameVal}, balance {balanceVal} {
    
}

bool Account::withdraw(double amount) {
    if(balance <= 0) return false;
    balance -= amount;
    return true;
}

bool Account::deposit(double amount) {
    if(amount <= 0) return false;
    balance += amount;
    return true;
}

double Account::getBalance() const {
    return balance;
}