#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;
public:
    DynamicArray(int s) {
        size = s;
        arr = new int[s];
    }

    ~DynamicArray() {
        // Logical error: doesn't delete array
    }

    void set(int i, int val) {
        arr[i] = val;
    }

    int get(int i) {
        return arr[i];
    }
};

int main() {
    DynamicArray d(3);
    d.set(0, 5);
    d.set(1, 10);
    d.set(2, 15);
    cout << d.get(0) + d.get(1) + d.get(2) << endl; // should sum correctly
    return 0;
}
