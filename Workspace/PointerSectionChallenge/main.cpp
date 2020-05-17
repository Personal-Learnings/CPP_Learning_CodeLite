#include <iostream>

using namespace std;

int *applyAll(int *array1, size_t array1Size, int *array2, size_t array2Size);
void print(int *array, size_t size);

int main() {
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
        
    const size_t array1Size {5};
    const size_t array2Size {3};
    
    cout << "Array 1: ";
    print(array1, array1Size);

    cout << "Array 2: ";
    print(array2, array2Size);

    int *newArray = applyAll(array1, array1Size, array2, array2Size);    
    constexpr size_t size {array1Size * array2Size};

    cout << "Result : ";
    print(newArray, size);
    
    delete [] newArray;
    return 0;
}

int *applyAll(int *array1, size_t array1Size, int *array2, size_t array2Size) {
    int *outputArray = new int[array1Size * array2Size];
    
    for(size_t i {0}, k {0}; i < array1Size; i++) {
        for(size_t j {0}; j < array2Size; j++, k++) {
            outputArray[k] = (array1[i]) * (array2[j]);
        }
    }
    return outputArray;
}

void print(int *array, size_t size) {
    
    cout << "[ ";
    for(size_t i {0}; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "]" << endl;
}