#include <iostream>
using namespace std;

int main() {
    int* arr = new int[2];  // Start with initial size of 2
    int size = 2;
    int count = 0;
    int input;
    
    cout << "Enter numbers (enter -1 to stop): ";
    
    while (true) {
        cin >> input;  // ❌ ROBUSTNESS ISSUE: No input validation
        
        if (input == -1) {
            break;
        }
        
        // Check if we need to expand the array
        if (count >= size) {
            // Make a new array of double the size
            int newSize = size * 2;
            int* newArr = new int[newSize];  // ❌ ROBUSTNESS ISSUE: No check if allocation succeeded
            
            // Copy all elements from original array to new array
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            
            // Initialize elements from oldSize to newSize to zero
            for (int i = size; i < newSize; i++) {
                newArr[i] = 0;
            }
            
            // Deallocate original array
            delete[] arr;  // ❌ ROBUSTNESS ISSUE: No null check before deletion
            
            // Point arr to new array
            arr = newArr;
            
            // Assign NULL to the pointer used to make new array
            newArr = nullptr;
            
            // Update size
            size = newSize;
        }
        
        // ❌ ROBUSTNESS ISSUE: No bounds checking before storing
        // Store the input in array
        arr[count] = input;  // What if count exceeds actual array bounds?
        count++;
    }
    
    // Print all values
    cout << "You entered: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";  // ❌ ROBUSTNESS ISSUE: No null pointer check
    }
    cout << endl;
    
    // ❌ ROBUSTNESS ISSUE: No null check before deallocation
    delete[] arr;  // What if arr is null?
    
    return 0;
}