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

    ArrayInt(const ArrayInt &obj) {
        cout << "Copy Constructor Called" << endl;
        size = obj.size;
        ptr = new int[size];
        for (int i = 0; i < size; i++) {
            ptr[i] = obj.ptr[i];
        }
    }

    ~ArrayInt() {
        if (ptr != nullptr) {
            delete[] ptr;
        }
    }

    void display() const {
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

    // Semantic Error: Returning reference to local variable
    ArrayInt& operator+=(int n) {
        ArrayInt temp(*this); // Create copy
        // ... resizing logic ...
        int newSize = temp.size + 1;
        int* newPtr = new int[newSize];
        for(int i=0; i<temp.size; i++) newPtr[i] = temp.ptr[i];
        newPtr[temp.size] = n;
        delete[] temp.ptr;
        temp.ptr = newPtr;
        temp.size = newSize;
        
        return temp; // Error: Returning reference to local variable 'temp'
    }

    // Semantic Error: Modifying parameter that should be const, or incorrect logic signature
    // Implementation does subtraction instead of addition (Logic/Semantic mix)
    ArrayInt& operator+=(const ArrayInt & rhs) {
        size -= rhs.size; // Semantic nonsense for +=
        return *this;
    }

    ArrayInt& operator-=(const ArrayInt & rhs) {
         return *this;
    }
    
    ArrayInt& operator-=(int n) {
        return *this;
    }
};

int main() {
    int arr[] = {1, 2, 3};
    ArrayInt a1(arr, 3);
    
    // This will cause undefined behavior due to returning reference to local
    a1 += 4; 
    a1.display();
    
    return 0;
}