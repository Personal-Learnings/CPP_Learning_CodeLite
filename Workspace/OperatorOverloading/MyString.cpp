#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

MyString::MyString() : str{nullptr} {
     str = new char[1];
     *str = '\0';
}

MyString::MyString(const MyString &source) : str{nullptr} {
    cout << "Copy Constructor is Invoked for String: " << source.str << endl;
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

MyString::MyString(const char *strVal) {
    cout << "One Argument Constructor is invoked for String: " << strVal << endl;
    if(strVal == nullptr) {
        this->str = new char[1];
        *(this->str) = '\0';
    } else {
        this->str = new char[strlen(strVal) + 1];
        strcpy(this->str, strVal);
    }
};

//Overload Assignment Operator, using Copy Assignment
MyString &MyString::operator=(const MyString &rhs) {
    cout << "= Operator Overloading method :: Copy Assignment is invoked" << endl;
    
    if(this == &rhs)
        return *this;
    
    //Deallocating the space for the lhs as we will be overriding this value with the rhs value
    delete [] this->str;
    
    this->str = new char[strlen(rhs.str) + 1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move Constructor
MyString::MyString(MyString &&source) noexcept : str{source.str} {
    cout << "Move Constructor is invoked for String: " << source.str << endl;
    source.str = nullptr;
}

//Overload Assignment Operator, using Move Assignment
MyString &MyString::operator=(MyString &&rhs) {
    cout << "= Operator Overloading method :: Move Assignment is invoked" << endl;
    
    if(this == &rhs)
        return *this;
        
    //Deallocating the space for the lhs as we will be overriding this value with the rhs value
    delete [] this->str;
    
    this->str = rhs.str;
    rhs.str = nullptr;
    
    return *this;
}

MyString::~MyString() {
     delete [] this->str;
}

void MyString::display() const {
     cout << "Content: " << this->str << " Length: " << strlen(this->str) << endl;
}

int MyString::getLength() const {
     return strlen(this->str);
}

char* MyString::getString() const {
     return this->str;
}