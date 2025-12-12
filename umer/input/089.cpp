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
    // Constructor
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
    }
    
    // getValue (non-const)
    int& getValue(int index) {
        if (isValidIndex(index)) {
            return data[index];
        }
        static int dummy = 0;
        return dummy;
    }
    
    // getValue (const)
    const int& getValue(int index) const {
        if (isValidIndex(index)) {
            return data[index];
        }
        static int dummy = 0;
        return dummy;
    }
    
    // setValue
    int setValue(int index, int value) {
        if (isValidIndex(index)) {
            data[index] = value;
            return 1;
        }
        return 0;
    }
    
    // getCapacity
    int getCapacity() {
        return capacity;
    }
    
    // reSize - inefficient implementation (readability/efficiency issue)
    void reSize(int newCapacity) {
        if (newCapacity <= 0) {
            delete[] data;
            data = nullptr;
            capacity = 0;
            return;
        }
        
        // Inefficient: creating temporary array instead of direct allocation
        int* tempArray = new int[capacity];
        for (int i = 0; i < capacity; i++) {
            tempArray[i] = data[i];
        }
        
        delete[] data;
        data = new int[newCapacity];
        
        // Inefficient: separate loops instead of combined logic
        for (int i = 0; i < newCapacity; i++) {
            data[i] = 0;
        }
        
        int copySize = (capacity < newCapacity) ? capacity : newCapacity;
        for (int i = 0; i < copySize; i++) {
            data[i] = tempArray[i];
        }
        
        delete[] tempArray;
        capacity = newCapacity;
    }
    
    // Copy constructor - poor readability
    Array(const Array& other) {
        capacity = other.capacity;
        if (capacity > 0) {
            data = new int[capacity];
            int i = 0;  // Poor style: declaring variable in middle
            while (i < capacity) {  // Using while instead of for loop
                data[i] = other.data[i];
                i++;
            }
        } else {
            data = nullptr;
        }
    }
    
    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            
            capacity = other.capacity;
            if (capacity > 0) {
                data = new int[capacity];
                for (int i = 0; i < capacity; i++) {
                    data[i] = other.data[i];
                }
            } else {
                data = nullptr;
            }
        }
        return *this;
    }
    
    // Display function - inefficient (readability/efficiency issue)
    void display() const {
        cout << "Array elements: ";
        // Inefficient: multiple function calls instead of direct access
        for (int i = 0; i < getCapacity(); i++) {
            cout << getValue(i) << " ";  // Function call overhead
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