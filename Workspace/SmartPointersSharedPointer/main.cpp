#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {

    cout << endl << "------------ Shared Pointer Object Initialization ---------------" << endl;
    shared_ptr<Account> savingsAccount = make_shared<SavingsAccount>("Madanraj Venkatesan");
    savingsAccount->deposit(2000);
    savingsAccount->withdraw(200);
    cout << *savingsAccount;
    
    shared_ptr<Account> checkingAccount = make_shared<CheckingAccount>("Jayashree Thirunavukarsu");
    checkingAccount->deposit(3000);
    checkingAccount->withdraw(200);
    cout << *checkingAccount << endl;
    
    cout << "Savings Acount Shared Pointer References: " << savingsAccount.use_count() << endl;
    cout << "Checking Account Shared Pointer References: " << checkingAccount.use_count() << endl;
    
    cout << "------------------------------------------------------------------" << endl << endl;
    
    
    cout << "--------------------------- Vector -------------------------------" << endl;
    //We can directly push back as the shared pointer allows Copy, Move and Assignment
    vector<shared_ptr<Account>> accountList;
    accountList.push_back(savingsAccount);
    accountList.push_back(checkingAccount);
    
    //We can use account directly here instead of reference because copy is allowed
    for(auto account : accountList)
        cout << *account;
        
    cout << endl << "Savings Acount Shared Pointer References: " << savingsAccount.use_count() << endl;
    cout << "Checking Account Shared Pointer References: " << checkingAccount.use_count() << endl;
    
    cout << "-----------------------------------------------------------------" << endl << endl;
    
    
    cout << "------------------- Shared Pointer Assignment -------------------" << endl;
    shared_ptr<Account> newSavingsAccount = savingsAccount;
    shared_ptr<Account> newCheckingAccount = checkingAccount;
        
    cout << endl << "Savings Acount Shared Pointer References: " << savingsAccount.use_count() << endl;
    cout << "Checking Account Shared Pointer References: " << checkingAccount.use_count() << endl;
    
    cout << endl << "New Savings Acount Shared Pointer References: " << newSavingsAccount.use_count() << endl;
    cout << "New Checking Account Shared Pointer References: " << newCheckingAccount.use_count() << endl;
    
    cout << "-----------------------------------------------------------------" << endl << endl;
    
    
    cout << "------------------- Shared Pointer Reset ------------------------" << endl;
    savingsAccount.reset();
    checkingAccount.reset();
        
    cout << endl << "Savings Acount Shared Pointer References: " << savingsAccount.use_count() << endl;
    cout << "Checking Account Shared Pointer References: " << checkingAccount.use_count() << endl;
    
    cout << endl << "New Savings Acount Shared Pointer References: " << newSavingsAccount.use_count() << endl;
    cout << "New Checking Account Shared Pointer References: " << newCheckingAccount.use_count() << endl;
    
    cout << "-----------------------------------------------------------------" << endl;
    
    cout << endl;
    return 0;
}