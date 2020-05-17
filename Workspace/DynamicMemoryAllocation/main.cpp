#include <iostream>

using namespace std;

void createIntArrayDynamically(size_t);
void playWithPointerAndArray();
void playWithDynamicMemoryAllocation();

int main() {
    createIntArrayDynamically(5);
    playWithPointerAndArray();
    playWithDynamicMemoryAllocation();
    return 0;
}

void createIntArrayDynamically(size_t size) {
    int *employeeIds = new int[size];
    
    for(size_t i {0}; i < size; i++) {
        employeeIds[i] = i * 2811;
    }
    
    for(size_t i {0}; i < size; i++) {
        cout << employeeIds[i] << " ";
    }

    cout << endl;
}

void playWithPointerAndArray() {
    int ageArray [] {23, 43, 54};
    
    cout << "Age Array                                                   : ";
    for(auto s : ageArray)
        cout << s << " ";
    cout << endl;
    
    cout << "When Age Array is Printed                                   : " << ageArray << " The address of the first element in the array." << endl;
    cout << "When Age Array is incremented by one                        : " << ageArray + 1 << " The address of the first element is incremented by 4 (int size)." << endl;
    cout << "When Age Array is incremented by one and Pointer is Printed : " << *(ageArray + 1) << " The address is incremented and the value in that address is printed" << endl;
    cout << "Age Array with * Operator (Pointer)                         : " << *ageArray << " The value of the first element in the array." << endl;
    cout << "When Age Array Pointer is incremented by one                : " << *ageArray + 1 << " Increments the value of the first element in the array." << endl;
}

void playWithDynamicMemoryAllocation() {
    cout << endl << endl;
    
    int *agePointer = new int{10};
    cout << "Age Pointer              : " << agePointer << endl;
    cout << "Age Pointer Reference    : " << &agePointer << endl;
    cout << "Age Pointer Destrucutred : " << *agePointer << endl;
}