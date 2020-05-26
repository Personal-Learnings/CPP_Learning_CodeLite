#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    
    Employee *jayashree = new Employee;
    cout << "Name: " << jayashree->getName() << endl;
    cout << "Age: " << jayashree->getAge() << endl << endl;
    
    Employee *madan = new Employee{"Madanraj Venkatesan", 32};
    cout << "Name: " << madan->getName() << endl;
    cout << "Age: " << madan->getAge() << endl << endl;
    
    delete jayashree;
    delete madan;
    
    return 0;
}