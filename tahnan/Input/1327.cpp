#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) { first = a; second = b }

    void swap() {
        T1 temp = first;
        first = second;
        second = temp;
    }

    void display() { cout << first << "," << second << endl; }
};

int main() {
    Pair<int,string> p(1,"One");
    p.display();
    return 0;
}
