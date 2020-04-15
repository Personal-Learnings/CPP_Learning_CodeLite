#include <iostream>

using namespace std;

int main() {
    
    int noOfCents;
    cout << "Enter a amount in cents: ";
    cin >> noOfCents;
    
    const short CENTS_FOR_DOLLAR = 100, CENTS_FOR_QUARTER = 25, CENTS_FOR_DIME = 10, CENTS_FOR_NICKEL = 5;
    int dollars = {}, quarters = {}, dimes = {}, nickels = {}, pennies = {}, balance = {};
    
    dollars = noOfCents / CENTS_FOR_DOLLAR;
    balance = noOfCents % CENTS_FOR_DOLLAR;
    
    quarters = balance / CENTS_FOR_QUARTER;
    balance = balance % CENTS_FOR_QUARTER;
    
    dimes = balance / CENTS_FOR_DIME;
    balance = balance % CENTS_FOR_DIME;
    
    nickels = balance / CENTS_FOR_NICKEL;
    balance = balance % CENTS_FOR_NICKEL;
    
    pennies = balance;
    
    cout << "Dollars  : " << dollars << endl << "Quarters : " << quarters << endl << "Dimes    : " << dimes << endl;
    cout << "Nickels  : " << nickels << endl << "Pennies  : " << pennies << endl;
    return 0;
}