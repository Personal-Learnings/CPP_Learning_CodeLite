#include <iostream>
#include <memory>

using namespace std;

class ExecutiveEmployee;

class Employee {
    shared_ptr<ExecutiveEmployee> executiveEmployee;
    
public:
    void setExecutiveEmployee(shared_ptr<ExecutiveEmployee> &executiveEmployeeRef) {
        executiveEmployee = executiveEmployeeRef;
    }
    
    Employee() { cout << "Invoked Constructor of Employee Class." << endl; }
    ~Employee() { cout << "Invoked Destructor of Employee Class." << endl; }
};

class ExecutiveEmployee {
    //Unless we make this as weak pointer the destructor will not be invoked due to circular reference, and c++ still assumes there is a reference used
    weak_ptr<Employee> employee;

public:    
    void setEmployee(shared_ptr<Employee> &employeeRef) {
        employee = employeeRef;
    }
    
    ExecutiveEmployee() { cout << "Invoked Constructor of ExecutiveEmployee Class." << endl; }
    ~ExecutiveEmployee() { cout << "Invoked Destructor of ExecutiveEmployee Class." << endl; }
};

int main() {
    
    shared_ptr<Employee> employeeSharedPtr = make_shared<Employee>();
    shared_ptr<ExecutiveEmployee> executiveEmployeeSharedPtr = make_shared<ExecutiveEmployee>();
    
    employeeSharedPtr->setExecutiveEmployee(executiveEmployeeSharedPtr);
    executiveEmployeeSharedPtr->setEmployee(employeeSharedPtr);
    
    return 0;
}