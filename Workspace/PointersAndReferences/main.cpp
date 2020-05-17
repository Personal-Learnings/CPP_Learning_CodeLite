#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printPointersAndReference();

int main() {
    printPointersAndReference();
    return 0;
}

void printPointersAndReference() {
    int num {10};
    int *numPointer;
    
    double pi {3.14};
    double *piPointer {&pi};
    
    string firstName {"Madanraj"};
    string *firstNamePointer {&firstName};
    
    vector<string> nameList {"Madanraj", "Jayashree", "Yashika"};
    vector<string> *nameListPointer {&nameList};
    
    cout << "Value of Num: " << num << endl;
    cout << "Size of Num: " << sizeof(num) << endl;
    
    cout << "Empty Pointer: " << numPointer << endl;
    
    numPointer = nullptr;
    cout << "Num Pointer Pointing to Null: " << numPointer << endl;
        
    numPointer = &num;
    cout << "Value in Num Pointer: " << numPointer << endl;
    cout << "Address of Num: " << &num << endl;
    cout << "Address of Num Pointer: " << &numPointer << endl;
    cout << "Data that the Num Pointer is Pointing to: " << *numPointer << endl;

    int age {10};
    void *agePointer {&age};
    
    cout << "Size of Int Pointer in this Machine: " << sizeof(numPointer) << endl;
    cout << "Size of Double Pointer in this Machine: " << sizeof(piPointer) << endl;
    cout << "Size of String Pointer in this Machine: " << sizeof(firstNamePointer) << endl;
    cout << "Size of Vector Pointer in this Machine: " << sizeof(nameListPointer) << endl;
    cout << "Size of Void Pointer in this Machine: " << sizeof(agePointer) << endl;
    
    cout << endl;
    
    cout << "Print Vector using Pointer Reference: [ ";
    for(auto val : *nameListPointer) {
        cout << val << " ";
    }
    cout << "]" << endl;
    
    cout << endl;
    
    string homeCountry {"India"};
    string *countryPointer = &homeCountry;
    
    cout << "Home Country === Home Country Pointer                             : " << boolalpha << (homeCountry == *countryPointer) << endl;
    cout << "Home Country Address === Home Country Pointer Pointing to Address : " << boolalpha << (&homeCountry == countryPointer) << endl;
    
    int scores [] = {98, 97, 96};
    int *scoresPointer = scores;
    
    cout << "Scores Array                 : " << scores << endl;
    cout << "Scores Pointer               : " << scoresPointer << endl;
    
    cout << "Scores Array with * Operator : " << *scores << endl;
    cout << "Scores Pointer Destructured  : " << *scoresPointer << endl;
    
    int year {2008};
    int *yearPointer = &year;
    int **pointerToYearPointer = &yearPointer;
    
    cout << endl;
    
    cout << "pointerToYearPointer   : " << pointerToYearPointer << endl;
    cout << "*pointerToYearPointer  : " << *pointerToYearPointer << endl;
    cout << "**pointerToYearPointer : " << **pointerToYearPointer << endl << endl;
}