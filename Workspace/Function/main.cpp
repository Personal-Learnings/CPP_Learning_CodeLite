#include <iostream>
#include <array>
#include <memory>

using namespace std;

void sayHello();
void sayHello(string name);
double calculateTax(double cost, double tax = 0.01);
void printArray(int nums[], size_t length);

int main() {
    
    string firstName {"Madanraj"};
    string myName = firstName;
    cout << "First Name: " << firstName << "  My Name: " << myName << endl;
    cout << "First Name: " << addressof(firstName) << "  My Name: " << addressof(myName) << endl;

    myName = "Madanraj Venkatesan";
    cout << "First Name: " << firstName << "  My Name: " << myName << endl;
    cout << "First Name: " << addressof(firstName) << "  My Name: " << addressof(myName) << endl;
    
    sayHello();
    
    string name {"Madan"};
    cout << "Before Say Hello: Name: " << name << endl;
    sayHello(name);
    cout << "After Say Hello: Name: " << name << endl;
    
    cout << "Total Cost: " << calculateTax(0.03, 10) << endl;
    
    int nums[] {10, 20, 30, 40};
    printArray(nums, 4);
}

void sayHello() {
    cout << "Hellooo.." << endl;
}

void sayHello(string name) {
    cout << "Inside Say Hello: " << "Hello " << name << endl;
    name = "Madanraj Venkatesan";
}

double calculateTax(double tax, double cost) {
    return cost + (tax * cost);
}

void printArray(int nums[], size_t length) {
    for(size_t i = 0; i < length; i++) {
        cout << "Index: " << i << " Value: " << nums[i] << endl;
    }
}