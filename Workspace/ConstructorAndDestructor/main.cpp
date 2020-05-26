#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    
    Employee madan;
    madan.setAge(32);
    madan.setName("Madanraj Venkatesan");    
    cout << "Employee Name: " << madan.getName() << endl << endl;
    
    Employee *jayashree = new Employee;
    jayashree->setAge(30);
    jayashree->setName("Jayashree Thirunavukarasu");
    cout << "Employee Name: " << jayashree->getName() << endl << endl;

    cout << "Manually Deleting Pointer Reference" << endl;
    delete jayashree;
    cout << "Employee Pointer Deleted" << endl << endl;
    return 0;
}