#include <iostream>
using namespace std;

// Function to create array of squares
int* GetSquares(const int& size) {
    int* array = new int[size];
    int* ptr = array;
    
    // ❌ LOGICAL ERROR: Wrong calculation - using (i+1) instead of i
    for (int i = 0; i < size; i++) {
        *(ptr + i) = (i + 1) * (i + 1);  // Should be i * i, not (i+1) * (i+1)
    }
    
    return array;
}

// Function to print array using pointer arithmetic
void PrintArray(int* myArray, const int& size) {
    for (int i = 0; i < size; i++) {
        cout << *(myArray + i) << endl;
    }
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    
    // Get array of squares
    int* squareArray = GetSquares(size);
    
    // Print the array
    cout << "Array of squares:" << endl;
    PrintArray(squareArray, size);
    
    // Deallocate memory
    delete[] squareArray;
    
    return 0;
}