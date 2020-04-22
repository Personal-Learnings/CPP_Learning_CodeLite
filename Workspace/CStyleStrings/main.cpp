#include <iostream>
#include <cstring>

using namespace std;

int main() {
    
    char firstName [10];
    char fullName [20];
    char newFullName [20];
    char address [50];
    char lastName[11];
    char initialName[] {"Jayashree Madanraj"};
        
    cout << "Enter Address: ";
    cin.getline (address, 50);
    
    cout << "Enter First Name: ";
    cin >> firstName;
    
    cout << "Enter Last Name: ";
    cin >> lastName;
    
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    strcpy(newFullName, fullName);
    
    cout << endl << "============================================================================" << endl;
    cout << "Full Name                   : " << fullName << endl;
    cout << "Copied Full Name            : " << newFullName << endl;
    cout << "Is these two names are same : " << strcmp(fullName, newFullName) << endl;
    cout << "Address                     : " << address << endl << "No Of Characters: " << strlen(firstName) << endl;
    cout << "Initial Name: " << initialName << endl;

    return 0;
}