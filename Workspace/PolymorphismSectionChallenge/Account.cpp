#include "Account.h"
#include <iostream>
#include <string>

using namespace std;

void Account::print(ostream &os) const {
    os << "Account[ Name: " << name << ", Balance: $" << balance << " ]" << endl;
}
    
Account::Account(string nameVal, double balanceVal) : name {nameVal}, balance {balanceVal} {
    
}

bool Account::withdraw(double amount) {
    if(balance > 0 && balance >= amount) {
        balance -= amount;
        return true;
    }
    return false;
}

bool Account::deposit(double amount) {
    if(amount <= 0) return false;
    balance += amount;
    return true;
}

double Account::getBalance() const {
    return balance;
}