#include <iostream>
using namespace std;

template <class T>
class Pair {
private:
    T values[2];
public:
    Pair(T a, T b) {
        values[0] = a;
        values[1] = b;
    }
    
    T GetMax() {
        return (values[0] > values[1]) ? values[0] : values[1];
    }
};

template <class T>
T Pair<T>::GetMin() {
    return (values[0] < values[1]) ? values[0] : values[1];
}

int main () 
{
  Pair <double> myobject (1.012, 1.01234);
  cout << myobject.GetMax();
  // No input validation or bounds checking
  // No error handling for invalid template types
  // Assumes T supports comparison operators
  return 0;
}