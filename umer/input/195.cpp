#include <iostream>
using namespace std;

template <class T>
T GetMax(T a, T b) {
    return (a > b) ? a : b;
}

template <class T>
T GetMin(T a, T b) {
    return (a < b) ? a : b;
}

template <class T>
class Pair {
private:
    T first, second;
public:
    Pair(T a, T b) : first(a), second(b) {}
    T getFirst() { return first; }
    T getSecond() { return second; }
};

int main () 
{
  int i=5, j=6, k;
  long l=10, m=5, n;
  char c1 = 'a' , c2 = 'c' , c3; 
  k= GetMax(i,j);  // Semantic error: missing template parameter
  n= GetMin(l,m);  // Semantic error: missing template parameter
  c3 = GetMin(c1,c2);  // Semantic error: missing template parameter
  cout << k << endl;
  cout << n << endl;
  cout << c3 << endl;
  return 0;
}