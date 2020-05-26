#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int *id;
    
public:
    Employee(const Employee &source);
    Employee(int id);
    ~Employee();
    
    int getId();
};

//Copy Constructor - Performing Deep Copy
Employee::Employee(const Employee &source) : Employee{*source.id} {
    cout << "Copy Constructor Invoked. Object copied and the address is: " << id << endl;
}

Employee::~Employee() {
    cout << "Destructor Invoked. Object deleted and the address is: " << id << endl;
    delete id;
}

//Constructor Initialization List
Employee::Employee(int idVal) {
    id = new int;
    *id = idVal;
    cout << "One Arg Constructor Invoked. Object created and the address is: " << id << endl;
}

int Employee::getId() {
    return *id;
}

void display(Employee employee);

main() {
    Employee madan {206161};
    cout << "Before Display Method ID : " << madan.getId() << endl;
    
    //Here the copy constructor is invoked and it creates its own copy each time when it is invoked
    display(madan);
    //The Desctructor deletes the copy created by display method.
    
    cout << "After Display Method ID  : " << madan.getId() << endl << endl;
    
    //The program will not crash here because we are performing a deep copy
    return 0;
}

void display(Employee employee) {
    cout << "Display Method: ID       : " << employee.getId() << endl;
}