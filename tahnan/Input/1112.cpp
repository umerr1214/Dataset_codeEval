#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size

public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
    }

    ~DynamicArray() {
        delete arr
    }

    DynamicArray(const DynamicArray &d) {
        size = d.size;
        arr = new int[size];
        for(int i=0;i<size;i++)
            arr[i] = d.arr[i]
    }
};

int main() {
    DynamicArray a(3)
    return 0;
}
