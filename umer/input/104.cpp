#include <iostream>
using namespace std;

class ArrayInt {
private:
    int* ptr;
    int size;

public:
    ArrayInt() {
        ptr = nullptr;
        size = 0;
    }

    ArrayInt(const int* arr, int s) {
        size = s;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = arr[i];
        }
    }

    // Logical Error: Shallow Copy in Copy Constructor
    ArrayInt(const ArrayInt &obj) {
        cout << "Copy Constructor Called" << endl;
        size = obj.size;
        ptr = obj.ptr; // LOGICAL ERROR: Pointer assignment (Shallow copy)
    }

    ~ArrayInt() {
        if (ptr != nullptr) {
            delete[] ptr;
        }
    }

    int getSize() const { return size; }
    
    int* getPtr() const { return ptr; }

    void display() const {
        if (size == 0) {
            cout << "Empty Array" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    bool operator==(const ArrayInt & rhs) const {
        if (size != rhs.size) return false;
        // Logical Error: Comparing pointers instead of values
        return ptr == rhs.ptr; 
    }

    bool operator!=(const ArrayInt & rhs) const {
        return !(*this == rhs);
    }

    ArrayInt & operator+=(const ArrayInt & rhs) {
        int newSize = size + rhs.size;
        int* newPtr = new int[newSize];
        
        for (int i = 0; i < size; i++) {
            newPtr[i] = ptr[i];
        }
        for (int i = 0; i < rhs.size; i++) {
            newPtr[size + i] = rhs.ptr[i];
        }
        
        delete[] ptr;
        ptr = newPtr;
        size = newSize;
        return *this;
    }

    ArrayInt & operator+=(int n) {
        int newSize = size + 1;
        int* newPtr = new int[newSize];
        
        for (int i = 0; i < size; i++) {
            newPtr[i] = ptr[i];
        }
        newPtr[size] = n;
        
        delete[] ptr;
        ptr = newPtr;
        size = newSize;
        return *this;
    }

    ArrayInt & operator-=(const ArrayInt & rhs) {
        for (int i = 0; i < rhs.size; i++) {
            *this -= rhs.ptr[i];
        }
        return *this;
    }

    ArrayInt & operator-=(int n) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (ptr[i] == n) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            int newSize = size - 1;
            int* newPtr = new int[newSize];
            
            // Logical Error: Incorrect loop bounds or copying logic
            // This implementation skips the wrong index or copies garbage
            for (int i = 0, j = 0; i <= size; i++) { // Error: i <= size accesses out of bounds
                if (i != index) {
                    newPtr[j++] = ptr[i];
                }
            }
            
            delete[] ptr;
            ptr = newPtr;
            size = newSize;
        }
        return *this;
    }
};

int main() {
    int arr[] = {1, 2, 3};
    ArrayInt a1(arr, 3);
    
    cout << "Original Array: ";
    a1.display();

    {
        ArrayInt a2 = a1; // Calls copy constructor (Shallow copy)
        cout << "Copy created." << endl;
    } // a2 destroyed, deletes ptr. a1.ptr is now dangling.

    cout << "After scope: ";
    // This will likely crash or print garbage due to double free or use after free
    a1.display(); 

    return 0;
}