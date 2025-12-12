#include<iostream>
using namespace std;

template<class T>
class Array {
    T arr[100];
    int n;
public:
    Array(T a[], int size) {
        n = size;
        for(int i=0; i<n; i++)
            arr[i] = a[i];
    }
    T maxElement() {
        T maxVal = arr[0];
        for(int i=1; i<n; i++)
            if(arr[i] > maxVal)
                maxVal = arr[i];
        return maxVal;
    }
};

int main(){
    int n; cin >> n;
    int a[100];
    for(int i=0; i<n; i++) cin >> a[i];
    Array<int> arr(a,n);
    cout << "Max: " << arr.maxElement() << endl;
    return 0;
}
