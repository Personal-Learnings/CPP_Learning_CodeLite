#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

//Constructor Initialization List and delegating Constructor
Employee::Employee() : Employee("None", 9999) {
    cout << "Employee Object No argument Constructor Invoked." << endl;
}

//Constructor Initialization List
Employee::Employee(string nameVal, int ageVal) : name {nameVal}, age {ageVal} {
    cout << "Employee Object Two Argument Constructor Invoked." << endl;
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