#ifndef EMP
#define EMP

#include <string>

class Employee
{
private:
    std::string name;
    int age;
    
public:
    void setName(std::string name1);
    std::string getName();
    
    void setAge(int age1);
    int getAge();
};

#endif