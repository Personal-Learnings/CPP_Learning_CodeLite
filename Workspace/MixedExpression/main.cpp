#include <iostream>

using namespace std;

int main() {
    
    int a, b, c, sum;
    const int count {3};
    
    cout << "Enter 3 Integers: ";
    cin >> a >> b >> c;
    sum = a + b + c;
    float average = static_cast<float> (sum) / count;
    
    cout << "\nEntered Integers: " << a << " " << b << " " << c << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    bool result = 1 == 1;
    cout << "Resut with Bool Alpha: " << boolalpha << result << endl;
    cout << "Result with No Bool Alpha : " << noboolalpha << result << endl;

    float test2 = (float) 1;
    cout << test2 << endl;
    return 0;
}