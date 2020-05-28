#include <iostream>

using namespace std;

class Base {
private:
    int num;
public:
    Base() {
        cout << "Base No Arg Constructor" << endl;
    }
};

class Derived : public Base {
private:
    int num;
public:
    Derived():Base() {
        cout << "Derived No Arg Constructor" << endl;
    }
    
    Derived(int numVal) : Base{}, num{numVal} {
        cout << "Derived One Arg Constructor" << endl;
    }
};


int main() {
    Base b;
    cout << "-------" << endl;
    Derived d;
    cout << "-------" << endl;
    Derived dd {1000};
    return 0;
}