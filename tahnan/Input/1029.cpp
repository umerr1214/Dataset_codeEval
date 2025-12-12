#include <iostream>
using namespace std;

template <typename T>
class Array {
    T data[5];
public:
    void set(int i, T val) { data[i] = val; }
    T max() { T m = data[0]; for(int i=0;i<5;i++) if(data[i]<m) m = data[i]; return m; } // logical error: should find maximum
};

int main() {
    Array<int> a;
    a.set(0, 10);
    a.set(1, 5);
    a.set(2, 20);
    a.set(3, 15);
    a.set(4, 8);
    cout << "Max: " << a.max() << endl;
    return 0;
}
