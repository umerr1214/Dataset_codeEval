#include <iostream>
using namespace std;

class Array {
private:
    int* data;
    int capacity;
    
    int isValidIndex(int index) {
        return (index >= 0 && index < capacity) ? 1 : 0;
    }

public:
    // Constructor - lacks validation (robustness issue)
    Array(int cap = 5) {
        capacity = cap;  // No validation for negative values
        data = new int[capacity];  // Could fail with negative capacity
        for (int i = 0; i < capacity; i++) {
            data[i] = 0;
        }
    }
    
    // Destructor
    ~Array() {
        delete[] data;
        data = nullptr;
    }
    
    // getValue (non-const) - lacks null pointer check (robustness issue)
    int& getValue(int index) {
        if (isValidIndex(index)) {
            return data[index];  // No check if data is null
        }
        static int dummy = 0;
        return dummy;
    }
    
    // getValue (const) - lacks null pointer check (robustness issue)
    const int& getValue(int index) const {
        if (isValidIndex(index)) {
            return data[index];  // No check if data is null
        }
        static int dummy = 0;
        return dummy;
    }
    
    // setValue - lacks null pointer check (robustness issue)
    int setValue(int index, int value) {
        if (isValidIndex(index)) {
            data[index] = value;  // No check if data is null
            return 1;
        }
        return 0;
    }
    
    // getCapacity
    int getCapacity() {
        return capacity;
    }
    
    // reSize - lacks validation (robustness issue)
    void reSize(int newCapacity) {
        int* newData = new int[newCapacity];  // No validation for negative capacity
        int minSize = (capacity < newCapacity) ? capacity : newCapacity;
        
        for (int i = 0; i < minSize; i++) {
            newData[i] = data[i];  // No check if data is null
        }
        
        for (int i = minSize; i < newCapacity; i++) {
            newData[i] = 0;
        }
        
        delete[] data;
        data = newData;
        capacity = newCapacity;
    }
    
    // Copy constructor - lacks validation (robustness issue)
    Array(const Array& other) {
        capacity = other.capacity;
        data = new int[capacity];  // No check for zero or negative capacity
        for (int i = 0; i < capacity; i++) {
            data[i] = other.data[i];  // No check if other.data is null
        }
    }
    
    // Assignment operator - lacks validation (robustness issue)
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            
            capacity = other.capacity;
            data = new int[capacity];  // No validation
            for (int i = 0; i < capacity; i++) {
                data[i] = other.data[i];  // No null check
            }
        }
        return *this;
    }
    
    // Display function - lacks null pointer check (robustness issue)
    void display() const {
        cout << "Array elements: ";
        for (int i = 0; i < capacity; i++) {
            cout << data[i] << " ";  // No check if data is null
        }
        cout << endl;
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
    
    // Test setValue and getValue
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
    arr1.reSize(8);
    cout << "After resizing to 8:" << endl;
    display(arr1);
    
    return 0;
}