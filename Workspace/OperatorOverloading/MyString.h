#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
private:
    char *str;
public:
    MyString();
    ~MyString();
    MyString(const MyString &source);
    MyString(MyString &&source) noexcept;
    MyString(const char *str);
    
    //Overload Assignment Operator, Copy Assignment
    MyString &operator=(const MyString &rhs);
    
    //Overload Assignment Operator, Move Assignment
    MyString &operator=(MyString &&rhs);

    void display() const;
    int getLength() const;
    char* getString() const;
};

#endif // MYSTRING_H