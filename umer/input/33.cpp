#include <iostream>
using namespace std;

// ❌ SEMANTIC ERROR: Wrong return type - should return int* but declared as float*
float* GetSquares(const int& size) {
    int* array = new int[size];  // Creating int array but returning float*
    int* ptr = array;
    
    // Save squares of index "i" in the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        *(ptr + i) = i * i;
    }
    
    return array;  // Type mismatch: returning int* when function expects float*
}

// ❌ SEMANTIC ERROR: Parameter type mismatch
void PrintArray(float* myArray, const int& size) {  // Should be int* not float*
    for (int i = 0; i < size; i++) {
        cout << *(myArray + i) << endl;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    // Get array of squares
    float* squareArray = GetSquares(size);  // Type mismatch in assignment
    
    // Print the array
    cout << "Array of squares:" << endl;
    PrintArray(squareArray, size);
    
    // Deallocate memory
    delete[] squareArray;
    
    return 0;
}