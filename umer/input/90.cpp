#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int capacity;
    
    int isValidIndex(int index) const {
        return (index >= 0 && index < capacity) ? 1 : 0;
    }

public:
    // Constructor with proper validation
    Array(int cap = 5) {
        if (cap <= 0) {
            capacity = 0;
            data = nullptr;
        } else {
            capacity = cap;
            data = new int[capacity];
            for (int i = 0; i < capacity; i++) {
                data[i] = 0;
            }
        }
    }
    
    // Destructor
    ~Array() {
        delete[] data;
        data = nullptr;
        capacity = 0;
    }
    
    // getValue (non-const) with proper validation
    int& getValue(int index) {
        if (data == nullptr || !isValidIndex(index)) {
            static int dummy = 0;
            cout << "Warning: Invalid index or null data. Returning dummy reference." << endl;
            return dummy;
        }
        return data[index];
    }
    
    // getValue (const) with proper validation
    const int& getValue(int index) const {
        if (data == nullptr || !isValidIndex(index)) {
            static int dummy = 0;
            cout << "Warning: Invalid index or null data. Returning dummy reference." << endl;
            return dummy;
        }
        return data[index];
    }
    
    // setValue with proper validation
    int setValue(int index, int value) {
        if (data == nullptr) {
            cout << "Error: Array not initialized." << endl;
            return 0;
        }
        if (!isValidIndex(index)) {
            cout << "Error: Index out of bounds." << endl;
            return 0;
        }
        data[index] = value;
        return 1;
    }
    
    // getCapacity with const correctness
    int getCapacity() const {
        return capacity;
    }
    
    // reSize with proper validation and efficient implementation
    void reSize(int newCapacity) {
        if (newCapacity < 0) {
            cout << "Error: Invalid capacity. Must be non-negative." << endl;
            return;
        }
        
        if (newCapacity == 0) {
            delete[] data;
            data = nullptr;
            capacity = 0;
            return;
        }
        
        int* newData = new int[newCapacity];
        
        // Initialize new array
        for (int i = 0; i < newCapacity; i++) {
            newData[i] = 0;
        }
        
        // Copy existing data if any
        if (data != nullptr) {
            int copySize = (capacity < newCapacity) ? capacity : newCapacity;
            for (int i = 0; i < copySize; i++) {
                newData[i] = data[i];
            }
        }
        
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }
    
    // Copy constructor with proper validation
    Array(const Array& other) {
        capacity = other.capacity;
        if (capacity <= 0 || other.data == nullptr) {
            data = nullptr;
            capacity = 0;
        } else {
            data = new int[capacity];
            for (int i = 0; i < capacity; i++) {
                data[i] = other.data[i];
            }
        }
    }
    
    // Assignment operator with proper validation
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            
            capacity = other.capacity;
            if (capacity <= 0 || other.data == nullptr) {
                data = nullptr;
                capacity = 0;
            } else {
                data = new int[capacity];
                for (int i = 0; i < capacity; i++) {
                    data[i] = other.data[i];
                }
            }
        }
        return *this;
    }
    
    // Display function with proper validation and const correctness
    void display() const {
        if (data == nullptr || capacity <= 0) {
            cout << "Array is empty or not initialized." << endl;
            return;
        }
        
        cout << "Array elements: ";
        for (int i = 0; i < capacity; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    
    // Utility function to check if array is valid
    bool isValid() const {
        return (data != nullptr && capacity > 0);
    }
};

// Global display function
void display(const Array& ref) {
    ref.display();
}

int main() {
    // Test constructor
    Array arr1(5);
    cout << "Created array with capacity: " << arr1.getCapacity() << endl;
    cout << "Array valid: " << (arr1.isValid() ? "Yes" : "No") << endl;
    
    // Test setValue and getValue
    cout << "Setting values..." << endl;
    arr1.setValue(0, 10);
    arr1.setValue(1, 20);
    arr1.setValue(2, 30);
    
    cout << "After setting values:" << endl;
    display(arr1);
    
    // Test copy constructor
    Array arr2 = arr1;
    cout << "Copy constructor test:" << endl;
    display(arr2);
    
    // Test assignment operator
    Array arr3;
    arr3 = arr1;
    cout << "Assignment operator test:" << endl;
    display(arr3);
    
    // Test reSize
    cout << "Resizing array to 8..." << endl;
    arr1.reSize(8);
    cout << "After resizing to 8:" << endl;
    display(arr1);
    
    // Test edge cases
    cout << "Testing edge cases:" << endl;
    Array arr4(0);
    cout << "Empty array test:" << endl;
    display(arr4);
    
    // Test invalid operations
    cout << "Testing invalid operations:" << endl;
    arr1.setValue(-1, 100);  // Invalid index
    arr1.setValue(10, 100);  // Out of bounds
    
    return 0;
}