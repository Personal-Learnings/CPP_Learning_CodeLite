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

//Copy Constructor - We are doing a shallow copy here
Employee::Employee(const Employee &source) : id {source.id} {
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
    
    //After invoking this method copy constructor is invoked
    display(madan);
    //After this method destructor is invoked and the object is cleaned up so the object will be pointing to garbage
    //when we try to access that object the program crashes
    
    cout << "After Display Method ID  : " << madan.getId() << endl << endl;
    
    //The Program will crash as we were trying to access invalid memory
    return 0;
}

void display(Employee employee) {
    cout << "Display Method: ID       : " << employee.getId() << endl;
}