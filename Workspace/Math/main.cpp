#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    double firstNumber, secondNumber {};
    cout << "Enter First Number: ";
    cin >> firstNumber;

    cout << "Enter Second Number: ";
    cin >> secondNumber;
    
    cout << endl;
    cout << "First Number: " << firstNumber << endl;
    cout << "Square Root of First Number: " << sqrt(firstNumber) << endl;    
    cout << "Power of First and Second: " << pow(firstNumber, secondNumber) << endl;
    cout << "Min of Two Number: " << min(firstNumber, secondNumber) << endl;
    cout << "Max of Two Number: " << max(firstNumber, secondNumber) << endl;
    
    cout << endl;
    cout << "Random Max on this PC is: " << RAND_MAX << endl;
    srand(time(nullptr)); //Here we are seeding the random number with a different one everytime by using system time function. nullptr refers to 0
    
    cout << "5 Random Number: ";
    for(int i = 0; i < 5; i++) {
        cout << rand() << ", ";
    }
    
    cout << endl << endl;
    return 0;
}