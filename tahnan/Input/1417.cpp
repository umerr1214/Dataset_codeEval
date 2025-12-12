#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Pair {
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }
    
    void swapPair() {
        T1 temp1 = first;
        first = second;
        second = temp1;
    }
    
    void display() {
        cout << first << " " << second << endl;
    }
};

int main() {
    Pair<int, int> p(1, 2);
    p.display();
    p.swapPair();
    p.display();
    return 0;
}
