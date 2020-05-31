#include <iostream>
#include <memory>
#include <vector>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

using namespace std;

int main() {
    //Smart - Unique Pointer with Primitive Type
    unique_ptr<int> amount = make_unique<int>(100);
    cout << "Amount: " << *amount << endl;
    
    //Smart - Unique Pointer with User Defined Object Type
    unique_ptr<Account> checkingAccount = make_unique<CheckingAccount>("Madanraj Venkatesan", 0, 20);
    checkingAccount->deposit(15000);
    checkingAccount->withdraw(200);
    cout << *checkingAccount;
    
    //Smart - Unique Pointer with User Defined Object Type
    unique_ptr<Account> savingsAccount = make_unique<SavingsAccount>("Madanraj Venkatesan");
    savingsAccount->deposit(20000);
    savingsAccount->withdraw(100);
    cout << *savingsAccount;
    
        
    cout << endl << "Smart - Move Unique Pointers-----------------" << endl;
    checkingAccount = move(savingsAccount);
    if(savingsAccount == nullptr) cout << "Savings Account is pointing to null" << endl;
    cout << "After Moving, Checking Account is Pointing to: " << *checkingAccount << endl;
    
    cout << "Resetting Pointer" << endl;
    checkingAccount.reset();
    cout << "After Resetting Checking Account, is checking account pointing to null ? " << boolalpha << (checkingAccount == nullptr) << endl;
    
    cout << "Smart - Unique Pointers with Vector-----------------" << endl;
    vector<unique_ptr<Account>> accountList;
    accountList.push_back(make_unique<CheckingAccount>("Yashika"));
    accountList.push_back(make_unique<SavingsAccount>("Mirthik"));
    
    //The below statement wont work because account object cannot be copied as it is a unique pointer, so we have to use reference
    //for(auto account : accountList)
    for(auto &account : accountList)
        cout << *account;
    
    cout << endl;
    return 0;
}