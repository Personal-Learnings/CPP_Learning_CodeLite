#include <iostream>
#include <vector>

using namespace std;

int main() {
    int typeOne [5] {};
    int typeTwo [5] {0};
    int typeThree [] {1, 2, 3, 4, 5};
    int typeFour [5] {1, 2};
    
    cout << typeOne[0] << endl;
    cout << typeTwo[0] << endl;
    cout << typeThree[2] << endl;
    cout << typeFour[1] << endl;
    
    cout << boolalpha;
    
    return 0;
}