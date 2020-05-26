#include <string>
#include "Employee.h"

int Employee::getAge() {
    return age;
}

void Employee::setAge(int age1) {
    age = age1;
}

std::string Employee::getName() {
    return name;
}

void Employee::setName(std::string name1) {
    name = name1;
}