#include <iostream>
using namespace std;

template <typename T>
class Array {
private:
    T* arr;
    int size;

public:
    Array(int s) 
    {
        size = s;
        arr = new T[size];
    }

    void setValue(int index, T value) 
    {
        if (index >= 0 && index < size)
            arr[index] = value;
    }

    T getMax() 
    {
        T max = arr[0];
        for (int i = 1; i < size; i++) 
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    ~Array() 
    {
        delete[] arr;
    }
};

int main() 
{
    int n;
    cin >> n;
    Array<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        int val;
        cin >> val;
        a.setValue(i, val);
    }
    cout << "Maximum: " << a.getMax() << endl;
    return 0;
}
