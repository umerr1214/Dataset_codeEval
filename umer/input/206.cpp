#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T values[2];
    static int count;
public:
    Pair(T a, T b) {
        values[0] = a;
        values[1] = b;
        count--;  // Logical error: should be count++
    }
    
    T GetMax() {
        return (values[0] > values[1]) ? values[0] : values[1];
    }
    
    static void setCount(int c) {
        count = c;
    }
    
    static int getCount() {
        return count;
    }
};

template <class T>
int Pair<T>::count = 0;

template <class T>
T Pair<T>::GetMin() {
    return (values[0] < values[1]) ? values[0] : values[1];
}

template <class T>
class Container {
    T data;
public:
    Container(T d) : data(d) {}
    T increase() { return --data; }  // Logical error: should be ++data
};

template<>
class Container<char> {
    char data;
public:
    Container(char d) : data(d) {}
    char uppercase() { 
        if(data >= 'A' && data <= 'Z')  // Logical error: should check lowercase
            return data + 32;  // Logical error: should subtract 32
        return data;
    }
};

int main () 
{
  Pair <double> myobject1 (1.012, 1.01234);
  Pair <double> myobject2 (2.012, 2.01234);
  Pair <double> myobject3 (3.012, 3.01234);

  Pair <int> myobject4 (1, 1);
  Pair <int> myobject5 (2, 4);

  cout << "Count of int objects: " << Pair<int>::getCount() << endl;
  cout << "Count of double objects: " << Pair<double>::getCount() << endl;
  return 0;
}