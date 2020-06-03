#include <iostream>
#include <string>

using namespace std;

double divideCustomException(int i, int j);

class DivideByZeroException : public exception {
public:
    virtual const char* what() const noexcept {
        return "Custom Exception - Divide by zero.";
    }
};

double divideCustomException(int i, int j) {
    if(j == 0) throw DivideByZeroException();
    else {
        double result = static_cast<double> (i) / j;
        return result;
    }
}

double divide(int i, int j);

double divide(int i, int j) {
    if(j == 0) throw 0;
    else {
        double result = static_cast<double> (i) / j;
        return result;
    }
}

int main() {
    //Modified
    try { divide(12, 0); }
    catch(int &ex) { cerr << "Divide By Zero Exception" << endl; }
        
    try { divideCustomException(12, 0); }
    catch(DivideByZeroException &ex) { cerr << ex.what() << endl; }
    
    cout << endl;
    return 0;
}