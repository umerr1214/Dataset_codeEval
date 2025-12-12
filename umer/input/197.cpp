#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b) {
    if(a>b)
        return a;
    else
        return b;
}

template <class T>
T GetMin(T a, T b) {
    if(a<b)
        return a;
    else
        return b;
}

template <class T>
class Pair {
private:
    T x, y;
public:
    Pair(T val1, T val2) {
        x = val1;
        y = val2;
    }
    T getFirst() { 
        return x; 
    }
    T getSecond() { 
        return y; 
    }
};

int main () 
{
  int i=5, j=6, k;
  long l=10, m=5, n;
  char c1 = 'a' , c2 = 'c' , c3; 
  k= GetMax<int>(i,j);
  n= GetMin<long>(l,m);
  c3 = GetMin<char>(c1,c2);
  cout << k << endl;
  cout << n << endl;
  cout << c3 << endl;
  return 0;
}