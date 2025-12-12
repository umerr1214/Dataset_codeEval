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
            // Make a new array of double the size of original array
            int newSize = size * 2;
            int* newArr = new int[newSize];
            
            // Copy all elements of original arr in the new array
            for (int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            
            // The elements from oldSize to newSize should be initialized to zero
            for (int i = size; i < newSize; i++) {
                newArr[i] = 0;
            }
            
            // Deallocate the original array and point the arr pointer to new array
            delete[] arr;
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
    
    // De-allocate acquired dynamic memory at the end of the life cycle
    delete[] arr;
    
    return 0;
}