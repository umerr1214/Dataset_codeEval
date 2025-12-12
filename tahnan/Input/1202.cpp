#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;

public:
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
    }

    DynamicArray(const DynamicArray &d) { // copy constructor
        size = d.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = d.arr[i];
        }
    }

    void input() {
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray d(3);
    d.input();
    DynamicArray copyD = d;
    copyD.display();
    return 0;
}
