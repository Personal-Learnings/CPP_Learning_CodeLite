#include <iostream>
#include <string>
#include <vector>

using namespace std;

string addPrefixByValue(string fullName);
void addSuffixByReference(string &fullName);

double getTaxByValue(double price, double taxPercentage);
void updateTaxByReference(double &price, double &taxPercentage);

void printArray(string names[], size_t size);
void modifyArrayByReference(string names[], size_t size);

int main() {    
    
    cout << "string Type: " << endl << "=============================================" << endl;
    
    string fullName {"Madanraj Venkatesan"};
    fullName = addPrefixByValue(fullName);
    cout << "Updated By Pass-By-Value: " << fullName << endl;
    
    addSuffixByReference(fullName);
    cout << "Updated By Pass-By-Reference: " << fullName << endl << endl;
    
    
    cout << "double Type: " << endl << "=============================================" << endl;
    
    double price {80};
    double tax {10};
    price = getTaxByValue(price, tax);
    cout << "Updated By Pass-By-Value: " << price << endl;
    
    price = 80;
    updateTaxByReference(price, tax);
    cout << "Updated By Pass-By-Reference: " << price << endl << endl;
    

    cout << "array Type: " << endl << "=============================================" << endl;
    
    string names[] {"Madanraj", "Saranraj", "Venkatesan"};
    cout << "Before Modifying the Array: ";
    printArray(names, 3);
    cout << endl;
    
    modifyArrayByReference(names, 3);
    
    cout << "After Modifying the Array: ";
    printArray(names, 3);
    cout << endl;
    
    cout << endl;
    return 0;
}

string addPrefixByValue(string fullName) {
    return "Mr. " + fullName;
}

void addSuffixByReference(string &fullName) {
    fullName += " B.Sc. M.B.A.";
}

double getTaxByValue(double price, double taxPercentage) {
    return price + (price * (taxPercentage / 100));
}

void updateTaxByReference(double &price, double &taxPercentage) {
    price = price + (price * (taxPercentage / 100));
}

void printArray(string names[], size_t size) {
    for(size_t i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
}

void modifyArrayByReference(string names[], size_t size) {
    for(size_t i = 0; i < size; i++) {
        names[i] = "Mr. " + names[i];
    }
}