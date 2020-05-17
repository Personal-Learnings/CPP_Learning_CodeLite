#include <iostream>

using namespace std;

void addYears(int *agePointer, size_t years);
void display(int *scores, size_t length);
void displayNew(int *scores, size_t length);
void displayArray(const int *const inputArray, size_t length);

int *createAndFillArray(size_t size, int value);
int *createAndFillArrayWithIncrementingValues(size_t size);

int main() {
    
    int age {18};
    int *agePointer {nullptr};
    agePointer = &age;
    
    addYears(&age, 2);
    cout << "After Adding Two years by passing Reference of to the Pointer : " << age << endl;

    addYears(agePointer, 2);
    cout << "After Adding Two Year by passing pointer to the pointer       : " << age << endl;

    int scores [] = {98, 97, 90};
    display(scores, 3);
    
    int scores1 [] = {98, 97, 90};
    displayNew(scores1, 3);
    
    int *newArray {nullptr}; 
    newArray = createAndFillArray(10, 7);
    displayArray(newArray, 10);
    
    newArray = createAndFillArrayWithIncrementingValues(1000);
    displayArray(newArray, 1000);
    
    delete [] newArray;
    return 0;
}

int *createAndFillArray(size_t size, int value) {
    int *arrayPointer {nullptr};
    arrayPointer = new int[size];
    
    for(size_t i{0}; i < size; i++) {
        arrayPointer[i] = value; //Pointer Subscript Notation
        //or can also be done by *(array + i) = value // Pointer Offset Notation
    }
    return arrayPointer;
}

int *createAndFillArrayWithIncrementingValues(size_t size) {
    int *outputArray = new int[size];
    for(size_t i{0}; i < size; i++) {
        outputArray[i] = i + 1;
    }
    return outputArray;
}

void addYears(int *agePointer, size_t years) {
    *agePointer += years;
}

void display(int *scores, size_t length) {
    for(size_t i = 0; i < length; i++) {
        cout << "scores[i]: " << scores[i] << endl;
    }
    cout << endl;
    for(size_t i = 0; i < length; i++) {
        cout << "*scores++: " << *scores << endl;
        scores = scores + 1;
        //or in single line cout << "*scores++: " << *scores++ << endl;
    }
}

void displayNew(int *scores, size_t length) {
    cout << endl;
    for(size_t i = 0; i < length; i++) {
        cout << "++*scores: " << ++*scores << endl;
    }
    cout << "Array Populated." << endl;
}

void displayArray(const int *const inputArray, size_t size) {
    cout << "Array: [ ";
    for(size_t i = 0; i < size; i++) {
        //cout << *inputArray++ << " ";
        cout << inputArray[i] << " ";
    }
    cout << "]" << endl;
}