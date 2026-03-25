#include <iostream>
using namespace std;

// Function to create array of squares
int* GetSquares(const int& size) {
    // ❌ ROBUSTNESS ISSUE: No validation for negative or zero size
    int* array = new int[size];  // What if size is negative or zero?
    int* ptr = array;
    
    // Save squares of index "i" in the array using pointer arithmetic
    for (int i = 0; i < size; i++) {
        *(ptr + i) = i * i;
    }
    
    return array;
}

// Function to print array using pointer arithmetic
void PrintArray(int* myArray, const int& size) {
    // ❌ ROBUSTNESS ISSUE: No null pointer check
    for (int i = 0; i < size; i++) {
        cout << *(myArray + i) << endl;  // What if myArray is null?
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;  // ❌ ROBUSTNESS ISSUE: No input validation
    
    // Get array of squares
    int* squareArray = GetSquares(size);
    
    // ❌ ROBUSTNESS ISSUE: No check if memory allocation succeeded
    // Print the array
    cout << "Array of squares:" << endl;
    PrintArray(squareArray, size);
    
    // Deallocate memory
    delete[] squareArray;  // ❌ ROBUSTNESS ISSUE: No null check before deletion
    
    return 0;
}