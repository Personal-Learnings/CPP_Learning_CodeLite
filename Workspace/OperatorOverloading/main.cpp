#include <iostream>
#include <cstring>
#include "MyString.h"
#include <vector>

using namespace std;

int main() {
    MyString empty;
    MyString sayHello {"Hello"};
    MyString greet {sayHello};
    
    empty.display();
    sayHello.display();
    greet.display();
    
    //Here the copy assignment operator overloading happens and instead of invoking empty == sayHello the c++ compiler invokes empty.opertor=(sayHello)
    //the Hello is copied to empty
    empty = sayHello;
    empty.display();

    //Here the Move assignment operator overloading occurs as we are passing a r value reference
    empty = "Madanraj";
    empty.display();
    
    MyString greetMe{"Hello"};
    
    //For both the below lines, the Move assignment operator overloading occurs as we are passing a r value reference
    greetMe = MyString{"Vanakkam"};
    greetMe = "Perfect RHS";
    
    vector<MyString> myStrings;
    myStrings.push_back("Hello");
    myStrings.push_back("Namasthae");
    myStrings.push_back("Vanakkam");
    
    return 0;
}