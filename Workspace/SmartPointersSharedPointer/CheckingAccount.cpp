#include <iostream>
#include <string>
#include "Account.h"
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount(string nameVal, double balanceVal, double chequeFeeVal) : Account{nameVal, balanceVal}, chequeFee{chequeFeeVal} {
    
}

void CheckingAccount::print(ostream &os) const {
    os << "Checking Account[ Name: " << name << ", Balance: $" << balance << " Cheque Fee: $" << chequeFee << " ]" << endl;
}

bool CheckingAccount::withdraw(double amount) {
    if(balance > 0 && balance >= (amount + chequeFee)) {
        balance = balance - amount - chequeFee;
        return true;
    }
    return false;
}

bool CheckingAccount::deposit(double amount) {
    return Account::deposit(amount);
}