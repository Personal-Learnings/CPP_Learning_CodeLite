#ifndef EMP
#define EMP

#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int age;
    
public:
    Employee(string name = "None", int age = 9999);
    ~Employee();
    
    void setName(string nameVal);    
    void setAge(int ageVal);
    string getName();    
    int getAge();
};

#endif