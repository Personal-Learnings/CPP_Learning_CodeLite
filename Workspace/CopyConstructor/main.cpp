#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string fullName;
    
public:
    Employee(const Employee &source);
    Employee(int id = 999, string fullName = "None");
    
    int getId();
    string getFullName();
};

//Copy Constructor
/*Employee::Employee(const Employee &source) : id {source.id}, fullName {source.fullName} {
    cout << "Copy Constructor is Invoked." << endl;
}*/

//Copy Constructor using Delegation
Employee::Employee(const Employee &source) : Employee{source.id, source.fullName} {
    cout << "Copy Constructor is Invoked." << endl;
}

//Constructor Initialization List
Employee::Employee(int idVal, string fullNameVal) : id {idVal}, fullName {fullNameVal} {
    cout << "Two argument Constructor is Invoked." << endl;
}

int Employee::getId() {
    return id;
}

string Employee::getFullName() {
    return fullName;
}

void display(Employee employee);

main() {
    Employee madan;
    display(madan);
    return 0;
}

void display(Employee employee) {
    cout << "Full Name: " << employee.getFullName() << " Id: " << employee.getId() << endl << endl;
}