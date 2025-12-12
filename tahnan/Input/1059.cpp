#include <iostream>
using namespace std;

template <typename T>
class Array {
    T arr[10];
    int size;
public:
    Array() { size = 0; }
    void add(T val) { if(size<10) arr[size++] = val; else cout<<"Array full\n"; }
    T maximum() {
        if(size==0) { cout<<"Empty array\n"; return 0; }
        T maxVal = arr[0];
        for(int i=1;i<size;i++) if(arr[i]>maxVal) maxVal=arr[i];
        return maxVal;
    }
};

int main() {
    Array<int> a;
    int n;
    cin >> n;
    for(int i=0;i<n;i++) { int x; cin >> x; a.add(x); }
    cout << "Max: " << a.maximum() << endl;
    return 0;
}
