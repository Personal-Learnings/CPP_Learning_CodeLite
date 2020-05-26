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
    Employee();
    Employee(string name, int age);
    ~Employee();
    
    void setName(string nameVal);    
    void setAge(int ageVal);
    string getName();    
    int getAge();
};

#endif