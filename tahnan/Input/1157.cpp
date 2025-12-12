#include <iostream>
using namespace std;

class DynamicArray {
    int* arr;
    int size;
public:
    DynamicArray(int n) { size=n; arr=new int[n]; }
    void input() { for(int i=0;i<size;i++) cin>>arr[i]; }
    int sum() {
        int s=0;
        for(int i=0;i<size;i++) s += arr[i];
        return s;
    }
    ~DynamicArray() { delete[] arr; }
};

int main() {
    DynamicArray d(3);
    d.input();
    cout << d.sum() << endl;
    return 0;
}
