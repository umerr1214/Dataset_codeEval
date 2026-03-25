#include <iostream>
using namespace std;

int main() {
    // ❌ SEMANTIC ERROR: Using float array for integer input
    float* arr = new float[2];  // Should be int* for integer numbers
    int size = 2;
    int count = 0;
    float input;  // ❌ SEMANTIC ERROR: Should be int for integer input
    
    cout << "Enter numbers (enter -1 to stop): ";
    
    while (true) {
        cin >> input;
        
        if (input == -1.0) {  // ❌ SEMANTIC ERROR: Comparing with float literal
            break;
        }
        
        // Check if we need to expand the array
        if (count >= size) {
            // Make a new array of double the size
            int newSize = size * 2;
            float* newArr = new float[newSize];  // ❌ SEMANTIC ERROR: Should be int*
            
            // Copy all elements from original array to new array
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            
            // Initialize elements from oldSize to newSize to zero
            for (int i = size; i < newSize; i++) {
                newArr[i] = 0.0;  // ❌ SEMANTIC ERROR: Using float literal for zero
            }
            
            // Deallocate original array
            delete[] arr;
            
            // Point arr to new array
            arr = newArr;
            
            // Assign NULL to the pointer used to make new array
            newArr = nullptr;
            
            // Update size
            size = newSize;
        }
        
        // Store the input in array
        arr[count] = input;  // ❌ SEMANTIC ERROR: Storing float in what should be int array
        count++;
    }
    
    // Print all values
    cout << "You entered: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";  // ❌ SEMANTIC ERROR: Printing float values as integers
    }
    cout << endl;
    
    // Deallocate memory
    delete[] arr;
    
    return 0;
}