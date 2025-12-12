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

    // Overloaded constructor with deep copy
    ArrayInt(const int* arr, int s) {
        if (s < 0) {
            size = 0;
            ptr = nullptr;
        } else {
            size = s;
            ptr = new int[size];
            for (int i = 0; i < size; i++) {
                ptr[i] = arr[i];
            }
        }
    }

    // Copy constructor with deep copy
    ArrayInt(const ArrayInt &obj) {
        cout << "Copy Constructor Called" << endl;
        size = obj.size;
        if (size > 0) {
            ptr = new int[size];
            for (int i = 0; i < size; i++) {
                ptr[i] = obj.ptr[i];
            }
        } else {
            ptr = nullptr;
        }
    }

    // Destructor
    ~ArrayInt() {
        if (ptr != nullptr) {
            delete[] ptr;
            ptr = nullptr;
        }
    }

    // Getters and Setters
    int getSize() const {
        return size;
    }

    // Display Function
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

    // Overloading == operator
    bool operator==(const ArrayInt & rhs) const {
        if (size != rhs.size) return false;
        for (int i = 0; i < size; i++) {
            if (ptr[i] != rhs.ptr[i]) return false;
        }
        return true;
    }

    // Overloading != operator
    bool operator!=(const ArrayInt & rhs) const {
        return !(*this == rhs);
    }

    // Overloading += operator (Concatenate ArrayInt)
    ArrayInt & operator+=(const ArrayInt & rhs) {
        if (rhs.size == 0) return *this;

        int newSize = size + rhs.size;
        int* newPtr = new int[newSize];
        
        // Copy existing elements
        for (int i = 0; i < size; i++) {
            newPtr[i] = ptr[i];
        }
        // Append new elements
        for (int i = 0; i < rhs.size; i++) {
            newPtr[size + i] = rhs.ptr[i];
        }
        
        delete[] ptr;
        ptr = newPtr;
        size = newSize;
        return *this;
    }

    // Overloading += operator (Append element)
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

    // Overloading -= operator (Remove first occurrence of n)
    ArrayInt & operator-=(int n) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (ptr[i] == n) {
                index = i;
                break;
            }
        }

        // If found, shrink array
        if (index != -1) {
            int newSize = size - 1;
            int* newPtr = nullptr;
            
            if (newSize > 0) {
                newPtr = new int[newSize];
                for (int i = 0, j = 0; i < size; i++) {
                    if (i != index) {
                        newPtr[j++] = ptr[i];
                    }
                }
            }
            
            delete[] ptr;
            ptr = newPtr;
            size = newSize;
        }
        return *this;
    }

    // Overloading -= operator (Remove elements present in rhs)
    ArrayInt & operator-=(const ArrayInt & rhs) {
        for (int i = 0; i < rhs.size; i++) {
            *this -= rhs.ptr[i];
        }
        return *this;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ArrayInt a1(arr, 5);
    
    cout << "Original Array: ";
    a1.display();

    ArrayInt a2 = a1; // Tests copy constructor
    
    cout << "Testing += int:" << endl;
    a1 += 6;
    a1.display();
    
    cout << "Testing += ArrayInt:" << endl;
    int arr2[] = {7, 8};
    ArrayInt a3(arr2, 2);
    a1 += a3;
    a1.display();
    
    cout << "Testing -= int:" << endl;
    a1 -= 3;
    a1.display();

    cout << "Testing -= ArrayInt:" << endl;
    int arr3[] = {1, 5};
    ArrayInt a4(arr3, 2);
    a1 -= a4;
    a1.display();

    if (a1 != a2) {
        cout << "Arrays are correctly different." << endl;
    }

    return 0;
}