#include <iostream>
using namespace std;

class ArrayInt {
private:
    int* ptr;
    int size;

public:
    // Default constructor
    ArrayInt() {
        ptr = nullptr;
        size = 0;
    }

    // Overloaded constructor
    ArrayInt(const int* arr, int s) {
        size = s;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = arr[i];
        }
    }

    // Copy constructor
    ArrayInt(const ArrayInt &obj) {
        cout << "Copy Constructor Called" << endl;
        size = obj.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = obj.ptr[i];
        }
    }

    // Destructor
    ~ArrayInt() {
        if (ptr != nullptr) {
            delete[] ptr;
        }
    }

    // Getters and Setters
    int getSize() const { return size; }
    
    // Syntax Error: Missing return type and semicolon issues
    void setSize(int s) {
        size = s
    }

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

    // Overloading ==
    bool operator==(const ArrayInt & rhs) const {
        if (size != rhs.size) return false;
        for (int i = 0; i < size; i++) {
            if (ptr[i] != rhs.ptr[i]) return false;
        }
        return true;
    }

    // Syntax Error: Missing semicolon
    bool operator!=(const ArrayInt & rhs) const {
        return !(*this == rhs);
    }

    // Overloading += (ArrayInt)
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

    // Overloading += (int)
    ArrayInt & operator+=(int n) {
        int newSize = size + 1;
        int* newPtr = new int[newSize]; // Syntax Error: int[newSize
        
        for (int i = 0; i < size; i++) {
            newPtr[i] = ptr[i];
        }
        newPtr[size] = n;
        
        delete[] ptr;
        ptr = newPtr;
        size = newSize;
        return *this;
    }

    // Overloading -= (ArrayInt)
    ArrayInt & operator-=(const ArrayInt & rhs) {
        // Simple implementation: remove occurrences of elements found in rhs
        for (int i = 0; i < rhs.size; i++) {
            *this -= rhs.ptr[i];
        }
        return *this;
    }

    // Overloading -= (int)
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
            
            for (int i = 0, j = 0; i < size; i++) {
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
} // Syntax Error: Missing semicolon after class definition

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ArrayInt a1(arr, 5);
    
    cout << "Original Array: ";
    a1.display();

    ArrayInt a2 = a1; 
    
    a1 += 6;
    cout << "After += 6: ";
    a1.display();
    
    int arr2[] = {7, 8};
    ArrayInt a3(arr2, 2);
    a1 += a3;
    cout << "After += a3: ";
    a1.display();
    
    a1 -= 3;
    cout << "After -= 3: ";
    a1.display();

    return 0;
}