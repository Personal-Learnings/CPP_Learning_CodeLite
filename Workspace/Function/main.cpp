#include <iostream>

using namespace std;

void sayHello();
double calculateTax(double cost, double tax = 0.01);

int main() {
    sayHello();
    cout << "Total Cost: " << calculateTax(0.03, 10) << endl;
}

void sayHello() {
    cout << "Hellooo.." << endl;
}

double calculateTax(double tax, double cost) {
    return cost + (tax * cost);
}