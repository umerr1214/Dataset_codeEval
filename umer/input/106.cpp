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
        // Robustness Issue: No validation for s < 0 or arr == nullptr
        size = s; 
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = arr[i];
        }
    }

    ArrayInt(const ArrayInt &obj) {
        cout << "Copy Constructor Called" << endl;
        size = obj.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = obj.ptr[i];
        }
    }

    ~ArrayInt() {
        // Robustness: Deleting without checking nullptr is safe in C++, 
        // but safe delete is better practice in some contexts.
        delete[] ptr;
    }

    void display() const {
        // Robustness: No check if ptr is valid before accessing (though size handles loop)
        for (int i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    bool operator==(const ArrayInt & rhs) const {
        if (size != rhs.size) return false;
        for (int i = 0; i < size; i++) {
            if (ptr[i] != rhs.ptr[i]) return false;
        }
        return true;
    }

    bool operator!=(const ArrayInt & rhs) const {
        return !(*this == rhs);
    }

    ArrayInt & operator+=(const ArrayInt & rhs) {
        // Robustness Issue: Self-assignment check missing (though less critical for +=)
        // Robustness Issue: Integer overflow for newSize possible
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

    ArrayInt & operator-=(int n) {
        // Robustness: If size is 0, logic might fail or be undefined
        if (size == 0) return *this; 

        int index = -1;
        for (int i = 0; i < size; i++) {
            if (ptr[i] == n) {
                index = i;
                break;
            }
        }

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
    
    ArrayInt & operator-=(const ArrayInt & rhs) {
         for (int i = 0; i < rhs.size; i++) {
            *this -= rhs.ptr[i];
        }
        return *this;
    }
};

int main() {
    // Robustness test: Negative size
    // This will crash or throw bad_alloc
    // ArrayInt a1(nullptr, -5); 
    
    int arr[] = {1, 2, 3};
    ArrayInt a1(arr, 3);
    a1.display();
    
    return 0;
}