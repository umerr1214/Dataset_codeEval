#include <iostream>
using namespace std;

int main() {
    int* arr = new int[2];  // Start with initial size of 2
    int size = 2;
    int count = 0;
    int input;
    
    cout << "Enter numbers (enter -1 to stop): ";
    
    while (true) {
        cin >> input;
        
        if (input == -1) {
            break;
        }
        
        // Check if we need to expand the array
        if (count >= size) {
            // ❌ LOGICAL ERROR: Wrong expansion - should double the size, not add 1
            int newSize = size + 1;  // Should be size * 2
            int* newArr = new int[newSize];
            
            // Copy all elements from original array to new array
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            
            // ❌ LOGICAL ERROR: Wrong initialization range
            // Initialize elements from oldSize to newSize to zero
            for (int i = size; i <= newSize; i++) {  // Should be i < newSize, not i <= newSize
                newArr[i] = 0;
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
        arr[count] = input;
        count++;
    }
    
    // Print all values
    cout << "You entered: ";
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Deallocate memory
    delete[] arr;
    
    return 0;
}