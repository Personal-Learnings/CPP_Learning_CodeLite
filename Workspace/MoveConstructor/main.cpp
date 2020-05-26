#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
private:
    int *id;
    
public:
    Employee(Employee &&source) noexcept;
    Employee(const Employee &source);
    Employee(int id);
    ~Employee();
    
    int getId();
};

//Move Constructor
Employee::Employee(Employee &&source) noexcept : id{source.id} {
    cout << "Move Constructor is Invoked for Id Value : " << *source.id << endl;
    source.id = nullptr;
}

//Copy Constructor - Performing Deep Copy
//This will be never called when we are copying using R Value
Employee::Employee(const Employee &source) : Employee{*source.id} {
    cout << "Copy Constructor Invoked for Id Value    : " << *id << endl;
}

//Constructor Initialization List
Employee::Employee(int idVal) {
    id = new int;
    *id = idVal;
    cout << "One Arg Constructor Invoked for Id Value : " << *id << endl;
}

Employee::~Employee() {
    int output = (id != nullptr) ? *id : 0;
    cout << "Destructor Invoked for Id Value          : " << output << endl << endl;
    delete id;
}

int Employee::getId() {
    return *id;
}

void display(Employee employee);

main() {
    Employee madan {206161};
    cout << "Before Display Method ID                 : " << madan.getId() << endl;
    
    //Here the copy constructor is invoked and it creates its own copy each time when it is invoked
    display(madan);
    //The Desctructor deletes the copy created by display method.
    
    cout << "\nStarting Example for Move Constructor" << endl;
    vector<Employee> vector;
    
    //Here the Move Constructor is invoked as we are trying to copy the R Value instead of L Value
    //Here move is invoked multiple times because the vector will dynamically increase the size like array list in java
    cout << "Adding Value 10 to Vector" << endl;
    vector.push_back(Employee{10});
    
    cout << "Adding Value 20 to Vector" << endl;
    vector.push_back(Employee{20});
    
    cout << "Adding Value 30 to Vector" << endl;
    vector.push_back(Employee{30});
    return 0;
}

void display(Employee employee) {
    cout << "Display Method: ID                       : " << employee.getId() << endl;
}