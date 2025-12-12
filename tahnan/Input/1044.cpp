#include <iostream>
using namespace std;

template <typename T>
class Array {
    T arr[10];
    int size;
public:
    Array() { size = 0; }
    void add(T val) { arr[size++] = val; }
    T maximum() {
        T maxVal = arr[0];
        for(int i=1;i<size;i++) if(arr[i]>maxVal) maxVal=arr[i];
        return maxVal;
    }
};

int main() {
    Array<int> a;
    a.add(5);
    a.add(10);
    a.add(3);
    cout << "Max: " << a.maximum() << endl;
    return 0;
}
