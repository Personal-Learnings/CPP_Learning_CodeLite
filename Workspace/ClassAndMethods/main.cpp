#include <iostream>
#include "Employee.h"

int main() {
    
    Employee employee;
    employee.setAge(32);
    employee.setName("Madanraj Venkatesan");    
    std::cout << "Name: " << employee.getName() << " Age: " << employee.getAge() << std::endl;
    
    Employee *yash = new Employee;
    yash->setAge(6);
    yash->setName("Yashika Madanraj Jayashree");
    std::cout << "Name: " << yash->getName() << " Age: " << yash->getAge() << std::endl;
    
    delete yash;
    return 0;
}