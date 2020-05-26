#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee() {
    cout << "Employee Object Default Constructor." << endl;
}

Employee::Employee(string nameVal, int ageVal) {
    name = nameVal;
    age = ageVal;
    cout << "Employee Object Two Argument Constructor." << endl;
}

Employee::~Employee() {
    cout << "Invoking Destructor" << endl;
}

void Employee::setName(string nameVal) {
    name = nameVal;
}

void Employee::setAge(int ageVal) {
    age = ageVal;
}

string Employee::getName() {
    return name;
}

int Employee::getAge() {
    return age;
}