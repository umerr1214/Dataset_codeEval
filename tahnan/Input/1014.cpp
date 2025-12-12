#include <iostream>
using namespace std;

template <typename T>
class Array {
public:
    T arr[5];
    T max() {
        T m = arr[0];
        for(int i = 1; i < 5; i++)
            if(arr[i] > m) m = arr[i
        return m;
    }
};

int main() {
    Array<int> a;
    a.arr[0]=1; a.arr[1]=5; a.arr[2]=3; a.arr[3]=2; a.arr[4]=4;
    cout << "Max: " << a.max() << endl;
    return 0;
}
